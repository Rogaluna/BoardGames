// Fill out your copyright notice in the Description page of Project Settings.


#include "ChineseChess/Helper/ChineseChessSet.h"

UChineseChessSet::UChineseChessSet()
{

}

uint8 ChineseChessSet::Encode(const FString& S_PawnType)
{
	if (BitEncode.Contains(S_PawnType))
	{
		return BitEncode[S_PawnType];
	}
	return BitEncode["Unknown"];
}

FString ChineseChessSet::Decode(const uint8& I_PawnType)
{
	if (const FString* DecodeString = BitEncode.FindKey(I_PawnType))
	{
		return *DecodeString;
	}
	return "Error_Code";
}

uint8 ChineseChessSet::GetEmptyCode()
{
	return BitEncode["Empty"];
}
