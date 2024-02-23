// Fill out your copyright notice in the Description page of Project Settings.


#include "ChineseChess/ChineseChessBoardSlot.h"
#include "NiagaraComponent.h"
#include "ChineseChess/ChineseChessPawn.h"
#include "ChineseChess/ChineseChessBoard.h"
#include "ChineseChess/Helper/ChineseChessManager.h"

UChineseChessBoardSlot::UChineseChessBoardSlot() : 
	HeightLight(EHeightLightType::None),
	FadeOutDuration(0.5),
	TransitionDuration(0.5)
{
	HeightLightComponent = CreateDefaultSubobject<UNiagaraComponent>(L"HeightLight");
}

void UChineseChessBoardSlot::SetSlotPos(const FVector2D NewSlotPos)
{
	SlotPos = NewSlotPos;
}

void UChineseChessBoardSlot::SetSlotPos(int32 X, int32 Y)
{
	SlotPos.X = X;
	SlotPos.Y = Y;
}

void UChineseChessBoardSlot::SetHeightLight(EHeightLightType NewHeightLight)
{
	if (!HeightLightComponent)
	{
		return;
	}

	// 如果新状态与当前状态相同，则无需更改
	if (HeightLight == NewHeightLight)
	{
		return;
	}
		
	// 开始过渡前的准备，比如逐渐减少当前粒子效果的透明度
	StartTransitionEffect();

	// 更新高亮状态
	HeightLight = NewHeightLight;
	switch (HeightLight)
	{
	case EHeightLightType::None:
		StartFadeOutEffect();
		break;
	case EHeightLightType::SelectedPreMove:
		TransitionToEffect(SelectedPreMoveEffect);
		break;
	case EHeightLightType::SelectedUnableMove:
		TransitionToEffect(SelectedUnableMoveEffect);
		break;
	case EHeightLightType::MovablePos:
		TransitionToEffect(MovableEffect);
		break;
	case EHeightLightType::Dangerous:
		TransitionToEffect(DangerousEffect);
		break;
	default:
		break;
	}
}

FVector2D UChineseChessBoardSlot::GetSlotPos() const
{
	return SlotPos;
}

void UChineseChessBoardSlot::PostInitializeComponent()
{
	Super::PostInitializeComponent();

	OnClicked.AddDynamic(this, &UChineseChessBoardSlot::OnMeshComponentClicked);

	if (HeightLightComponent)
	{
		HeightLightComponent->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
		HeightLightComponent->Deactivate();
	}
}

void UChineseChessBoardSlot::EnterPawn(AGameBasePawn* Pawn)
{
	if (!IsOccupied())
	{
		SetOccupyingPawn(Pawn);
	}
	else
	{
		AChineseChessPawn* OccupyingChineseChessPawn = Cast<AChineseChessPawn>(OccupyingPawn);
		if (OccupyingChineseChessPawn)
		{
			OccupyingChineseChessPawn->Die();
			SetOccupyingPawn(Pawn);
		}
	}
}

void UChineseChessBoardSlot::ExitPawn()
{
	if (IsOccupied())
	{
		ClearSlot();
	}
}

void UChineseChessBoardSlot::OnMeshComponentClicked(UPrimitiveComponent* ClickedComp, FKey ButtonPressed)
{
	UE_LOG(LogTemp, Log, L"ClickedSlot");
	if (AChineseChessBoard* Board = Cast<AChineseChessBoard>(GetOwner()))
	{
		Board->OnSlotClicked(this);
	}
}

void UChineseChessBoardSlot::StartTransitionEffect()
{
	// 这里设置粒子系统的过渡效果，如改变透明度等
}

void UChineseChessBoardSlot::TransitionToEffect(UNiagaraSystem* NewEffect)
{
	// 设置定时器，在当前效果渐变完成后激活新的粒子效果
	GetWorld()->GetTimerManager().SetTimer(TransitionTimerHandle, [this, NewEffect]() {
		HeightLightComponent->SetAsset(NewEffect);
		HeightLightComponent->Activate(true);
		}, TransitionDuration, false);
}

void UChineseChessBoardSlot::StartFadeOutEffect()
{
	// 设置渐变消失效果参数
	// ...

	// 设置定时器，在渐变完成后停用粒子系统
	GetWorld()->GetTimerManager().SetTimer(FadeOutTimerHandle, this, &UChineseChessBoardSlot::CompleteFadeOut, FadeOutDuration, false);
}

void UChineseChessBoardSlot::CompleteFadeOut()
{
	// 也许不使用这个性能开销更小...
	HeightLightComponent->Deactivate();
}