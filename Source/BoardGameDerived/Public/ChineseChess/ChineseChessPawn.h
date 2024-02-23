// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameBasePawn.h"
#include "ChineseChessPawn.generated.h"

class AChineseChessManager;
class UChineseChessBoardSlot;

UENUM(BlueprintType)
enum class EChineseChessPawnState : uint8
{
	None			UMETA(DisplayName = "占位符(空)"),
	Absence			UMETA(DisplayName = "不在场"),
	Idle			UMETA(DisplayName = "静止"),
	Selected		UMETA(DisplayName = "被选中"),
	Dead			UMETA(DisplayName = "死亡")
};

UENUM(BlueprintType)
enum class EChineseChessControlPower : uint8 
{
	None			UMETA(DisplayName="无控制权"),
	Team			UMETA(DisplayName="友军控制权"),
	Enemy			UMETA(DisplayName="敌军控制权"),
	All				UMETA(DisplayName="全局控制权")
};

/**
 * 
 */
UCLASS()
class BOARDGAMEDERIVED_API AChineseChessPawn : public AGameBasePawn
{
	GENERATED_BODY()

public:
	AChineseChessPawn();

	// 委托声明
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPerformDelegate, EChineseChessPawnState, PawnState);

	// 委托
public:
	FPerformDelegate Perform;

	// 委托触发函数
public:
	void OnPerform();

	// inherited
public:
	virtual void NotifyActorOnClicked(FKey ButtonPressed = EKeys::LeftMouseButton) override;
	virtual void NotifyActorOnReleased(FKey ButtonReleased = EKeys::LeftMouseButton) override;
	virtual void NotifyActorBeginCursorOver() override;
	virtual void NotifyActorEndCursorOver() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// 属性	
protected:
	FString PawnType;
	
	UPROPERTY(Replicated, ReplicatedUsing=OnRep_ChangeState)
	EChineseChessPawnState State;
	UFUNCTION()
	void OnRep_ChangeState();

	UPROPERTY(Replicated)
	AChineseChessManager* GameManager;

	UChineseChessBoardSlot* AttachedSlot;

	// setter
public:
	void SetGameManager(AChineseChessManager* InGameManager);

	UFUNCTION(BlueprintCallable, DisplayName ="设置状态")
	void SetState(EChineseChessPawnState NewState);
	UFUNCTION(BlueprintCallable, DisplayName="将棋子设置到槽位")
	void SetupSlot(UChineseChessBoardSlot* NewSlot);

	// getter
public:
	UFUNCTION(BlueprintPure, DisplayName = "获取棋子类型")
	const FString& GetPawnType() const { return PawnType; };
	UFUNCTION(BlueprintPure, DisplayName="获取关联的管理器")
	AChineseChessManager* GetGameManager() const { return GameManager; };
	UFUNCTION(BlueprintPure, DisplayName="获取当前棋子槽引用")
	UChineseChessBoardSlot* GetSlot();

	// operate
public:
	void Initialize(const FString& InPawnType, AChineseChessManager* InManager);
	void InitializeStatus();

	void MovePawn(UChineseChessBoardSlot* NewSlot);

	void Die();

	UFUNCTION(BlueprintPure, DisplayName="是否存活")
	bool IsAlive();

public:
	/**
	 * 这个函数定义了棋子的移动规则，
	 * InStatus 棋盘状态
	 * PawnPos 当前棋盘状态下的棋子位置
	 * OutPositions 返回棋子可能到达的位置
	 */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, DisplayName="移动规则")
	void MoveRule(const TArray<uint8>& InBoardStatus, const FVector2D& PawnPos, TArray<FVector2D>& OutPositions);
protected:

	void UpdateState();

private:
};
