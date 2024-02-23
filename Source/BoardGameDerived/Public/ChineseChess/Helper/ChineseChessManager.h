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
enum class EChineseChessPlayer : uint8
{
	Chu					UMETA(DisplayName = "楚"),
	Han					UMETA(DisplayName = "汉")
};

UENUM(BlueprintType)
enum class EChineseChessAwaitState : uint8
{
	Wait_Chu			UMETA(DisplayName = "等待——楚"),
	Wait_Han			UMETA(DisplayName = "等待——汉"),
	Wait_BothSides		UMETA(DisplayName = "等待双方"),
	Ready				UMETA(DisplayName = "就绪")
};

UENUM(BlueprintType)
enum class EChineseChessRoundState : uint8
{
	RoundChu			UMETA(DisplayName = "楚军回合"),
	RoundHan			UMETA(DisplayName = "汉军回合"),
	None				UMETA(DisplayName = "双方无权移动")
};

UENUM(BlueprintType)
enum class EChineseChessGameState : uint8
{
	None				UMETA(DisplayName = "占位符"),
	GameStart			UMETA(DisplayName = "游戏开始"),
	GameOver			UMETA(DisplayName = "游戏结束"),
	IllegalMove			UMETA(DisplayName = "非法移动"),
	Check				UMETA(DisplayName = "将军"),
	CheckMate			UMETA(DisplayName = "将死"),
	GiveUp				UMETA(DisplayName = "认输"),

	RoundSwitch			UMETA(DisplayName = "切换回合"),
	CampSwitch			UMETA(DisplayName = "切换阵营")
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
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerEnteredDelegate, EChineseChessPlayer, PlayerCamp, APlayerState*, Player);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerLeftDelegate, EChineseChessPlayer, PlayerCamp, APlayerState*, Player);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameActionDelegate, EChineseChessGameState, GameState, APlayerState*, Player);

	// 委托
public:
	UPROPERTY(BlueprintAssignable)
	FPlayerEnteredDelegate PlayerEntered;
	UPROPERTY(BlueprintAssignable)
	FPlayerLeftDelegate PlayerLeft;

	UPROPERTY(BlueprintAssignable)
	FGameActionDelegate GameAction;

	// 委托触发函数
public:
	UFUNCTION(BlueprintCallable, DisplayName = "玩家入座")
	void OnPlayerEntered(EChineseChessPlayer PlayerCamp, APlayerState* Player);
	UFUNCTION(BlueprintCallable, DisplayName = "玩家离席")
	void OnPlayerLeft(APlayerState* Player);

	void OnGameAction(EChineseChessGameState GameState, APlayerState* Player);

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

	UPROPERTY(Replicated)
	uint8 bIsGaming : 1;

protected:

	UPROPERTY(Replicated)
	AChineseChessPawn* SelectedPawn;

protected:
	/** 玩家 */
	UPROPERTY(Replicated, ReplicatedUsing = NotifyPlayerChange)
	TArray<APlayerState*> PlayerContainer;

protected:
	/** 棋子引用 */
	TArray<AChineseChessPawn*> PawnArray;

	// setter
public:
	/** 重设历史记录器 */
	void SetHistoryRecorder();

	// getter
public:
	UFUNCTION(BlueprintPure, DisplayName = "获取历史记录器")
	UChineseChessHistoryRecorder* GetHistoryRecorder() const { return HistoryRecorder; };

	UFUNCTION(BlueprintPure, DisplayName = "是否游戏中")
	bool GetIsGameing() const { return bIsGaming; };

	UFUNCTION(BlueprintPure, DisplayName = "获取棋子引用")
	TArray<AChineseChessPawn*> GetPawnArray() const { return PawnArray; };

	// operate
public:
	/** 选择操作 */
	void Select(UChineseChessBoardSlot* NewSlot);

	UFUNCTION(BlueprintCallable, DisplayName="等待玩家")
	void WaitPlayer(EChineseChessAwaitState& OutAwaitState);

	UFUNCTION(BlueprintPure, DisplayName="获取入座玩家")
	APlayerState* GetPlayer(EChineseChessPlayer PlayerCamp);

	UFUNCTION(BlueprintCallable,DisplayName="获取玩家阵营")
	bool GetPlayerCamp(APlayerState* PlayerState, EChineseChessPlayer& PlayerCamp);

	UFUNCTION(BlueprintPure, DisplayName="检查落座情况")
	bool IsEntered(APlayerState* PlayerState);

	void ProcessBoardClick(UChineseChessBoardSlot* Slot, APlayerState* PlayerState/*点击主体*/);

public:
	UFUNCTION(BlueprintCallable, DisplayName="开始游戏")
	void GameStart();

	/** 悔棋 */
	void Withdraw();

	UFUNCTION(BlueprintCallable, DisplayName="认输")
	void GiveUp(APlayerState* Player);

	UFUNCTION(BlueprintCallable, DisplayName="切换阵营")
	void SwitchCamp(APlayerState* Player, EChineseChessPlayer TargetCamp);

protected:
	bool IsIllegal(TArray<uint8> FeatureMap, EChineseChessPlayer PlayerCamp);

	/** 棋盘规则：回合切换 */
	void RoundSwitch();

	/** 检查当前回合是否是可行动的回合 */
	bool IsRound(APlayerState* PlayerState);

	/** 棋盘规则：王对王 */
	bool IsKingFaceToFace(TArray<uint8> FeatureMap);

	/** 棋盘规则：将军 */
	bool Check(TArray<uint8> FeatureMap, EChineseChessPlayer PlayerCamp);

	/** 棋盘规则：将死 */
	bool CheckMate(TArray<uint8> FeatureMap, EChineseChessPlayer PlayerCamp);

	/** 撤销操作 */
	void RevokeOperate(int32 Num);

protected:

	UFUNCTION(BlueprintImplementableEvent, DisplayName = "通知可移动槽位显现")
	void NotifyMovableSlotsShow(const TArray<FVector2D>& SlotPositions);

	UFUNCTION(BlueprintImplementableEvent, DisplayName = "通知槽位隐藏")
	void NotifySlotsHide();

	UFUNCTION(BlueprintImplementableEvent, DisplayName = "通知玩家变更")
	void NotifyPlayerChange();

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
	UFUNCTION(BlueprintCallable, DisplayName = "获取当前特征图")
	TArray<uint8> GetFeatureMap();

	TArray<uint8> GetFeatureMapWithParam(const FVector2D& Start, const FVector2D& End, TArray<uint8>* OriMap = nullptr);

	UFUNCTION(BlueprintCallable, DisplayName = "比较特征图")
	bool CompareFeatureMap(TArray<uint8> SoureFeatureMap, TArray<uint8> TargetFeatureMap);
};
