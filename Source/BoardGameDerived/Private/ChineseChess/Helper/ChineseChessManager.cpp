// Fill out your copyright notice in the Description page of Project Settings.


#include "ChineseChess/Helper/ChineseChessManager.h"
#include "ChineseChess/ChineseChessBoardSlot.h"
#include "ChineseChess/Helper/ChineseChessSet.h"
#include "ChineseChess/Helper/ChineseChessHistoryRecorder.h"
#include "ChineseChess/ChineseChessBoard.h"
#include "ChineseChess/ChineseChessPawn.h"
#include "GameFramework/PlayerState.h"
#include "Net/UnrealNetwork.h"

AChineseChessManager::AChineseChessManager() 
{
	bReplicates = true;
}

void AChineseChessManager::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AChineseChessManager, SelectedPawn);
	DOREPLIFETIME(AChineseChessManager, PlayerContainer);
	DOREPLIFETIME(AChineseChessManager, RoundState);
}

void AChineseChessManager::Multicast_OnPlayerSeated_Implementation(APlayerState* Player, EChineseChessPlayer Type)
{
	AChineseChessBoard* ChineseChessBoard = Cast<AChineseChessBoard>(Board);
	if (ChineseChessBoard)
	{
		if (Player->GetPlayerController() == GetWorld()->GetFirstPlayerController())
		{
			ChineseChessBoard->OnPlayerSeated(Type);
		}
	}
}

void AChineseChessManager::Multicast_OnPlayerLeave_Implementation(APlayerState* Player, EChineseChessPlayer Type)
{
	AChineseChessBoard* ChineseChessBoard = Cast<AChineseChessBoard>(Board);
	if (ChineseChessBoard)
	{
		if (Player->GetPlayerController() == GetWorld()->GetFirstPlayerController())
		{
			ChineseChessBoard->OnPlayerLeave(Player, Type);
		}
	}
}

void AChineseChessManager::SetSelectedPawn(AChineseChessPawn* NewPawn)
{
	if (SelectedPawn)
	{
		SelectedPawn->SetStatus(EChineseChessPawnStatus::Idle);
	}

	NotifySlotsHide();

	if (NewPawn != nullptr)
	{
		SelectedPawn = NewPawn;
		SelectedPawn->SetStatus(EChineseChessPawnStatus::Selected);
		GetHistoryRecorder()->CurrentHistoryItem.PawnName = SelectedPawn->GetPawnName();
		GetHistoryRecorder()->CurrentHistoryItem.StartPos = SelectedPawn->GetSlotPos();

		// 通知这个棋子能到达的槽位
		//TArray<FVector2D> ProbablePositions;
		//SelectedPawn->MoveRule(ProbablePositions);
		//NotifyMovableSlotsShow(ProbablePositions);
	}
	else
	{
		SelectedPawn = nullptr;
	}
}

UChineseChessHistoryRecorder* AChineseChessManager::GetHistoryRecorder()
{
	return HistoryRecorder;
}

FVector AChineseChessManager::GetSlotLocation(const FVector2D& InVec)
{
	return GetSlotLocation(InVec.X, InVec.Y);
}

FVector AChineseChessManager::GetSlotLocation(int32 X, int32 Y)
{
	UChineseChessBoardSlot* Slot = GetSlot(X,	Y);
	if (Slot)
	{
		return Slot->GetComponentLocation();
	}
	return FVector::ZeroVector;
}

UChineseChessBoardSlot* AChineseChessManager::GetSlot(const FVector2D& InVec)
{
	return GetSlot(InVec.X, InVec.Y);
}

UChineseChessBoardSlot* AChineseChessManager::GetSlot(int32 X, int32 Y)
{
	return Cast<AChineseChessBoard>(Board)->GetSlot(X, Y);
}

EChineseChessPlayerSeated AChineseChessManager::GetRemainPlayer()
{
	if (Chu && Han)
	{
		return EChineseChessPlayerSeated::Filled;
	}
	else
	{
		if (!Chu && Han)
		{
			return EChineseChessPlayerSeated::RemainChu;
		}
		else if (!Han && Chu)
		{
			return EChineseChessPlayerSeated::RemainHan;
		}
		return EChineseChessPlayerSeated::RemainBothSide;
	}
}

