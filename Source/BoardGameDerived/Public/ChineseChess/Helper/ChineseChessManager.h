// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Helper/BoardGameManager.h"
#include "ChineseChessManager.generated.h"

class UChineseChessBoardSlot;
class UChineseChessSet;
class AChineseChessPawn;
class APlayerState;
class UChineseChessHistoryRecorder;

UENUM(BlueprintType)
enum class EChineseChessPlayerSeated : uint8
{
	Filled				UMETA(DisplayName="完全入座"),
	RemainBothSide		UMETA(DisplayName="等待双方入座"),
	RemainChu			UMETA(DisplayName="等待楚入座"),
	RemainHan			UMETA(DisplayName="等待汉入座")
};

UENUM(BlueprintType)
enum class EChineseChessPlayer : uint8
{
	Chu					UMETA(DisplayName = "楚"),
	Han					UMETA(DisplayName = "汉")
};

UENUM(BlueprintType)
enum class EChineseChessRoundState : uint8
{
	None				UMETA(DisplayName = "双方无权移动"),
	RoundChu			UMETA(DisplayName = "楚军回合"),
	RoundHan			UMETA(DisplayName = "汉军回合")
};

UENUM()
enum class EChineseChessCheckState : uint8
{
	None				UMETA(DisplayName = "未将军"),
	Check				UMETA(DisplayName = "将军"),
	CheckMate			UMETA(DisplayName = "将死"),
	Illegal				UMETA(DisplayName = "非法移动")
};

/**
 * 
 */
UCLASS()
class BOARDGAMEDERIVED_API AChineseChessManager : public ABoardGameManager
{
	GENERATED_BODY()

	// 委托声明
public:

	// 构造函数
public:
	AChineseChessManager();

	// inherit
public:
	virtual void GetLifetimeReplicatedProps( TArray<class FLifetimeProperty> & OutLifetimeProps ) const override;

	// 属性
protected:
	/** 历史记录器 */
	UChineseChessHistoryRecorder* HistoryRecorder;

	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="游戏设置类")
	TSubclassOf<UChineseChessSet> GameSetClass;
	UChineseChessSet* GameSet;

	UPROPERTY(Replicated)
	EChineseChessRoundState RoundState;

protected:

	UPROPERTY(Replicated)
	AChineseChessPawn* SelectedPawn;

protected:
	/** 玩家 */
	UPROPERTY(Replicated)
	TArray<APlayerState*> PlayerContainer;

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnPlayerEntered(EChineseChessPlayer PlayerCamp, APlayerState* Player);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnPlayerLeft(EChineseChessPlayer PlayerCamp, APlayerState* Player);

protected:
	/** 棋子引用 */
	TArray<AChineseChessPawn*> PawnArray;

	// setter
public:
	/** 重设历史记录器 */
	void SetHistoryRecorder();

	// getter
public:
	UFUNCTION(BlueprintPure, DisplayName="获取历史记录器")
	UChineseChessHistoryRecorder* GetHistoryRecorder();

	// operate
public:
	/** 选择操作 */
	void Select(UChineseChessBoardSlot* NewSlot);
	
	UChineseChessBoardSlot* GetSlot(const FVector2D& InVec);
	UChineseChessBoardSlot* GetSlot(int32 X, int32 Y);

	UFUNCTION(BlueprintCallable, DisplayName="等待玩家")
	bool WaitPlayer(EChineseChessPlayer OutPlayerCamp);

	UFUNCTION(BlueprintCallable, DisplayName="玩家入座")
	void PlayerEntered(EChineseChessPlayer PlayerCamp, APlayerState* NewPlayer);

	UFUNCTION(BlueprintCallable, DisplayName="玩家离开")
	void PlayerLeft(EChineseChessPlayer PlayerCamp, APlayerState* Player);

	UFUNCTION(BlueprintPure, DisplayName="获取入座玩家")
	APlayerState* GetPlayer(EChineseChessPlayer PlayerCamp);

	UFUNCTION(BlueprintCallable,DisplayName="获取玩家阵营")
	bool GetPlayerCamp(APlayerState* PlayerState, EChineseChessPlayer& PlayerCamp);

	UFUNCTION(BlueprintPure, DisplayName="检查落座情况")
	bool IsSeating(APlayerState* PlayerState);

	bool IsPlayerCamp(APlayerState* InPlayerState, EChineseChessPlayer& InPlayerCamp);
	void ProcessBoardClick(UChineseChessBoardSlot* Slot, APlayerState* PlayerState/*点击主体*/);

