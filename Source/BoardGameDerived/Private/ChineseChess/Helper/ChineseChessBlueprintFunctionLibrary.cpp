#include "ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h"
#include "ChineseChess/Helper/ChineseChessSet.h"

FVector2D UChineseChessSetFunctionLibrary::GetBoardSize()
{
	return FVector2D(ChineseChessSet::BOARDSIZE_X, ChineseChessSet::BOARDSIZE_Y);
}

uint8 UChineseChessSetFunctionLibrary::Encode(const FString& S_PawnType)
{
	return ChineseChessSet::Encode(S_PawnType);
}

FString UChineseChessSetFunctionLibrary::Decode(const uint8& I_PawnType)
{
	return ChineseChessSet::Decode(I_PawnType);
}

bool UChineseChessSetFunctionLibrary::IsBelongTo_Chu(uint8 PawnCode)
{
	return !(PawnCode >> 3);
}

bool UChineseChessSetFunctionLibrary::IsBelongTo_Han(uint8 PawnCode)
{
	return PawnCode >> 3;
}

bool UChineseChessSetFunctionLibrary::AssessControl(AChineseChessManager* InManager, APlayerState* InPlayerState, EChineseChessPlayer InPlayerCamp)
{
	return InManager->IsPlayerCamp(InPlayerState, InPlayerCamp);
}