void AChineseChessManager::PlayerSeated(EChineseChessPlayer PlayerCamp, APlayerState* NewPlayer)
{
	if (NewPlayer)
	{
		switch (PlayerCamp)
		{
		case EChineseChessPlayer::Chu:
			Chu = NewPlayer;
			break;
		case EChineseChessPlayer::Han:
			Han = NewPlayer;
			break;
		default:
			break;
		}

		Multicast_OnPlayerSeated(NewPlayer, PlayerCamp);

		OnPlayerSeated(PlayerCamp);
	}
}

void AChineseChessManager::PlayerLeave(APlayerState* Player)
{
	if (IsSeating(Player))
	{
		if (Player == Chu)
		{
			Chu = nullptr;
			OnPlayerLeave(Player, EChineseChessPlayer::Chu);
			Multicast_OnPlayerLeave(Player, EChineseChessPlayer::Chu);
		}
		else
		{
			Han = nullptr;
			OnPlayerLeave(Player, EChineseChessPlayer::Han);
			Multicast_OnPlayerLeave(Player, EChineseChessPlayer::Han);
		}
	}
}

APlayerState* AChineseChessManager::GetPlayer(EChineseChessPlayer PlayerCamp)
{
	switch (PlayerCamp)
	{
	case EChineseChessPlayer::Chu:
		return Chu;
	case EChineseChessPlayer::Han:
		return Han;
	default:
		break;
	}
	return nullptr;
}

bool AChineseChessManager::GetPlayerCamp(APlayerState* PlayerState, EChineseChessPlayer& PlayerCamp)
{
	if (IsSeating(PlayerState))
	{
		if (PlayerState == Chu)
		{
			PlayerCamp = EChineseChessPlayer::Chu;
		}
		else
		{
			PlayerCamp = EChineseChessPlayer::Han;
		}
		return true;
	}
	return false;
}

bool AChineseChessManager::IsPlayerCamp(APlayerState* InPlayerState, EChineseChessPlayer& InPlayerCamp)
{
	EChineseChessPlayer PlayerCamp;
	if (GetPlayerCamp(InPlayerState, PlayerCamp))
	{
		if (PlayerCamp == InPlayerCamp)
		{
			return true;
		}
	}
	return false;
}

bool AChineseChessManager::IsSeating(APlayerState* PlayerState)
{
	if (PlayerState == Han || PlayerState == Chu)
	{
		return true;
	}
	return false;
}

void AChineseChessManager::ProcessBoardClick(UChineseChessBoardSlot* Slot, APlayerState* PlayerState)
{
	if (!IsRound(PlayerState))
	{
		UE_LOG(LogTemp, Log, L"不是你的回合");
		return;
	}

	const bool bOccupied = Slot->IsOccupied();
	const FVector2D SlotPos = Slot->GetSlotPos();
	AChineseChessPawn* OccupiedPawn = nullptr;
	if (bOccupied)
	{
		OccupiedPawn = Cast<AChineseChessPawn>(Slot->GetOccupyingPawn());
	}

	// 如果没有SelectedPawn，并且没有点击到Pawn，什么也不用做
	// 如果没有SelectedPawn，并且点击到Pawn，设置它
	// 如果有SelectedPawn，获取它可以合法到达的位置，与点击位置比较，不在其中，且此位置上有己方棋子，切换SelectedPawn为该棋子
	// 如果有SelectedPawn，获取它可以合法到达的位置，与点击位置比较，不在其中，且此位置没有棋子或敌方棋子，切换SelectedPawn为空
	// 如果有SelectedPawn，获取它可以合法到达的位置，与点击位置比较，是可以到达的位置，将棋子移动到目标位置。

	if (SelectedPawn)
	{
		TArray<FVector2D> ProbablePositions;
		//SelectedPawn->MoveRule(ProbablePositions);

		if (ProbablePositions.Contains(SlotPos))
		{
			// 检查点击位置是否在可移动位置列表中

			// 移动棋子到新位置
			SelectedPawn->MovePawn(SlotPos);
			RoundSwitch();

			SetSelectedPawn(nullptr); // 清除选中的棋子
		}
		else
		{
			// 点击位置不在可移动列表中
			if (bOccupied && OccupiedPawn != SelectedPawn && OccupiedPawn->GetCamp() == SelectedPawn->GetCamp())
			{
				// 点击了另一个己方棋子，切换选中的棋子
				
				// 如果这个棋子不是己方阵营的，啥也不做
				const EChineseChessCamp PlayerCamp = (RoundState == EChineseChessRoundState::RoundChu ? EChineseChessCamp::Chu : EChineseChessCamp::Han);
				if (OccupiedPawn->GetCamp() != PlayerCamp)
				{
					UE_LOG(LogTemp, Log, L"选中的棋子并非可控");
					return;
				}
				else
				{
					SetSelectedPawn(OccupiedPawn);
				}
			}
			else
			{
				// 点击位置没有棋子，或者是敌方棋子，取消选中
				SetSelectedPawn(nullptr);
			}
		}
	}
	else
	{
		if (bOccupied)
		{
			// 没有选中的棋子，点击到了一个棋子，选中它

			// 如果这个棋子不是己方阵营的，啥也不做
			const EChineseChessCamp PlayerCamp = (RoundState == EChineseChessRoundState::RoundChu ? EChineseChessCamp::Chu : EChineseChessCamp::Han);
			if (OccupiedPawn->GetCamp() != PlayerCamp)
			{
				UE_LOG(LogTemp, Log, L"选中的棋子并非可控");
				return;
			}
			else
			{
				SetSelectedPawn(OccupiedPawn);
			}
		}
		else
		{
			// 否则，点击到空位置，什么也不做
		}
	}
}

