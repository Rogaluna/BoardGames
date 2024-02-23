#include "ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h"
#include "ChineseChess/Helper/ChineseChessSet.h"

TArray<FString> UChineseChessSetFunctionLibrary::GetInitState()
{
	return ChineseChessSet::InitState;
}

uint8 UChineseChessSetFunctionLibrary::Encode(const FString& S_PawnType)
{
	return ChineseChessSet::Encode(S_PawnType);
}

FString UChineseChessSetFunctionLibrary::Decode(const uint8& I_PawnType)
{
	return ChineseChessSet::Decode(I_PawnType);
}

EChineseChessPlayer UChineseChessSetFunctionLibrary::IsBelongTo(uint8 PawnCode)
{
	return (EChineseChessPlayer)(PawnCode >> 3);
}

bool UChineseChessSetFunctionLibrary::AssessControl(AChineseChessManager* InManager, APlayerState* InPlayerState, EChineseChessPlayer InPlayerCamp)
{
	EChineseChessPlayer PlayerCamp;
	if (InManager->GetPlayerCamp(InPlayerState, PlayerCamp))
	{
		if (InPlayerCamp == PlayerCamp)
		{
			return true;
		}
	}
	return false;
}

bool UChineseChessSetFunctionLibrary::CheckPositionInBoard(const FVector2D& InVec)
{
	return InVec.X >= 0 && InVec.X < BOARDSIZE_X
		&& InVec.Y >= 0 && InVec.Y < BOARDSIZE_Y;
}

FVector2D UChineseChessSetFunctionLibrary::TransformIndexToPos(const int32& Index)
{
	return FVector2D(Index % BOARDSIZE_X, Index / BOARDSIZE_X);
}

int32 UChineseChessSetFunctionLibrary::TransformPosToIndex(const FVector2D& Pos)
{
	return Pos.X + Pos.Y * BOARDSIZE_X;
}
