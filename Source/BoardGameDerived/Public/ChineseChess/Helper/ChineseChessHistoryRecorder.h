// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChineseChessHistoryRecorder.generated.h"

USTRUCT(BlueprintType)
struct FChineseChessHistoryItem
{
	GENERATED_USTRUCT_BODY()

	// 主体棋子名称
	UPROPERTY(BlueprintReadOnly)
	FString PawnName;
	// 始动位置
	UPROPERTY(BlueprintReadOnly)
	FVector2D StartPos;
	// 终止位置
	UPROPERTY(BlueprintReadOnly)
	FVector2D EndPos;
	// 是否杀死棋子
	UPROPERTY(BlueprintReadOnly)
	uint8 isKiller : 1;
	// 被杀棋子名称
	UPROPERTY(BlueprintReadOnly)
	FString KilledName;
	// 是否将军
	UPROPERTY(BlueprintReadOnly)
	uint8 isChecker : 1;

	bool operator==(const FChineseChessHistoryItem& Other) const
	{
		return PawnName == Other.PawnName
			&& StartPos == Other.StartPos
			&& EndPos == Other.EndPos
			&& isKiller == Other.isKiller
			&& KilledName == Other.KilledName
			&& isChecker == Other.isChecker;
	}
};

/**
 * 史官
 */
UCLASS()
class BOARDGAMEDERIVED_API UChineseChessHistoryRecorder : public UObject
{
	GENERATED_BODY()
	
	// 属性
protected:
	// 记录历史的列表
	TArray<FChineseChessHistoryItem> HistoryList;
	
	// 状态队列，用于判定长将
	TQueue<TArray<uint8>> StatusQueue;
	#define LimitLength 4

public:
	FChineseChessHistoryItem CurrentHistoryItem;

	// operate
public:
	void AddHistoryItem();
	void RemoveLastHistoryItem();
	UFUNCTION(BlueprintPure, DisplayName = "获取指定索引历史记录")
	const FChineseChessHistoryItem& GetHistoryItem(int32 Index);
	UFUNCTION(BlueprintPure, DisplayName = "获取最后一条历史记录")
	const FChineseChessHistoryItem& GetLastHistoryItem();
	UFUNCTION(BlueprintPure, DisplayName = "获取历史长度")
	int32 GetLength();
};
