#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ChineseChessManager.h"
#include "ChineseChessBlueprintFunctionLibrary.generated.h"

UCLASS()
class BOARDGAMEDERIVED_API UChineseChessSetFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "象棋", DisplayName = "获取棋子类型位编码")
    static uint8 Encode(const FString& S_PawnType);
	UFUNCTION(BlueprintPure, Category = "象棋", DisplayName = "获取棋子类型字符串")
    static FString Decode(const uint8& I_PawnType);

	UFUNCTION(BlueprintPure, Category = "象棋", DisplayName = "判定棋子阵营-楚")
    static bool IsBelongTo_Chu(uint8 PawnCode);
	UFUNCTION(BlueprintPure, Category = "象棋", DisplayName = "判定棋子阵营-汉")
    static bool IsBelongTo_Han(uint8 PawnCode);

	UFUNCTION(BlueprintPure, Category = "象棋", DisplayName="评定控制权")
	static bool AssessControl(AChineseChessManager* InManager, APlayerState* InPlayerState, EChineseChessPlayer InPlayerCamp);
};