// Fill out your copyright notice in the Description page of Project Settings.


#include "ChineseChess/Helper/ChineseChessHistoryRecorder.h"

UChineseChessHistoryRecorder::UChineseChessHistoryRecorder()
{
	
}

void UChineseChessHistoryRecorder::Add(TArray<uint8> FeatureMap)
{
	if (StateQueue.Num() == LimitLength)
	{
		StateQueue.RemoveAt(0);
	}

	StateQueue.Emplace(FeatureMap);
}

void UChineseChessHistoryRecorder::Remove()
{
	if (StateQueue.IsValidIndex(0))
	{
		StateQueue.RemoveAt(0);
	}
}

void UChineseChessHistoryRecorder::Clear()
{
	StateQueue.Empty();
}

TArray<uint8>& UChineseChessHistoryRecorder::Get(int32 Index)
{
	return StateQueue[Index];
}

bool UChineseChessHistoryRecorder::IsQueueFull()
{
	if (StateQueue.Num() == LimitLength)
	{
		return true;
	}
	return false;
}
