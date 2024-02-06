// Fill out your copyright notice in the Description page of Project Settings.


#include "GameBaseBoardSlot.h"
#include "Components/StaticMeshComponent.h"
#include "GameBasePawn.h"

UGameBaseBoardSlot::UGameBaseBoardSlot()
{
    SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
    SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
    SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);
    SetGenerateOverlapEvents(true);

	OccupyingPawn = nullptr;

    for (EColliderMaterialType Type = EColliderMaterialType::Default; Type < EColliderMaterialType::None; Type = static_cast<EColliderMaterialType>(static_cast<uint8>(Type) + 1))
    {
        MaterialMap.Add(Type, nullptr);
    }

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialFinder(TEXT("/Script/Engine.MaterialInstanceConstant'/BoardGames/Materials/ColliderMaterial_Default.ColliderMaterial_Default'"));
    if (MaterialFinder.Succeeded())
    {
        UMaterialInterface* DefaultMaterial = MaterialFinder.Object;
        MaterialMap[EColliderMaterialType::Default] = DefaultMaterial;
    }

    SetColliderMaterialType(EColliderMaterialType::None);
}

AGameBasePawn* UGameBaseBoardSlot::GetOccupyingPawn() const
{
    return OccupyingPawn;
}

void UGameBaseBoardSlot::SetOccupyingPawn(AGameBasePawn* NewPawn)
{
    OccupyingPawn = NewPawn;
    if (OccupyingPawn)
    {
        OccupyingPawn->SetActorLocation(GetComponentLocation());
    }
}

void UGameBaseBoardSlot::SetColliderMaterialType(EColliderMaterialType ColliderMaterialType)
{
	if (MaterialMap.Contains(ColliderMaterialType))
	{
		SetVisibility(true);
		UMaterialInterface* NewMaterial = MaterialMap[ColliderMaterialType];
		if (!NewMaterial)
		{
			NewMaterial = MaterialMap[EColliderMaterialType::Default];
		}
		SetMaterial(0, NewMaterial);
	}
	else
	{
		SetVisibility(false);
	}
}

void UGameBaseBoardSlot::EnterPawn(AGameBasePawn* Pawn)
{
    if (!IsOccupied())
    {
        SetOccupyingPawn(Pawn);
    }
}

void UGameBaseBoardSlot::ExitPawn()
{
    if (IsOccupied())
    {
        ClearSlot();
    }
}

void UGameBaseBoardSlot::PostInitializeComponent()
{
	if (Collider)
	{
        SetStaticMesh(Collider);

        SetMaterial(0, MaterialMap[EColliderMaterialType::Default]);
	}
}

bool UGameBaseBoardSlot::IsOccupied() const
{
    return OccupyingPawn != nullptr;
}

void UGameBaseBoardSlot::ClearSlot()
{
    OccupyingPawn = nullptr;
}
