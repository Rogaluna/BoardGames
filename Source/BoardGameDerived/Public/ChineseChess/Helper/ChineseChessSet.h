// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Helper/BoardGameSet.h"
#include "ChineseChessSet.generated.h"

class AChineseChessPawn;
class AChineseChessManager;

namespace ChineseChessSet
{
	#define BOARDSIZE_X 9
	#define BOARDSIZE_Y 10
	#define BOARDSIZE FVector2D(9, 10)

	/** 编码棋子类型 */
	static TMap<FString, uint8> BitEncode = {
		{"Chu_Che", 0b0001}, {"Chu_Ma", 0b0010}, {"Chu_Xiang", 0b0011}, {"Chu_Shi", 0b0100},
		{"Chu_Jiang", 0b0101}, {"Chu_Pao", 0b0110}, {"Chu_Zu", 0b0111},
		{"Han_Che", 0b1001}, {"Han_Ma", 0b1010}, {"Han_Xiang", 0b1011}, {"Han_Shi", 0b1100},
		{"Han_Shuai", 0b1101}, {"Han_Pao", 0b1110}, {"Han_Bing", 0b1111},

		{"Empty", 0b0000}, {"Unknown", 0b1111}
	};

	/** 初始棋盘状态 */
	static TArray<FString> InitState = {
		"Chu_Che",  "Chu_Ma",  "Chu_Xiang", "Chu_Shi", "Chu_Jiang", "Chu_Shi", "Chu_Xiang", "Chu_Ma",  "Chu_Che",
		"Empty",    "Empty",   "Empty",     "Empty",   "Empty",     "Empty",   "Empty",     "Empty",   "Empty",
		"Empty",    "Chu_Pao", "Empty",     "Empty",   "Empty",     "Empty",   "Empty",     "Chu_Pao", "Empty",
		"Chu_Zu",   "Empty",   "Chu_Zu",    "Empty",   "Chu_Zu",    "Empty",   "Chu_Zu",    "Empty",   "Chu_Zu",
		"Empty",    "Empty",   "Empty",     "Empty",   "Empty",     "Empty",   "Empty",     "Empty",   "Empty",
		"Empty",    "Empty",   "Empty",     "Empty",   "Empty",     "Empty",   "Empty",     "Empty",   "Empty",
		"Han_Bing", "Empty",   "Han_Bing",  "Empty",   "Han_Bing",  "Empty",   "Han_Bing",  "Empty",   "Han_Bing",
		"Empty",    "Han_Pao", "Empty",     "Empty",   "Empty",     "Empty",   "Empty",     "Han_Pao", "Empty",
		"Empty",    "Empty",   "Empty",     "Empty",   "Empty",     "Empty",   "Empty",     "Empty",   "Empty",
		"Han_Che",  "Han_Ma",  "Han_Xiang", "Han_Shi", "Han_Shuai", "Han_Shi", "Han_Xiang", "Han_Ma",  "Han_Che"
	};

	uint8 Encode(const FString& S_PawnType);
	FString Decode(const uint8& I_PawnType);

	uint8 GetEmptyCode();
};

/**
 * 
 */
UCLASS()
class BOARDGAMEDERIVED_API UChineseChessSet : public UBoardGameSet
{
	GENERATED_BODY()

	// 构造函数
public:
	UChineseChessSet();

	// 属性
protected:
	friend AChineseChessManager;

	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子类：車（楚）")
	TSubclassOf<AChineseChessPawn> PawnClass_Chu_Che;
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子类：車（汉）")
	TSubclassOf<AChineseChessPawn> PawnClass_Han_Che;
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子类：馬（楚）")
	TSubclassOf<AChineseChessPawn> PawnClass_Chu_Ma;
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子类：馬（汉）")
	TSubclassOf<AChineseChessPawn> PawnClass_Han_Ma;
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子类：象（楚）")
	TSubclassOf<AChineseChessPawn> PawnClass_Chu_Xiang;
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子类：相（汉）")
	TSubclassOf<AChineseChessPawn> PawnClass_Han_Xiang;
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子类：砲（楚）")
	TSubclassOf<AChineseChessPawn> PawnClass_Chu_Pao;
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子类：炮（汉）")
	TSubclassOf<AChineseChessPawn> PawnClass_Han_Pao;
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子类：仕（楚）")
	TSubclassOf<AChineseChessPawn> PawnClass_Chu_Shi;
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子类：士（汉）")
	TSubclassOf<AChineseChessPawn> PawnClass_Han_Shi;
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子类：将（楚）")
	TSubclassOf<AChineseChessPawn> PawnClass_Chu_Jiang;
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子类：帅（汉）")
	TSubclassOf<AChineseChessPawn> PawnClass_Han_Shuai;
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子类：卒（楚）")
	TSubclassOf<AChineseChessPawn> PawnClass_Chu_Zu;
	UPROPERTY(EditDefaultsOnly, Category="属性", DisplayName="棋子类：兵（汉）")
	TSubclassOf<AChineseChessPawn> PawnClass_Han_Bing;
};
