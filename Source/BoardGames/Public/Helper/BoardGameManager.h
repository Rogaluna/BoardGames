// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoardGameManager.generated.h"

class AGameBaseBoard;
class UBoardGameSet;

/**
 * 
 */
UCLASS(Blueprintable)
class BOARDGAMES_API ABoardGameManager : public AActor
{
	GENERATED_BODY()

	// 构造函数
public:
	ABoardGameManager();

	// 属性
protected:
	AGameBaseBoard* Board;

	// setter
public:
	void SetBoard(AGameBaseBoard* NewBoard);

	// getter
public:

	UFUNCTION(BlueprintPure, DisplayName="获取棋盘")
	AGameBaseBoard* GetBoard();

	// operate
public:
	void StartGame();

	// Virtual
public:
	virtual void InitializeGame();
};
