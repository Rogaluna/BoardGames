// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Helper/BoardGameInteract.h"
#include "GameBaseBoard.generated.h"

class UGameBaseBoardSlot;
class AGameBasePawn;
class UStaticMeshComponent;

/**
 * 基础的棋盘应该只是啥也没有的一块板子。
 * 没有规划，自然也就不会有棋子槽位、棋盘大小这些看上去应该处于棋盘顶级父类中的属性
 */
UCLASS()
class BOARDGAMES_API AGameBaseBoard : public AActor
{
	GENERATED_BODY()

	// 构造函数
public:
	AGameBaseBoard();

	// 重写函数
public:
	virtual void OnConstruction(const FTransform& Transform) override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	// 属性
protected:

	UPROPERTY(EditDefaultsOnly, Category = "属性", DisplayName="棋盘网格体")
	UStaticMeshComponent* ChessBoardMesh;
};
