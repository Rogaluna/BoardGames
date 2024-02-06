// Fill out your copyright notice in the Description page of Project Settings.


#include "ChineseChess/ChineseChessBoard.h"
#include "ChineseChess/ChineseChessBoardSlot.h"
#include "ChineseChess/ChineseChessPawn.h"
#include "ChineseChess/Helper/ChineseChessManager.h"
#include "Net/UnrealNetwork.h"

void AChineseChessBoard::OnSlotClicked(UChineseChessBoardSlot* Slot)
{
    SlotClicked.Broadcast(Slot);
}

void AChineseChessBoard::OnPlayerEntered(EChineseChessPlayer PlayerCamp, APlayerState* Player)
{
    PlayerEntered.Broadcast(PlayerCamp, Player);
}

void AChineseChessBoard::OnPlayerLeft(EChineseChessPlayer PlayerCamp, APlayerState* Player)
{
    PlayerLeft.Broadcast(PlayerCamp, Player);
}

AChineseChessBoard::AChineseChessBoard()
{
    bReplicates = true;

    for (int32 Y = 0; Y < BoardSize.Y; ++Y)
    {
        for (int32 X = 0; X < BoardSize.X; ++X)
        {
            // 创建新的中国象棋棋子槽位
            UChineseChessBoardSlot* NewSlot = CreateDefaultSubobject<UChineseChessBoardSlot>(FName(*FString::Printf(TEXT("Slot<%d,%d>"), X, Y)));
            if (NewSlot)
            {
                NewSlot->SetIsReplicated(true);

                NewSlot->SetSlotPos(X, Y);
                NewSlot->SetupAttachment(RootComponent);
                NewSlot->PostInitializeComponent();

                NewSlot->OnClicked.AddDynamic(this, &AChineseChessBoard::OnMeshComponentClicked);

                Slots.Add(NewSlot);
            }
        }
    }
    
}

void AChineseChessBoard::PostInitializeComponents()
{
    Super::PostInitializeComponents();

}

void AChineseChessBoard::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AChineseChessBoard, GameManager);
}

void AChineseChessBoard::BeginPlay()
{
    Super::BeginPlay();

    if (HasAuthority())
    {
        if (UWorld* World = GetWorld())
        {
            GameManager = World->SpawnActor<AChineseChessManager>(GameManagerClass);

            if (GameManager)
            {
                GameManager->SetBoard(this);

                GameManager->InitializeGame();
            }
        }
    }
}

void AChineseChessBoard::NotifyActorOnClicked(FKey ButtonPressed /*= EKeys::LeftMouseButton*/)
{
    Super::NotifyActorOnClicked(ButtonPressed);
}

void AChineseChessBoard::NotifyActorOnReleased(FKey ButtonReleased /*= EKeys::LeftMouseButton*/)
{
    Super::NotifyActorOnReleased(ButtonReleased);
}

void AChineseChessBoard::NotifyActorBeginCursorOver()
{
    Super::NotifyActorBeginCursorOver();
}

void AChineseChessBoard::NotifyActorEndCursorOver()
{
    Super::NotifyActorEndCursorOver();
}

void AChineseChessBoard::OnRep_GameManager()
{
    if (GameManager)
    {
        GameManager->SetBoard(this);
    }
}

UChineseChessBoardSlot* AChineseChessBoard::GetSlot(int32 i)
{
    if (Slots.IsValidIndex(i))
    {
        return Slots[i];
    }
    return nullptr;
}

UChineseChessBoardSlot* AChineseChessBoard::GetSlot(int32 X, int32 Y)
{
    int32 i = Y * 9 + X;
    return GetSlot(i);
}

UChineseChessBoardSlot* AChineseChessBoard::GetSlot(const FVector2D& InVec)
{
    return GetSlot(InVec.X, InVec.Y);
}

bool AChineseChessBoard::CheckPositionInBoard(const FVector2D& InVec)
{
    return InVec.X >= 0 && InVec.X < BoardSize.X
        && InVec.Y >= 0 && InVec.Y < BoardSize.Y;
}

void AChineseChessBoard::HandleSlotClicked(UGameBaseBoardSlot* BaseSlot, APlayerState* PlayerState)
{
	if (GameManager->IsSeating(PlayerState))
	{
		UChineseChessBoardSlot* Slot = Cast<UChineseChessBoardSlot>(BaseSlot);

		GameManager->ProcessBoardClick(Slot, PlayerState);
	}
}

void AChineseChessBoard::OnMeshComponentClicked(UPrimitiveComponent* ClickedComp, FKey ButtonPressed)
{
    OnSlotClicked(Cast<UChineseChessBoardSlot>(ClickedComp));
}
