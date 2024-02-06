// Fill out your copyright notice in the Description page of Project Settings.


#include "GameBasePawn.h"

// Sets default values
AGameBasePawn::AGameBasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ChessPawnMesh = CreateDefaultSubobject<UStaticMeshComponent>(L"ChessPawnMesh");
	RootComponent = ChessPawnMesh;
}

// Called when the game starts or when spawned
void AGameBasePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameBasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGameBasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool AGameBasePawn::GetIsActive() const
{
	return bIsActive;
}

void AGameBasePawn::SetActive(const bool& NewActiveStatus)
{
	bIsActive = NewActiveStatus;
}

void AGameBasePawn::SetChannelEffect(ECollisionChannel Channel, ECollisionResponse ECR)
{
	if (ChessPawnMesh)
	{
		ChessPawnMesh->SetCollisionResponseToChannel(Channel, ECR);
	}
}