void AChineseChessManager::GameStart()
{
	EChineseChessPlayerSeated SeatedState = GetRemainPlayer();
	switch (SeatedState)
	{
	case EChineseChessPlayerSeated::Filled:
		RoundState = EChineseChessRoundState::RoundHan;
		HistoryRecorder = NewObject<UChineseChessHistoryRecorder>(this);
		UE_LOG(LogTemp, Log, L"游戏开始了");
		break;
	case EChineseChessPlayerSeated::RemainBothSide:
		break;
	case EChineseChessPlayerSeated::RemainChu:
		UE_LOG(LogTemp, Log, L"等待楚军入座");
		break;
	case EChineseChessPlayerSeated::RemainHan:
		UE_LOG(LogTemp, Log, L"等待汉军入座");
		break;
	default:
		break;
	}

	OnGameStart(SeatedState);
}

void AChineseChessManager::Restart()
{
	InitializePawns();
}

void AChineseChessManager::Withdraw()
{
	
}

void AChineseChessManager::GiveUp(APlayerState* Player)
{
	if (HasAuthority())
	{
		if (IsSeating(Player))
		{
			if (Player == Chu)
			{
				OnGiveUp(EChineseChessPlayer::Chu);
			}
			else
			{
				OnGiveUp(EChineseChessPlayer::Han);
			}
			
			OnGameOver();
		}
	}
}

void AChineseChessManager::SwitchCamp(APlayerState* Player, EChineseChessPlayer TargetCamp)
{
	EChineseChessPlayer PlayerCamp = EChineseChessPlayer::Chu;
	if (!GetPlayerCamp(Player, PlayerCamp))
	{
		return;
	}

	if (TargetCamp == PlayerCamp)
	{
		return;
	}

	if (Player == Chu)
	{
		APlayerState* TempPlayer = Han;
		Han = Player;
		Chu = TempPlayer;
	}
	else
	{
		APlayerState* TempPlayer = Chu;
		Chu = Player;
		Han = TempPlayer;
	}

	OnSwitchCamp(Player);
}

void AChineseChessManager::RoundSwitch()
{
	if (HasAuthority())
	{
		EChineseChessCheckState CheckResult = Check(true);
		switch (CheckResult)
		{
		case EChineseChessCheckState::Illegal:
		{
			RevokeOperate(0);
			OnIllegal(RoundState);
			return;
		}
			break;
		case EChineseChessCheckState::Check:
		{
			GetHistoryRecorder()->CurrentHistoryItem.isChecker = true;
			OnCheck(RoundState);
		}
			break;
		case EChineseChessCheckState::CheckMate:
		{
			GetHistoryRecorder()->CurrentHistoryItem.isChecker = true;
			OnCheckMate(RoundState);
			GetHistoryRecorder()->AddHistoryItem();
			OnGameOver();
			return;
		}
		break;
		default:
			break;
		}

		GetHistoryRecorder()->AddHistoryItem();
	}

	switch (RoundState)
	{
	case EChineseChessRoundState::RoundChu:
		RoundState = EChineseChessRoundState::RoundHan;
		break;
	case EChineseChessRoundState::RoundHan:
		RoundState = EChineseChessRoundState::RoundChu;
		break;
	default:
		break;
	}

	OnRoundSwitch(RoundState);
}

