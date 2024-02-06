// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Helper/BoardGameInteract.h"
#include "GameBaseBoardSlot.generated.h"

class AGameBasePawn;
class UStaticMeshComponent;

UENUM(BlueprintType)
enum class EColliderMaterialType : uint8
{
	Default									UMETA(DisplayName = "默认"), // 默认材质仅在使用了未赋值的客制类型时被使用

	Normal									UMETA(DisplayName = "一般"),
	Hover									UMETA(DisplayName = "悬停"),
	Press									UMETA(DisplayName = "按下"),
	
	Customized_0						UMETA(DisplayName = "客制类型_0"),
	Customized_1						UMETA(DisplayName = "客制类型_1"),
	Customized_2						UMETA(DisplayName = "客制类型_2"),
	Customized_3						UMETA(DisplayName = "客制类型_3"),
	Customized_4						UMETA(DisplayName = "客制类型_4"),
	Customized_5						UMETA(DisplayName = "客制类型_5"),
	Customized_6						UMETA(DisplayName = "客制类型_6"),
	Customized_7						UMETA(DisplayName = "客制类型_7"),
	Customized_8						UMETA(DisplayName = "客制类型_8"),
	Customized_9						UMETA(DisplayName = "客制类型_9"),
	Customized_10						UMETA(DisplayName = "客制类型_10"),
	Customized_11						UMETA(DisplayName = "客制类型_11"),
	Customized_12						UMETA(DisplayName = "客制类型_12"),
	Customized_13						UMETA(DisplayName = "客制类型_13"),
	Customized_14						UMETA(DisplayName = "客制类型_14"),
	Customized_15						UMETA(DisplayName = "客制类型_15"),

	None									UMETA(DisplayName = "隐藏")
};

/**
 * 棋盘槽，用于规定棋子能放置的的位置，
 */
UCLASS()
class BOARDGAMES_API UGameBaseBoardSlot : public UStaticMeshComponent
{
	GENERATED_BODY()
	
	// 构造函数
public:
	UGameBaseBoardSlot();

	// Event
public:

	// 属性
protected:
	/** 拥有碰撞体以支持点击交互 */
	UPROPERTY(EditDefaultsOnly, Category = "碰撞体", DisplayName="碰撞体")
	UStaticMesh* Collider;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="碰撞体", DisplayName="碰撞体材质表")
	TMap<EColliderMaterialType, UMaterialInterface*> MaterialMap;

	AGameBasePawn* OccupyingPawn;

	// getter
public:
	UFUNCTION(BlueprintCallable, DisplayName="获取占据的棋子")
	AGameBasePawn* GetOccupyingPawn() const;

	// setter
public:
	void SetOccupyingPawn(AGameBasePawn* NewPawn);
	
	UFUNCTION(BlueprintCallable, DisplayName="设置槽位碰撞体材质类型")
	void SetColliderMaterialType(EColliderMaterialType ColliderMaterialType);

	// operate
public:
	
	UFUNCTION(BlueprintPure, DisplayName="是否有棋子占据")
	bool IsOccupied() const;
	void ClearSlot();

public:
	virtual void EnterPawn(AGameBasePawn* Pawn);
	virtual void ExitPawn();

	/**
	 * 这个函数用于将内部创建的组件附加到其下方，
	 * 它（附加代码）不能合并到构造函数中，否则会产生错误的初始化（可能是初始化顺序错误)
	 */
	virtual void PostInitializeComponent();
};
