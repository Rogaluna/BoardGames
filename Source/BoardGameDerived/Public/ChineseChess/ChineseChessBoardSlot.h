// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameBaseBoardSlot.h"
#include "ChineseChessBoardSlot.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

UENUM(BlueprintType)
enum class EHeightLightType : uint8
{
	None								UMETA(DisplayName = "无高光"),
	SelectedPreMove						UMETA(DisplayName = "选中预移动高光"),
	SelectedUnableMove					UMETA(DisplayName = "选中无法移动高光"),
	MovablePos							UMETA(DisplayName = "可移动位置高光"),
	Dangerous							UMETA(DisplayName = "危险高光")
};

/**
 * 
 */
UCLASS()
class BOARDGAMEDERIVED_API UChineseChessBoardSlot : public UGameBaseBoardSlot
{
	GENERATED_BODY()

	// Event
public:
	
	
	// 构造函数
public:
	UChineseChessBoardSlot();

	// 属性
protected:
	FVector2D SlotPos;

	UPROPERTY(EditAnywhere, Category="属性", DisplayName="高亮组件")
	UNiagaraComponent* HeightLightComponent;
	FTimerHandle FadeOutTimerHandle;
	EHeightLightType HeightLight;

	UPROPERTY(EditDefaultsOnly, Category="属性|特效", DisplayName="粒子特效[消失]渐变时间")
	float FadeOutDuration;

	FTimerHandle TransitionTimerHandle;
	UPROPERTY(EditDefaultsOnly, Category="属性|特效", DisplayName="粒子特效[变更]渐变时间")
	float TransitionDuration;

	UPROPERTY(EditDefaultsOnly, Category="属性|特效", DisplayName="选中预移动特效")
	UNiagaraSystem* SelectedPreMoveEffect;
	UPROPERTY(EditDefaultsOnly, Category="属性|特效", DisplayName="选中无法移动特效")
	UNiagaraSystem* SelectedUnableMoveEffect;
	UPROPERTY(EditDefaultsOnly, Category="属性|特效", DisplayName="可移动特效")
	UNiagaraSystem* MovableEffect;
	UPROPERTY(EditDefaultsOnly, Category="属性|特效", DisplayName="危险特效")
	UNiagaraSystem* DangerousEffect;

	// setter
public:
	void SetSlotPos(const FVector2D NewSlotPos);
	void SetSlotPos(int32 X, int32 Y);

	UFUNCTION(BlueprintCallable, DisplayName="设置高亮")
	void SetHeightLight(EHeightLightType NewHeightLight);

	// getter
public:
	UFUNCTION(BlueprintPure, DisplayName = "获取槽位坐标")
	FVector2D GetSlotPos() const;

	// operate
public:

	virtual void PostInitializeComponent() override;
	virtual void EnterPawn(AGameBasePawn* Pawn) override;
	virtual void ExitPawn() override;

protected:
	void StartTransitionEffect();

	void TransitionToEffect(UNiagaraSystem* NewEffect);

	void StartFadeOutEffect();
	void CompleteFadeOut();
};