bool AChineseChessManager::IsRound(APlayerState* PlayerState)
{
	if (IsSeating(PlayerState))
	{
		if (PlayerState == Chu && RoundState == EChineseChessRoundState::RoundChu)
		{
			return true;
		}
		
		if (PlayerState == Han && RoundState == EChineseChessRoundState::RoundHan)
		{
			return true;
		}
	}
	return false;
}

bool AChineseChessManager::IsKingFaceToFace()
{
	const FVector2D JiangPos = (*PawnMap_Chu.Find(L"Pawn_Chu_Jiang"))->GetSlotPos();
	const FVector2D ShuaiPos = (*PawnMap_Han.Find(L"Pawn_Han_Shuai"))->GetSlotPos();

	if (ShuaiPos.X == JiangPos.X)
	{
		FVector2D CheckPos = JiangPos;
		do 
		{
			CheckPos.Y += 1;
			if (GetSlot(CheckPos)->IsOccupied())
			{
				return false;
			}
		} while (ShuaiPos.Y-1 > CheckPos.Y); 
		
		return true;
	}
	else
	{
		return false;
	}
}

EChineseChessCheckState AChineseChessManager::Check(bool bCheckMate)
{
	const FVector2D JiangPos = (*PawnMap_Chu.Find(L"Pawn_Chu_Jiang"))->GetSlotPos();
	const FVector2D ShuaiPos = (*PawnMap_Han.Find(L"Pawn_Han_Shuai"))->GetSlotPos();

	// 检查所有场上是否有棋子将军
	TArray<FVector2D> AttackPositions_Chu;
	TArray<FVector2D> AttackPositions_Han;

	for (const TPair<FString, AChineseChessPawn*>& Pair : PawnMap_Chu)
	{
		FString Key = Pair.Key;
		AChineseChessPawn* Pawn = Pair.Value;

		// 将可受到攻击的位置保存在AttackPositions中
		if (Pawn && Pawn->IsAlive())
		{
			TArray<FVector2D> ProbablePositions;
			//Pawn->MoveRule(ProbablePositions);

			for (const FVector2D& ProbablePos : ProbablePositions)
			{
				AttackPositions_Chu.AddUnique(ProbablePos);
			}
		}
	}

	for (const TPair<FString, AChineseChessPawn*>& Pair : PawnMap_Han)
	{
		FString Key = Pair.Key;
		AChineseChessPawn* Pawn = Pair.Value;

		// 将可受到攻击的位置保存在AttackPositions中
		if (Pawn && Pawn->IsAlive())
		{
			TArray<FVector2D> ProbablePositions;
			//Pawn->MoveRule(ProbablePositions);

			for (const FVector2D& ProbablePos : ProbablePositions)
			{
				AttackPositions_Han.AddUnique(ProbablePos);
			}
		}
	}

	// 检查是否被将军
	// 如果在己方回合内己方被将军，撤回操作
	// 如果在己方回合内敌方被将军，检查是否将死
	if (IsKingFaceToFace())
	{
		return EChineseChessCheckState::Illegal;
	}
	
	switch (RoundState)
	{
	case EChineseChessRoundState::None:
		break;
	case EChineseChessRoundState::RoundChu:
		if (AttackPositions_Han.Contains(JiangPos))
		{
			// 撤回操作
			return EChineseChessCheckState::Illegal;
		}
		else
		{
			if (AttackPositions_Chu.Contains(ShuaiPos))
			{
				// 检查是否被将死
				if (bCheckMate && CheckMate(PawnMap_Han, ShuaiPos, PawnMap_Chu))
				{
					return EChineseChessCheckState::CheckMate;
				}
				return EChineseChessCheckState::Check;
			}
		}
		break;
	case EChineseChessRoundState::RoundHan:
		if (AttackPositions_Chu.Contains(ShuaiPos))
		{
			// 撤回操作
			return EChineseChessCheckState::Illegal;
		}
		else
		{
			if (AttackPositions_Han.Contains(JiangPos))
			{
				// 检查是否被将死
				if (bCheckMate && CheckMate(PawnMap_Chu, JiangPos, PawnMap_Han))
				{
					return EChineseChessCheckState::CheckMate;
				}
				return EChineseChessCheckState::Check;
			}
		}
		break;
	default:
		break;
	}
	return EChineseChessCheckState::None;
}

