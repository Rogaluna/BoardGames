// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChineseChessHistoryRecorder.generated.h"

/**
 * 史官
 */
UCLASS()
class BOARDGAMEDERIVED_API UChineseChessHistoryRecorder : public UObject
{
	GENERATED_BODY()

	// 构造函数
public:
	UChineseChessHistoryRecorder();
	
	// 属性
protected:
	// 状态队列，用于判定长将
	TArray<TArray<uint8>> StateQueue;
	const int32 LimitLength = 4;

	// operate
public:
	void Add(TArray<uint8> FeatureMap);
	void Remove();
	void Clear();

	TArray<uint8>& Get(int32 Index);

	bool IsQueueFull();
};
