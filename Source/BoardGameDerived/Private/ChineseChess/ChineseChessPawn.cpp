// Fill out your copyright notice in the Description page of Project Settings.


#include "ChineseChess/ChineseChessPawn.h"
#include "ChineseChess/ChineseChessBoardSlot.h"
#include "ChineseChess/Helper/ChineseChessManager.h"
#include "ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h"
#include "ChineseChess/Helper/ChineseChessSet.h"
#include "Net/UnrealNetwork.h"
#include "ChineseChess/ChineseChessBoard.h"

AChineseChessPawn::AChineseChessPawn() :
	State(EChineseChessPawnState::None)
{
	bReplicates = true;
}

void AChineseChessPawn::OnPerform()
{
	Perform.Broadcast(State);
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

	DOREPLIFETIME(AChineseChessPawn, State);
	DOREPLIFETIME(AChineseChessPawn, GameManager);
}

void AChineseChessPawn::OnRep_ChangeState()
{
	UpdateState();
}

void AChineseChessPawn::SetGameManager(AChineseChessManager* InGameManagerPtr)
{
	GameManager = InGameManagerPtr;
}

void AChineseChessPawn::SetState(EChineseChessPawnState NewState)
{
	State = NewState;
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
	if (State == EChineseChessPawnState::Dead)
	{
		return false;
	}
	return true;
}

void AChineseChessPawn::InitializeStatus()
{
	SetState(EChineseChessPawnState::Absence);
}

void AChineseChessPawn::MovePawn(UChineseChessBoardSlot* NewSlot)
{
 	const FVector StartPosition = GetActorLocation();
	const FVector EndPosition = NewSlot->GetComponentLocation();

	GetSlot()->ExitPawn();
	SetupSlot(NewSlot);
}

void AChineseChessPawn::Die()
{
	SetState(EChineseChessPawnState::Dead);
}

UChineseChessBoardSlot* AChineseChessPawn::GetSlot()
{
	return AttachedSlot;
}

void AChineseChessPawn::SetupSlot(UChineseChessBoardSlot* NewSlot)
{
	AttachedSlot = NewSlot;
	NewSlot->EnterPawn(this);
	SetState(EChineseChessPawnState::Idle);
}

void AChineseChessPawn::UpdateState()
{
	switch (State)
	{
	case EChineseChessPawnState::Absence:
		GetRootComponent()->SetVisibility(true);
		break;
	case EChineseChessPawnState::Idle:
		SetChannelEffect(ECC_Visibility, ECR_Ignore);
		break;
	case EChineseChessPawnState::Selected:
		break;
	case EChineseChessPawnState::Dead:
		GetRootComponent()->SetVisibility(false);
		break;
	default:
		break;
	}

	OnPerform();
}