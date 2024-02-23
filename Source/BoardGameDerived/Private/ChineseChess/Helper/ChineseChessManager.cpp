// Fill out your copyright notice in the Description page of Project Settings.


#include "ChineseChess/Helper/ChineseChessManager.h"
#include "ChineseChess/ChineseChessBoardSlot.h"
#include "ChineseChess/Helper/ChineseChessSet.h"
#include "ChineseChess/Helper/ChineseChessHistoryRecorder.h"
#include "ChineseChess/ChineseChessBoard.h"
#include "ChineseChess/ChineseChessPawn.h"
#include "GameFramework/PlayerState.h"
#include "Net/UnrealNetwork.h"
#include "HAL/UnrealMemory.h"

AChineseChessManager::AChineseChessManager() :
	bIsGaming(false)
{
	bReplicates = true;

	PlayerContainer.Init(nullptr, 2);
}

void AChineseChessManager::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AChineseChessManager, SelectedPawn);
	DOREPLIFETIME(AChineseChessManager, PlayerContainer);
	DOREPLIFETIME(AChineseChessManager, RoundState);
	DOREPLIFETIME(AChineseChessManager, bIsGaming);
}

void AChineseChessManager::OnPlayerEntered(EChineseChessPlayer PlayerCamp, APlayerState* Player)
{
	if (Player)
	{
		PlayerContainer[(int)PlayerCamp] = Player;

		PlayerEntered.Broadcast(PlayerCamp, Player);
	}
}

void AChineseChessManager::OnPlayerLeft(APlayerState* Player)
{
	EChineseChessPlayer PlayerCamp;
	if (GetPlayerCamp(Player, PlayerCamp))
	{
		PlayerContainer[(int)PlayerCamp] = nullptr;
		PlayerLeft.Broadcast(PlayerCamp, Player);
	}
}

void AChineseChessManager::OnGameAction(EChineseChessGameState GameState, APlayerState* Player)
{
	GameAction.Broadcast(GameState, Player);
}

void AChineseChessManager::SetHistoryRecorder()
{
	if (HistoryRecorder)
	{
		HistoryRecorder->Clear();
	}
	else
	{
		HistoryRecorder = NewObject<UChineseChessHistoryRecorder>(this);
	}
}

void AChineseChessManager::Select(UChineseChessBoardSlot* NewSlot)
{
	if (SelectedPawn)
	{
		SelectedPawn->SetState(EChineseChessPawnState::Idle);
		NotifySlotsHide();
	}

	if (NewSlot)
	{
		if (NewSlot->IsOccupied())
		{
			SelectedPawn = Cast<AChineseChessPawn>(NewSlot->GetOccupyingPawn());
			
			SelectedPawn->SetState(EChineseChessPawnState::Selected);

			// 通知这个棋子能到达的槽位
			TArray<FVector2D> ProbablePositions;
			SelectedPawn->MoveRule(GetFeatureMap(), SelectedPawn->GetSlot()->GetSlotPos(), ProbablePositions);
			NotifyMovableSlotsShow(ProbablePositions);
			return ;
		}
	}

	SelectedPawn = nullptr;
}

void AChineseChessManager::WaitPlayer(EChineseChessAwaitState& OutAwaitState)
{
	const uint8 ReasonA = PlayerContainer[0] ? 0b01 : 0b0;
	const uint8 ReasonB = PlayerContainer[1] ? 0b10 : 0b0;
	const uint8 Reasult = ReasonB | ReasonA;

	if ((Reasult ^ 0) == 0b01)
	{
		OutAwaitState = EChineseChessAwaitState::Wait_Han;
	}
	else if ((Reasult ^ 0) == 0b10)
	{
		OutAwaitState = EChineseChessAwaitState::Wait_Chu;
	}
	else if ((Reasult ^ 0) == 0b0)
	{
		OutAwaitState = EChineseChessAwaitState::Wait_BothSides;
	}
	else
	{
		OutAwaitState = EChineseChessAwaitState::Ready;
	}
}

APlayerState* AChineseChessManager::GetPlayer(EChineseChessPlayer PlayerCamp)
{
	const int32 Index = (int32)PlayerCamp;
	if (Index == 0 || Index == 1)
	{
		return PlayerContainer[Index];
	}
	else
	{
		return nullptr;
	}
}

