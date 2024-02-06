// Fill out your copyright notice in the Description page of Project Settings.


#include "ChineseChess/Helper/ChineseChessHistoryRecorder.h"

void UChineseChessHistoryRecorder::AddHistoryItem()
{
	HistoryList.Add(CurrentHistoryItem);
	CurrentHistoryItem = FChineseChessHistoryItem();
}

void UChineseChessHistoryRecorder::RemoveLastHistoryItem()
{
	HistoryList.Remove(HistoryList.Last());
	CurrentHistoryItem = FChineseChessHistoryItem();
}

const FChineseChessHistoryItem& UChineseChessHistoryRecorder::GetHistoryItem(int32 Index)
{
	return HistoryList[Index];
}

const FChineseChessHistoryItem& UChineseChessHistoryRecorder::GetLastHistoryItem()
{
	return HistoryList.Last();
}

int32 UChineseChessHistoryRecorder::GetLength()
{
	return HistoryList.Num();
}