bool AChineseChessManager::CheckMate(const TMap<FString, AChineseChessPawn*>& DefensePawnMap, const FVector2D& DefenseKingPos, const TMap<FString, AChineseChessPawn*>& AttackPawnMap)
{
	FChineseChessHistoryItem SavedItem = GetHistoryRecorder()->CurrentHistoryItem;
	GetHistoryRecorder()->CurrentHistoryItem = FChineseChessHistoryItem();
	RoundState = (RoundState == EChineseChessRoundState::RoundChu) ? EChineseChessRoundState::RoundHan : EChineseChessRoundState::RoundChu;

	for (const TPair<FString, AChineseChessPawn*>& DefensePair : DefensePawnMap)
	{
		FString DefenseKey = DefensePair.Key;
		AChineseChessPawn* DefensePawn = DefensePair.Value;

		if (DefensePawn && DefensePawn->IsAlive())
		{
			// 该棋子尝试解将
			TArray<FVector2D> ProbableDefensePositions;
			//DefensePawn->MoveRule(ProbableDefensePositions);
			for (const FVector2D& ProbableDefensePos : ProbableDefensePositions)
			{
				GetHistoryRecorder()->CurrentHistoryItem.PawnName = DefensePawn->GetPawnName();
				GetHistoryRecorder()->CurrentHistoryItem.StartPos = DefensePawn->GetSlotPos();
				DefensePawn->MovePawn(ProbableDefensePos);

				// 检查是否还在将军
				EChineseChessCheckState IsStillCheck = Check();

				FChineseChessHistoryItem Temporary = GetHistoryRecorder()->CurrentHistoryItem;
				DefensePawn->MovePawn(Temporary.StartPos);
				if (Temporary.isKiller)
				{
					AChineseChessPawn* DeadPawn = (*AttackPawnMap.Find(Temporary.KilledName));
					DeadPawn->Resume();
					DeadPawn->SetupSlot(GetSlot(Temporary.EndPos));
				}

				if (IsStillCheck != EChineseChessCheckState::Illegal)
				{
					GetHistoryRecorder()->CurrentHistoryItem = SavedItem;
					RoundState = (RoundState == EChineseChessRoundState::RoundChu) ? EChineseChessRoundState::RoundHan : EChineseChessRoundState::RoundChu;
					return false;
				}
			}
		}
	}
	// 无力回天，被将死了
	GetHistoryRecorder()->CurrentHistoryItem = SavedItem;
	RoundState = (RoundState == EChineseChessRoundState::RoundChu) ? EChineseChessRoundState::RoundHan : EChineseChessRoundState::RoundChu;
	return true;
}

void AChineseChessManager::RevokeOperate(int32 Num)
{
	if (Num == 0)
	{
		const FChineseChessHistoryItem& Item = GetHistoryRecorder()->CurrentHistoryItem;
		int32 Length = GetHistoryRecorder()->GetLength();
		const TMap<FString, AChineseChessPawn*>& ActivePawnMap = (Length % 2) ? PawnMap_Chu : PawnMap_Han;
		const TMap<FString, AChineseChessPawn*>& PassivePawnMap = (Length % 2) ? PawnMap_Han: PawnMap_Chu;
		AChineseChessPawn* RevokedPawn = (*ActivePawnMap.Find(Item.PawnName));
		RevokedPawn->MovePawn(Item.StartPos);
		if (Item.isKiller)
		{
			AChineseChessPawn* DeadPawn = (*PassivePawnMap.Find(Item.KilledName));
			DeadPawn->Resume();
			DeadPawn->SetupSlot(GetSlot(Item.EndPos));
		}

		GetHistoryRecorder()->CurrentHistoryItem = FChineseChessHistoryItem();
	}
	else if (Num <= GetHistoryRecorder()->GetLength())
	{
		for (; Num > 0; Num--)
		{
			const FChineseChessHistoryItem& Item = GetHistoryRecorder()->GetLastHistoryItem();
			int32 Length = GetHistoryRecorder()->GetLength(); 
			const TMap<FString, AChineseChessPawn*>& ActivePawnMap = (Length % 2) ? PawnMap_Han : PawnMap_Chu;
			const TMap<FString, AChineseChessPawn*>& PassivePawnMap = (Length % 2) ? PawnMap_Chu : PawnMap_Han;
			AChineseChessPawn* RevokedPawn = (*ActivePawnMap.Find(Item.PawnName));
			RevokedPawn->MovePawn(Item.StartPos);
			if (Item.isKiller)
			{
				AChineseChessPawn* DeadPawn = (*PassivePawnMap.Find(Item.KilledName));
				DeadPawn->Resume();
				DeadPawn->SetupSlot(GetSlot(Item.EndPos));
			}

			GetHistoryRecorder()->RemoveLastHistoryItem();
		}
	}
}