bool AChineseChessManager::GetPlayerCamp(APlayerState* PlayerState, EChineseChessPlayer& PlayerCamp)
{
	if (IsEntered(PlayerState))
	{
		if (PlayerState == GetPlayer(EChineseChessPlayer::Chu))
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

bool AChineseChessManager::IsEntered(APlayerState* PlayerState)
{
	if (PlayerContainer.Contains(PlayerState))
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

	// 如果没有SelectedPawn，并且没有点击到Pawn，什么也不用做
	// 如果没有SelectedPawn，并且点击到Pawn，设置它
	// 如果有SelectedPawn，获取它可以合法到达的位置，与点击位置比较，不在其中，且此位置上有己方棋子，切换SelectedPawn为该棋子
	// 如果有SelectedPawn，获取它可以合法到达的位置，与点击位置比较，不在其中，且此位置没有棋子或敌方棋子，切换SelectedPawn为空
	// 如果有SelectedPawn，获取它可以合法到达的位置，与点击位置比较，是可以到达的位置，将棋子移动到目标位置。

	const FVector2D SlotPos = Slot->GetSlotPos();
	const bool bOccupied = Slot->IsOccupied();
	AChineseChessPawn* OccupiedPawn = nullptr;
	if (bOccupied)
	{
		OccupiedPawn = Cast<AChineseChessPawn>(Slot->GetOccupyingPawn());
	}

	if (SelectedPawn)
	{
		const FVector2D SelectedPawnPos = SelectedPawn->GetSlot()->GetSlotPos();
		TArray<FVector2D> ProbablePositions;
		SelectedPawn->MoveRule(GetFeatureMap(), SelectedPawnPos, ProbablePositions);

		if (ProbablePositions.Contains(SlotPos))
		{
			// 检查棋子移动后的位置是否合法
			EChineseChessPlayer PlayerCamp;
			GetPlayerCamp(PlayerState, PlayerCamp);
			bool bUnlawful = IsIllegal(
				GetFeatureMapWithParam(SelectedPawnPos, SlotPos),
				PlayerCamp);

			if (bUnlawful)
			{
				// 非法移动
				OnGameAction(EChineseChessGameState::IllegalMove, PlayerState);
			}
			else
			{
				// 合法移动
				SelectedPawn->MovePawn(Cast<AChineseChessBoard>(Board)->GetSlot(SlotPos));
				TArray<uint8> Map = GetFeatureMap();

				HistoryRecorder->Add(Map);

				if (Check(Map, PlayerCamp))
				{
					OnGameAction(EChineseChessGameState::Check, PlayerState);

					if (CheckMate(Map, PlayerCamp))
					{
						OnGameAction(EChineseChessGameState::CheckMate, PlayerState);

						RoundState = EChineseChessRoundState::None;
						Select(nullptr);

						OnGameAction(EChineseChessGameState::GameOver, nullptr);

						return;
					}
				}
				RoundSwitch();
			}

			Select(nullptr); // 清除选中的棋子
		}
		else
		{
			// 点击位置不在可移动列表中
			if (bOccupied && OccupiedPawn != SelectedPawn && 
				(ChineseChessSet::Encode(OccupiedPawn->GetPawnType()) >> 3) == (ChineseChessSet::Encode(SelectedPawn->GetPawnType()) >> 3))
			{
				// 点击了另一个己方棋子，切换选中的棋子
				
				// 如果这个棋子不是己方阵营的，啥也不做
				const uint32 PlayerCamp = (uint32)RoundState;
				if ((ChineseChessSet::Encode(OccupiedPawn->GetPawnType()) >> 3) != PlayerCamp)
				{
					UE_LOG(LogTemp, Log, L"选中的棋子并非可控");
					return;
				}
				else
				{
					Select(Slot);
				}
			}
			else
			{
				// 点击位置没有棋子，或者是敌方棋子，取消选中
				Select(nullptr);
			}
		}
	}
	else
	{
		if (bOccupied)
		{
			// 没有选中的棋子，点击到了一个棋子，选中它

			// 如果这个棋子不是己方阵营的，啥也不做
			const uint32 PlayerCamp = (uint32)RoundState;
			if ((ChineseChessSet::Encode(OccupiedPawn->GetPawnType()) >> 3) != PlayerCamp)
			{
				UE_LOG(LogTemp, Log, L"选中的棋子并非可控");
				return;
			}
			else
			{
				Select(Slot);
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
	EChineseChessAwaitState AwaitState;
	WaitPlayer(AwaitState);
	switch (AwaitState)
	{
	case EChineseChessAwaitState::Wait_Chu:
		break;
	case EChineseChessAwaitState::Wait_Han:
		break;
	case EChineseChessAwaitState::Wait_BothSides:
		break;
	case EChineseChessAwaitState::Ready:
	{
		AChineseChessBoard* ChineseBoard = Cast<AChineseChessBoard>(Board);
		for (int32 i = 0, PawnIt = 0; i < BOARDSIZE_X * BOARDSIZE_Y; i++)
		{
			const FString& PawnClassName = ChineseChessSet::InitState[i];
			if (PawnClassName == "Empty")
			{
				continue;
			}

			int32 X = i % BOARDSIZE_X;
			int32 Y = i / BOARDSIZE_X;

			PawnArray[PawnIt]->MovePawn(ChineseBoard->GetSlot(X, Y));
			PawnIt++;
		}

		RoundState = EChineseChessRoundState::RoundHan;
		bIsGaming = true;
		SetHistoryRecorder();
		OnGameAction(EChineseChessGameState::GameStart, nullptr);
	}
		break;
	default:
		break;
	}
}

void AChineseChessManager::Withdraw()
{
	
}

void AChineseChessManager::GiveUp(APlayerState* Player)
{
	if (GetIsGameing())
	{
		EChineseChessPlayer PlayerCamp;
		if (GetPlayerCamp(Player, PlayerCamp))
		{
			OnGameAction(EChineseChessGameState::GiveUp, Player);

			RoundState = EChineseChessRoundState::None;
			Select(nullptr);

			OnGameAction(EChineseChessGameState::GameOver, nullptr);
		}
	}
}

void AChineseChessManager::SwitchCamp(APlayerState* Player, EChineseChessPlayer TargetCamp)
{
	EChineseChessPlayer PlayerCamp;
	if (!GetPlayerCamp(Player, PlayerCamp))
	{
		return;
	}

	if (TargetCamp == PlayerCamp)
	{
		return;
	}

	PlayerContainer.Swap(0, 1);
	OnGameAction(EChineseChessGameState::CampSwitch, Player);
}

bool AChineseChessManager::IsIllegal(TArray<uint8> FeatureMap, EChineseChessPlayer PlayerCamp)
{
	// 是否造成了己方将军
	if (Check(FeatureMap, (PlayerCamp == EChineseChessPlayer::Chu ? EChineseChessPlayer::Han : EChineseChessPlayer::Chu)))
	{
		return true;
	}

	// 长将判定
	if (HistoryRecorder->IsQueueFull() &&
		CompareFeatureMap(FeatureMap, HistoryRecorder->Get(0)))
	{
		return true;
	}

	return false;
}

void AChineseChessManager::RoundSwitch()
{
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

	OnGameAction(EChineseChessGameState::RoundSwitch, nullptr);
}

bool AChineseChessManager::IsRound(APlayerState* PlayerState)
{
	EChineseChessPlayer PlayerCamp;
	GetPlayerCamp(PlayerState, PlayerCamp);
	if ((uint32)RoundState == (uint32)PlayerCamp)
	{
		return true;
	}
	return false;
}

bool AChineseChessManager::IsKingFaceToFace(TArray<uint8> FeatureMap)
{
	int32 JiangIndex;
	FeatureMap.Find(ChineseChessSet::Encode("Chu_Jiang"), JiangIndex);
	int32 ShuaiIndex;
	FeatureMap.Find(ChineseChessSet::Encode("Han_Shuai"), ShuaiIndex);

	const FVector2D JiangPos = FVector2D(JiangIndex % BOARDSIZE_X, JiangIndex / BOARDSIZE_X);
	const FVector2D ShuaiPos = FVector2D(ShuaiIndex % BOARDSIZE_X, ShuaiIndex / BOARDSIZE_X);

	if (ShuaiPos.X == JiangPos.X)
	{
		FVector2D CheckPos = JiangPos;
		do 
		{
			CheckPos.Y += 1;
			if (Cast<AChineseChessBoard>(Board)->GetSlot(CheckPos)->IsOccupied())
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

bool AChineseChessManager::Check(TArray<uint8> FeatureMap, EChineseChessPlayer PlayerCamp)
{
	int32 JiangIndex;
	FeatureMap.Find(ChineseChessSet::Encode("Chu_Jiang"), JiangIndex);
	int32 ShuaiIndex;
	FeatureMap.Find(ChineseChessSet::Encode("Han_Shuai"), ShuaiIndex);

	const FVector2D JiangPos = FVector2D(JiangIndex % BOARDSIZE_X, JiangIndex / BOARDSIZE_X);
	const FVector2D ShuaiPos = FVector2D(ShuaiIndex % BOARDSIZE_X, ShuaiIndex / BOARDSIZE_X);

	const FVector2D& CheckPos = PlayerCamp == EChineseChessPlayer::Chu ? ShuaiPos : JiangPos;

	// 判定是否王对王
	if (IsKingFaceToFace(FeatureMap))
	{
		return true;
	}

	// 判定是否将军
	for (int32 i = 0; i < FeatureMap.Num(); ++i)
	{
		const int32 X = i % BOARDSIZE_X;
		const int32 Y = i / BOARDSIZE_Y;

		const FVector2D Pos = FVector2D(X, Y);
		UChineseChessBoardSlot* Slot = Cast<AChineseChessBoard>(Board)->GetSlot(Pos);
		AChineseChessPawn* Pawn = Cast<AChineseChessPawn>(Slot->GetOccupyingPawn());

		if (Pawn)
		{
			TArray<FVector2D> ProbablePositions;
			Pawn->MoveRule(FeatureMap, Pos, ProbablePositions);

			if (ProbablePositions.Contains(CheckPos))
			{
				return true;
			}
		}
	}

	return false;
}

bool AChineseChessManager::CheckMate(TArray<uint8> FeatureMap, EChineseChessPlayer PlayerCamp)
{
	EChineseChessPlayer DefCamp = (EChineseChessPlayer)((uint8)PlayerCamp ^ 0b1);

	for (int32 i = 0; i < FeatureMap.Num(); ++i)
	{
		const int32 X = i % BOARDSIZE_X;
		const int32 Y = i / BOARDSIZE_Y;

		const FVector2D Pos = FVector2D(X, Y);
		UChineseChessBoardSlot* Slot = Cast<AChineseChessBoard>(Board)->GetSlot(Pos);
		AChineseChessPawn* Pawn = Cast<AChineseChessPawn>(Slot->GetOccupyingPawn());

		if (Pawn)
		{
			const FVector2D StartPos = Slot->GetSlotPos();

			if ((ChineseChessSet::Encode(Pawn->GetPawnType()) >> 3) == (uint8)DefCamp)
			{
				TArray<FVector2D> ProbablePositions;
				Pawn->MoveRule(FeatureMap, Pos, ProbablePositions);

				for (const FVector2D& EndPos : ProbablePositions)
				{
					TArray<uint8> DefMap = GetFeatureMapWithParam(StartPos, EndPos, &FeatureMap); 
					if (!IsIllegal(DefMap, DefCamp))
					{
						return false;
					}
				}
			}
		}
	}

	return true;
}

void AChineseChessManager::RevokeOperate(int32 Num)
{
	
}

void AChineseChessManager::RegisterPawn(UWorld* World, TSubclassOf<AChineseChessPawn> PawnClass, const FString& PawnClassName, const FVector2D& Slot, FActorSpawnParameters SpawnParams)
{
	AChineseChessPawn* PawnPtr = GeneratePawn(World, PawnClass, Slot, SpawnParams);
	if (PawnPtr)
	{
		// 对棋子进行一些设置
		PawnPtr->Initialize(PawnClassName, this);
		PawnPtr->SetupSlot(Cast<AChineseChessBoard>(Board)->GetSlot(Slot));

		PawnArray.Emplace(PawnPtr);
	}
}

AChineseChessPawn* AChineseChessManager::GeneratePawn(UWorld* World, TSubclassOf<AChineseChessPawn> PawnClass,const FVector2D& Slot, FActorSpawnParameters SpawnParams)
{
	// 获取棋盘的缩放
	const FVector SpawnScale = Board->GetActorScale3D();
	const FRotator SpawnRotator = Board->GetActorRotation();
	const FVector SpawnLoca = Cast<AChineseChessBoard>(GetBoard())->GetSlot(Slot)->GetComponentLocation();

	// 生成棋子使用的变换
	const FTransform SpawnTransform = FTransform(SpawnRotator, SpawnLoca, SpawnScale);

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
			const FString& PawnClassName = ChineseChessSet::InitState[i];
			if (PawnClassName == "Empty") // 还是稍微优化下罢
			{
				continue;
			}

			const FString ReflexName = "PawnClass_" + PawnClassName;

			int32 X = i % BOARDSIZE_X;
			int32 Y = i / BOARDSIZE_X;

			FProperty* Property = FindFProperty<FProperty>(GameSet->GetClass(), *ReflexName);
			if (Property)
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

TArray<uint8> AChineseChessManager::GetFeatureMapWithParam(const FVector2D& Start, const FVector2D& End, TArray<uint8>* OriMap)
{
	uint8 mStart = 0b00000000;
	mStart |= (uint8)Start.X;
	mStart <<= 4;
	mStart |= (uint8)Start.Y;
	uint8 mEnd = 0b00000000;
	mEnd |= (uint8)End.X;
	mEnd <<= 4;
	mEnd |= (uint8)End.Y;

	TArray<uint8> FeatureMap;
	FeatureMap.Init(0b0, BOARDSIZE_X * BOARDSIZE_Y);

	if (!OriMap)
	{
		uint8 Pixel = 0;

		const UChineseChessBoardSlot* ReplacedSlot = Cast<AChineseChessBoard>(GetBoard())->GetSlot(Start);
		const AChineseChessPawn* ReplacedPawn = Cast<AChineseChessPawn>(ReplacedSlot->GetOccupyingPawn());
		
		check(ReplacedPawn);

		for (UChineseChessBoardSlot*& Slot : Cast<AChineseChessBoard>(GetBoard())->GetSlots())
		{
			const FVector2D& Pos = Slot->GetSlotPos();
			uint8 mPos = 0b00000000;
			mPos |= (uint8)Pos.X;
			mPos <<= 4;
			mPos |= (uint8)Pos.Y;

			if (mPos == mStart)
			{
				Pixel = ChineseChessSet::GetEmptyCode();
				FeatureMap[Pos.X + Pos.Y * BOARDSIZE_X] = Pixel;
				continue;
			}
			if (mPos == mEnd)
			{
				Pixel = ChineseChessSet::Encode(ReplacedPawn->GetPawnType());
				FeatureMap[Pos.X + Pos.Y * BOARDSIZE_X] = Pixel;
				continue;
			}

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

			FeatureMap[Pos.X + Pos.Y * BOARDSIZE_X] = Pixel;
		}
	}
	else
	{
		const TArray<uint8>& mOriMap = *OriMap;
		uint8 ReplacePixel = mOriMap[Start.X + Start.Y * BOARDSIZE_X];

		for (int32 i = 0; i < mOriMap.Num(); ++i)
		{
			int32 X = i % BOARDSIZE_X;
			int32 Y = i / BOARDSIZE_Y;

			const FVector2D Pos = FVector2D(X, Y);
			uint8 mPos = 0b00000000;
			mPos |= (uint8)Pos.X;
			mPos <<= 4;
			mPos |= (uint8)Pos.Y;

			if (mPos == mStart)
			{
				FeatureMap[i] = ChineseChessSet::GetEmptyCode();
				continue;
			}
			if (mPos == mEnd)
			{
				FeatureMap[i] = ReplacePixel;
				continue;
			}

			FeatureMap[i] = mOriMap[i];
		}
	}

	return FeatureMap;
}

bool AChineseChessManager::CompareFeatureMap(TArray<uint8> SoureFeatureMap, TArray<uint8> TargetFeatureMap)
{
	if (FGenericPlatformMemory::Memcmp(SoureFeatureMap.GetData(), TargetFeatureMap.GetData(), SoureFeatureMap.Num()) == 0)
	{
		return true;
	}
	return false;
}
