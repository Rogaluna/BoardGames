﻿#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ChineseChessManager.h"
#include "ChineseChessBlueprintFunctionLibrary.generated.h"

UCLASS()
class BOARDGAMEDERIVED_API UChineseChessSetFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "象棋", DisplayName = "获取初始棋盘状态")
	static TArray<FString> GetInitState();
	UFUNCTION(BlueprintPure, Category = "象棋", DisplayName = "获取棋子类型位编码")
    static uint8 Encode(const FString& S_PawnType);
	UFUNCTION(BlueprintPure, Category = "象棋", DisplayName = "获取棋子类型字符串")
    static FString Decode(const uint8& I_PawnType);

	UFUNCTION(BlueprintPure, Category = "象棋", DisplayName = "判定棋子阵营")
    static EChineseChessPlayer IsBelongTo(uint8 PawnCode);

	UFUNCTION(BlueprintPure, Category = "象棋", DisplayName = "评定控制权")
	static bool AssessControl(AChineseChessManager* InManager, APlayerState* InPlayerState, EChineseChessPlayer InPlayerCamp);

	UFUNCTION(BlueprintPure, Category = "象棋", DisplayName = "检查位置是否处于棋盘")
	static bool CheckPositionInBoard(const FVector2D& InVec);

	UFUNCTION(BlueprintPure, Category = "象棋", DisplayName = "转换索引到坐标")
	static FVector2D TransformIndexToPos(const int32& Index);

	UFUNCTION(BlueprintPure, Category = "象棋", DisplayName = "转换坐标到索引")
	static int32 TransformPosToIndex(const FVector2D& Pos);
};