public:
	UFUNCTION(BlueprintCallable, DisplayName="开始游戏")
	void GameStart();

	UFUNCTION(BlueprintCallable, DisplayName="重置游戏")
	void Restart();

	/** 悔棋 */
	void Withdraw();

	UFUNCTION(BlueprintCallable, DisplayName="认输")
	void GiveUp(APlayerState* Player);

	UFUNCTION(BlueprintCallable, DisplayName="切换阵营")
	void SwitchCamp(APlayerState* Player, EChineseChessPlayer TargetCamp);

protected:

	/** 棋盘规则：回合切换 */
	void RoundSwitch();

	/** 检查当前回合是否是可行动的回合 */
	bool IsRound(APlayerState* PlayerState);

	/** 棋盘规则：王对王 */
	bool IsKingFaceToFace();

	/** 棋盘规则：将军 */
	EChineseChessCheckState Check(bool bCheckMate = false);

	/** 检查将死 */
	bool CheckMate(const TMap<FString, AChineseChessPawn*>& PawnMap, const FVector2D& DefenseKingPos, const TMap<FString, AChineseChessPawn*>& AttackPawnMap);

	/** 撤销操作 */
	void RevokeOperate(int32 Num);

protected:

	UFUNCTION(BlueprintImplementableEvent, DisplayName="玩家入座")
	void OnPlayerSeated(EChineseChessPlayer Type);

	UFUNCTION(BlueprintImplementableEvent, DisplayName="回合切换")
	void OnRoundSwitch(EChineseChessRoundState NextRound);
	UFUNCTION(BlueprintImplementableEvent, DisplayName="非法移动！")
	void OnIllegal(EChineseChessRoundState ThisRound);
	UFUNCTION(BlueprintImplementableEvent, DisplayName="将军！")
	void OnCheck(EChineseChessRoundState ThisRound);
	UFUNCTION(BlueprintImplementableEvent, DisplayName="将死！")
	void OnCheckMate(EChineseChessRoundState ThisRound);
	UFUNCTION(BlueprintImplementableEvent, DisplayName="认输")
	void OnGiveUp(EChineseChessPlayer Type);

	UFUNCTION(BlueprintImplementableEvent, DisplayName="开始游戏")
	void OnGameStart(EChineseChessPlayerSeated SeatedState);
	UFUNCTION(BlueprintImplementableEvent, DisplayName="游戏结束")
	void OnGameOver();

	UFUNCTION(BlueprintImplementableEvent, DisplayName="玩家离开")
	void OnPlayerLeave(APlayerState* Player, EChineseChessPlayer Type);

	UFUNCTION(BlueprintImplementableEvent, DisplayName="切换阵营")
	void OnSwitchCamp(APlayerState* Player);

protected:

	UFUNCTION(BlueprintImplementableEvent, DisplayName="通知可移动槽位显现")
	void NotifyMovableSlotsShow(const TArray<FVector2D>& SlotPositions);

	UFUNCTION(BlueprintImplementableEvent, DisplayName="通知槽位隐藏")
	void NotifySlotsHide();

public:
	// 注册一个棋子到世界中
	void RegisterPawn(UWorld* World, TSubclassOf<AChineseChessPawn> PawnClass, const FString& PawnClassName, const FVector2D& Slot, FActorSpawnParameters SpawnParams);

private:
	FORCEINLINE AChineseChessPawn* GeneratePawn(UWorld* World, TSubclassOf<AChineseChessPawn> PawnClass, const FVector2D& Slot, FActorSpawnParameters SpawnParams);

protected:
	void InitializePawns();

	// Virtual
public:
	virtual void InitializeGame() override;


	// Output
public:
	UFUNCTION(BlueprintCallable, DisplayName="获取特征图")
	TArray<uint8> GetFeatureMap();
};
