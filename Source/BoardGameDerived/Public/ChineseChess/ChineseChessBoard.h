// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameBaseBoard.h"
#include "Helper/ChineseChessSet.h"
#include "ChineseChessBoard.generated.h"

class UChineseChessBoardSlot;
class AChineseChessManager;

/**
 * 中国象棋盘就是对一无所有的板子上进行绘制棋盘网格（尺寸和槽位）
 * 使得棋子能够处于正确的位置上，它能够通过棋盘槽，对棋子的位置进行管理，
 * 并决定棋子能放置的位置。
 */
UCLASS()
class BOARDGAMEDERIVED_API AChineseChessBoard : public AGameBaseBoard
{
	GENERATED_BODY()

	// 委托声明
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSlotClickedDelegate, UChineseChessBoardSlot*, Slot);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerEnteredDelegate, EChineseChessPlayer, PlayerCamp, APlayerState*, Player);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerLeftDelegate, EChineseChessPlayer, PlayerCamp, APlayerState*, Player)
	
	// 委托
public:
	FSlotClickedDelegate SlotClicked;
	FPlayerEnteredDelegate PlayerEntered;
	FPlayerLeftDelegate PlayerLeft;

	// 委托触发函数
public:
	/**
	* 显然，它仅仅是处理选中槽位的函数
	* 然后它应该将槽位转发给游戏管理器，那里才去判定场上进行操作的棋子
	* 嗯...优雅的代码
	*/
	void OnSlotClicked(UChineseChessBoardSlot* Slot);
	void OnPlayerEntered(EChineseChessPlayer PlayerCamp, APlayerState* Player);
	void OnPlayerLeft(EChineseChessPlayer PlayerCamp, APlayerState* Player);

	// 构造函数
public:
	AChineseChessBoard();

	// inherited
protected:
	virtual void PostInitializeComponents() override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

public:
	virtual void BeginPlay() override;

	virtual void NotifyActorOnClicked(FKey ButtonPressed = EKeys::LeftMouseButton) override;
	virtual void NotifyActorOnReleased(FKey ButtonReleased = EKeys::LeftMouseButton) override;
	virtual void NotifyActorBeginCursorOver() override;
	virtual void NotifyActorEndCursorOver() override;

	// 属性
protected:
	/** 尺寸常量标识了棋盘的大小 */
	const FVector2D BoardSize = BOARDSIZE;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="属性", DisplayName="棋盘槽")
	TArray<UChineseChessBoardSlot*> Slots;
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="游戏管理器类")
	TSubclassOf<AChineseChessManager> GameManagerClass;

	UPROPERTY(BlueprintReadOnly, Replicated, ReplicatedUsing = OnRep_GameManager, Category="属性", DisplayName="游戏管理器")
	AChineseChessManager * GameManager;

	UFUNCTION()
	void OnRep_GameManager();

	// getter
public:
	UFUNCTION(BlueprintPure, DisplayName = "获取游戏管理器")
	AChineseChessManager* GetGameManager() { return GameManager; };

	UChineseChessBoardSlot* GetSlot(int32 i);
	UChineseChessBoardSlot* GetSlot(int32 X, int32 Y);
	UFUNCTION(BlueprintCallable, DisplayName="获取特定位置的槽")
	UChineseChessBoardSlot* GetSlot(const FVector2D& InVec);

	UFUNCTION(BlueprintPure, DisplayName="获取拥有的槽位")
	TArray<UChineseChessBoardSlot*>& GetSlots() { return Slots; }

	UFUNCTION(BlueprintPure, DisplayName = "获取棋盘尺寸")
	const FVector2D GetBoardSize() const { return BoardSize; };

	UFUNCTION(BlueprintPure, DisplayName="检查位置是否处于棋盘上")
	FORCEINLINE bool CheckPositionInBoard(const FVector2D& InVec);

	UFUNCTION(BlueprintCallable, DisplayName = "处理槽点击")
	void HandleSlotClicked(UGameBaseBoardSlot* BaseSlot, APlayerState* PlayerState);

	// operate
public:

protected:
	UFUNCTION()
	void OnMeshComponentClicked(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);
};
