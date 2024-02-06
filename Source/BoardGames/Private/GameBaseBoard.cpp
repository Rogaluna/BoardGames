// Fill out your copyright notice in the Description page of Project Settings.


#include "GameBaseBoard.h"
#include "GameBaseBoardSlot.h"
#include "Components/StaticMeshComponent.h"

AGameBaseBoard::AGameBaseBoard()
{
	PrimaryActorTick.bCanEverTick = false;

    ChessBoardMesh = CreateDefaultSubobject<UStaticMeshComponent>(L"ChessBoardMesh");
    RootComponent = ChessBoardMesh;
}

void AGameBaseBoard::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
}

void AGameBaseBoard::BeginPlay()
{
    Super::BeginPlay();
}

void AGameBaseBoard::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}