// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Helper/BoardGameInteract.h"
#include "GameBasePawn.generated.h"

class UStaticMeshComponent;

/**
 * 最基础的棋子，并不会有棋盘的引用，
 * 这个棋子基类仅仅是一小块木块，并没有指定它应该是哪种棋盘的棋子，
 * 因此，仅在此定义未削切成棋子的木块的属性和方法
 */
UCLASS()
class BOARDGAMES_API AGameBasePawn : public APawn, public IBoardGameInteract
{
	GENERATED_BODY()

	// 构造函数
public:
	AGameBasePawn();

	// 重写函数
protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// 属性
protected:
	/** 网格体组件 */
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子网格体")
		UStaticMeshComponent* ChessPawnMesh;

	/** 是否被选中 */
    bool bIsActive;

	// getter
public:
	bool GetIsActive() const;

	// setter
public:
	void SetActive(const bool& NewActiveStatus);

	// operate
public:

	UFUNCTION(BlueprintCallable, DisplayName="设置通道可被检测性")
	void SetChannelEffect(ECollisionChannel Channel, ECollisionResponse ECR);
};
