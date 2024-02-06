// Fill out your copyright notice in the Description page of Project Settings.


#include "ChineseChess/ChineseChessPawn.h"
#include "ChineseChess/ChineseChessBoardSlot.h"
#include "ChineseChess/Helper/ChineseChessManager.h"
#include "ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h"
#include "ChineseChess/Helper/ChineseChessSet.h"
#include "Net/UnrealNetwork.h"

AChineseChessPawn::AChineseChessPawn() :
	Status(EChineseChessPawnStatus::None)
{
	bReplicates = true;
}

void AChineseChessPawn::OnPerform()
{
	Perform.Broadcast(Status);
}

void AChineseChessPawn::NotifyActorOnClicked(FKey ButtonPressed /*= EKeys::LeftMouseButton*/)
{
	Super::NotifyActorOnClicked(ButtonPressed);

}

void AChineseChessPawn::NotifyActorOnReleased(FKey ButtonReleased /*= EKeys::LeftMouseButton*/)
{
	Super::NotifyActorOnReleased(ButtonReleased);
}

void AChineseChessPawn::NotifyActorBeginCursorOver()
{
	Super::NotifyActorBeginCursorOver();
}

void AChineseChessPawn::NotifyActorEndCursorOver()
{
	Super::NotifyActorEndCursorOver();
}

void AChineseChessPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AChineseChessPawn, Status);
	DOREPLIFETIME(AChineseChessPawn, GameManager);
}

void AChineseChessPawn::OnRep_ChangeStatus()
{
	UpdateState();
}

void AChineseChessPawn::SetGameManager(AChineseChessManager* InGameManagerPtr)
{
	GameManager = InGameManagerPtr;
}

void AChineseChessPawn::SetStatus(EChineseChessPawnStatus NewState)
{
	Status = NewState;
	UpdateState();
}

void AChineseChessPawn::Initialize(const FString& InPawnType, AChineseChessManager* InManager)
{
	PawnType = InPawnType;
	GameManager = InManager;

	InitializeStatus();
}

bool AChineseChessPawn::IsAlive()
{
	if (Status == EChineseChessPawnStatus::Dead)
	{
		return false;
	}
	return true;
}

void AChineseChessPawn::InitializeStatus()
{
	SetStatus(EChineseChessPawnStatus::Absence);
}

void AChineseChessPawn::MovePawn(UChineseChessBoardSlot* NewSlot)
{
 	const FVector StartPosition = GetActorLocation();
	const FVector EndPosition = NewSlot->GetComponentLocation();

	GetSlot()->ExitPawn();
	SetupSlot(NewSlot);
}

void AChineseChessPawn::MovePawn(const FVector2D& NewPos)
{
	if (UChineseChessBoardSlot* NewSlot = GameManager->GetSlot(NewPos))
	{
		MovePawn(NewSlot);
	}
}

void AChineseChessPawn::Die()
{
	SetStatus(EChineseChessPawnStatus::Dead);
}

UChineseChessBoardSlot* AChineseChessPawn::GetSlot()
{
	return AttachedSlot;
}

void AChineseChessPawn::SetupSlot(UChineseChessBoardSlot* NewSlot)
{
	AttachedSlot = NewSlot;
	NewSlot->EnterPawn(this);
	SetStatus(EChineseChessPawnStatus::Idle);
}

void AChineseChessPawn::UpdateState()
{
	switch (Status)
	{
	case EChineseChessPawnStatus::Absence:
		GetRootComponent()->SetVisibility(true);
		break;
	case EChineseChessPawnStatus::Idle:
		SetChannelEffect(ECC_Visibility, ECR_Ignore);
		break;
	case EChineseChessPawnStatus::Selected:
		break;
	case EChineseChessPawnStatus::Dead:
		GetRootComponent()->SetVisibility(false);
		break;
	default:
		break;
	}

	OnPerform();
}