void AChineseChessManager::RegisterPawn(UWorld* World, TSubclassOf<AChineseChessPawn> PawnClass, const FString& PawnClassName, const FVector2D& Slot, FActorSpawnParameters SpawnParams)
{
	AChineseChessPawn* PawnPtr = GeneratePawn(World, PawnClass, Slot, SpawnParams);
	if (PawnPtr)
	{
		// 对棋子进行一些设置
		PawnPtr->Initialize(PawnClassName, this);
		PawnPtr->SetupSlot(GetSlot(Slot));

		PawnArray.Emplace(PawnPtr);
	}
}

AChineseChessPawn* AChineseChessManager::GeneratePawn(UWorld* World, TSubclassOf<AChineseChessPawn> PawnClass,const FVector2D& Slot, FActorSpawnParameters SpawnParams)
{
	// 获取棋盘的缩放
	const FVector SpawnScale = Board->GetActorScale3D();
	
	const FVector SpawnLoca = Cast<AChineseChessBoard>(GetBoard())->GetSlot(Slot)->GetComponentLocation();

	// 生成棋子使用的变换
	const FTransform SpawnTransform = FTransform(FRotator::ZeroRotator, SpawnLoca, SpawnScale);

	return World->SpawnActor<AChineseChessPawn>(PawnClass, SpawnTransform, SpawnParams);
}

void AChineseChessManager::InitializePawns()
{
	UWorld* World = GetWorld();
	if (World && GameSet)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		for (int32 i = 0; i < BOARDSIZE_X * BOARDSIZE_Y; i++)
		{
			const FString& PawnClassName = ChineseChessSet::InitStatus[i];
			if (PawnClassName == "Empty") // 还是稍微优化下罢
			{
				continue;
			}

			const FString ReflexName = "PawnClass_" + PawnClassName;

			int32 X = i % BOARDSIZE_X;
			int32 Y = i / BOARDSIZE_Y;

			FProperty* Property = FindField<FProperty>(GameSet->GetClass(), *ReflexName);
			if (Property)
			{
				if (Property->IsA<TSubclassOf<AChineseChessPawn>>())
				{
					TSubclassOf<AChineseChessPawn>* PawnClassPtr = Property->ContainerPtrToValuePtr<TSubclassOf<AChineseChessPawn>>(GameSet);
					if (PawnClassPtr)
					{
						// 找到属性，并且属性类型匹配
						TSubclassOf<AChineseChessPawn> PawnClass = *PawnClassPtr;
						RegisterPawn(World, PawnClass, PawnClassName, FVector2D(X, Y), SpawnParams);
					}
				}
			}
		}
	}
}

void AChineseChessManager::InitializeGame()
{
	GameSet = NewObject<UChineseChessSet>(this, GameSetClass, L"中国象棋游戏设置");
	if (GameSet)
	{
		InitializePawns();
	}
}

TArray<uint8> AChineseChessManager::GetFeatureMap()
{
	/**
	* 特征图
	* 将不同的棋子看做不同的像素，构成一张奇异的图片
	*/
	TArray<uint8> FeatureMap;
	FeatureMap.Init(0b0, BOARDSIZE_X * BOARDSIZE_Y);
	uint8 Pixel = 0;

	for (UChineseChessBoardSlot*& Slot : Cast<AChineseChessBoard>(GetBoard())->GetSlots())
	{
		AGameBasePawn* BasePawn = Slot->GetOccupyingPawn();
		if (BasePawn)
		{
			AChineseChessPawn* ChineseChessPawn = Cast<AChineseChessPawn>(BasePawn);
			Pixel = ChineseChessSet::Encode(ChineseChessPawn->GetPawnType());
		}
		else
		{
			Pixel = ChineseChessSet::GetEmptyCode();
		}

		const FVector2D& Pos = Slot->GetSlotPos();

		FeatureMap[Pos.X + Pos.Y * BOARDSIZE_X] = Pixel;
	}

	return FeatureMap;
}