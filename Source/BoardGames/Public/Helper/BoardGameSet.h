// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BoardGameSet.generated.h"

/**
 * 主要是用于初始化棋盘棋子位置，
 */
UCLASS(Blueprintable)
class BOARDGAMES_API UBoardGameSet : public UObject
{
	GENERATED_BODY()
	
	// 构造函数
public:
	UBoardGameSet();

	// 属性
protected:

	// setter
public:

	// getter
public:

	// Virtual
public:
	virtual void InitializePawns();

protected:
	virtual void SetInitPos(const FVector2D InVector2D);
};
