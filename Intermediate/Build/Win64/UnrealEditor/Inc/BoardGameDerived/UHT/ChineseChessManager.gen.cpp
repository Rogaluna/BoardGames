// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardGameDerived/Public/ChineseChess/Helper/ChineseChessManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChineseChessManager() {}
// Cross Module References
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_AChineseChessManager();
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_AChineseChessManager_NoRegister();
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_AChineseChessPawn_NoRegister();
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_UChineseChessHistoryRecorder_NoRegister();
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_UChineseChessSet_NoRegister();
	BOARDGAMEDERIVED_API UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessAwaitState();
	BOARDGAMEDERIVED_API UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessGameState();
	BOARDGAMEDERIVED_API UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer();
	BOARDGAMEDERIVED_API UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState();
	BOARDGAMEDERIVED_API UFunction* Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature();
	BOARDGAMEDERIVED_API UFunction* Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature();
	BOARDGAMEDERIVED_API UFunction* Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature();
	BOARDGAMES_API UClass* Z_Construct_UClass_ABoardGameManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BoardGameDerived();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChineseChessPlayer;
	static UEnum* EChineseChessPlayer_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessPlayer.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChineseChessPlayer.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, (UObject*)Z_Construct_UPackage__Script_BoardGameDerived(), TEXT("EChineseChessPlayer"));
		}
		return Z_Registration_Info_UEnum_EChineseChessPlayer.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessPlayer>()
	{
		return EChineseChessPlayer_StaticEnum();
	}
	struct Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer_Statics::Enumerators[] = {
		{ "EChineseChessPlayer::Chu", (int64)EChineseChessPlayer::Chu },
		{ "EChineseChessPlayer::Han", (int64)EChineseChessPlayer::Han },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chu.DisplayName", "\xe6\xa5\x9a" },
		{ "Chu.Name", "EChineseChessPlayer::Chu" },
		{ "Han.DisplayName", "\xe6\xb1\x89" },
		{ "Han.Name", "EChineseChessPlayer::Han" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BoardGameDerived,
		nullptr,
		"EChineseChessPlayer",
		"EChineseChessPlayer",
		Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessPlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChineseChessPlayer.InnerSingleton, Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChineseChessPlayer.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChineseChessAwaitState;
	static UEnum* EChineseChessAwaitState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessAwaitState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChineseChessAwaitState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BoardGameDerived_EChineseChessAwaitState, (UObject*)Z_Construct_UPackage__Script_BoardGameDerived(), TEXT("EChineseChessAwaitState"));
		}
		return Z_Registration_Info_UEnum_EChineseChessAwaitState.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessAwaitState>()
	{
		return EChineseChessAwaitState_StaticEnum();
	}
	struct Z_Construct_UEnum_BoardGameDerived_EChineseChessAwaitState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BoardGameDerived_EChineseChessAwaitState_Statics::Enumerators[] = {
		{ "EChineseChessAwaitState::Wait_Chu", (int64)EChineseChessAwaitState::Wait_Chu },
		{ "EChineseChessAwaitState::Wait_Han", (int64)EChineseChessAwaitState::Wait_Han },
		{ "EChineseChessAwaitState::Wait_BothSides", (int64)EChineseChessAwaitState::Wait_BothSides },
		{ "EChineseChessAwaitState::Ready", (int64)EChineseChessAwaitState::Ready },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BoardGameDerived_EChineseChessAwaitState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
		{ "Ready.DisplayName", "\xe5\xb0\xb1\xe7\xbb\xaa" },
		{ "Ready.Name", "EChineseChessAwaitState::Ready" },
		{ "Wait_BothSides.DisplayName", "\xe7\xad\x89\xe5\xbe\x85\xe5\x8f\x8c\xe6\x96\xb9" },
		{ "Wait_BothSides.Name", "EChineseChessAwaitState::Wait_BothSides" },
		{ "Wait_Chu.DisplayName", "\xe7\xad\x89\xe5\xbe\x85\xe2\x80\x94\xe2\x80\x94\xe6\xa5\x9a" },
		{ "Wait_Chu.Name", "EChineseChessAwaitState::Wait_Chu" },
		{ "Wait_Han.DisplayName", "\xe7\xad\x89\xe5\xbe\x85\xe2\x80\x94\xe2\x80\x94\xe6\xb1\x89" },
		{ "Wait_Han.Name", "EChineseChessAwaitState::Wait_Han" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BoardGameDerived_EChineseChessAwaitState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BoardGameDerived,
		nullptr,
		"EChineseChessAwaitState",
		"EChineseChessAwaitState",
		Z_Construct_UEnum_BoardGameDerived_EChineseChessAwaitState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessAwaitState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BoardGameDerived_EChineseChessAwaitState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessAwaitState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessAwaitState()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessAwaitState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChineseChessAwaitState.InnerSingleton, Z_Construct_UEnum_BoardGameDerived_EChineseChessAwaitState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChineseChessAwaitState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChineseChessRoundState;
	static UEnum* EChineseChessRoundState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessRoundState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChineseChessRoundState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState, (UObject*)Z_Construct_UPackage__Script_BoardGameDerived(), TEXT("EChineseChessRoundState"));
		}
		return Z_Registration_Info_UEnum_EChineseChessRoundState.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessRoundState>()
	{
		return EChineseChessRoundState_StaticEnum();
	}
	struct Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState_Statics::Enumerators[] = {
		{ "EChineseChessRoundState::RoundChu", (int64)EChineseChessRoundState::RoundChu },
		{ "EChineseChessRoundState::RoundHan", (int64)EChineseChessRoundState::RoundHan },
		{ "EChineseChessRoundState::None", (int64)EChineseChessRoundState::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
		{ "None.DisplayName", "\xe5\x8f\x8c\xe6\x96\xb9\xe6\x97\xa0\xe6\x9d\x83\xe7\xa7\xbb\xe5\x8a\xa8" },
		{ "None.Name", "EChineseChessRoundState::None" },
		{ "RoundChu.DisplayName", "\xe6\xa5\x9a\xe5\x86\x9b\xe5\x9b\x9e\xe5\x90\x88" },
		{ "RoundChu.Name", "EChineseChessRoundState::RoundChu" },
		{ "RoundHan.DisplayName", "\xe6\xb1\x89\xe5\x86\x9b\xe5\x9b\x9e\xe5\x90\x88" },
		{ "RoundHan.Name", "EChineseChessRoundState::RoundHan" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BoardGameDerived,
		nullptr,
		"EChineseChessRoundState",
		"EChineseChessRoundState",
		Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessRoundState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChineseChessRoundState.InnerSingleton, Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChineseChessRoundState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChineseChessGameState;
	static UEnum* EChineseChessGameState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessGameState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChineseChessGameState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BoardGameDerived_EChineseChessGameState, (UObject*)Z_Construct_UPackage__Script_BoardGameDerived(), TEXT("EChineseChessGameState"));
		}
		return Z_Registration_Info_UEnum_EChineseChessGameState.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessGameState>()
	{
		return EChineseChessGameState_StaticEnum();
	}
	struct Z_Construct_UEnum_BoardGameDerived_EChineseChessGameState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BoardGameDerived_EChineseChessGameState_Statics::Enumerators[] = {
		{ "EChineseChessGameState::None", (int64)EChineseChessGameState::None },
		{ "EChineseChessGameState::GameStart", (int64)EChineseChessGameState::GameStart },
		{ "EChineseChessGameState::GameOver", (int64)EChineseChessGameState::GameOver },
		{ "EChineseChessGameState::IllegalMove", (int64)EChineseChessGameState::IllegalMove },
		{ "EChineseChessGameState::Check", (int64)EChineseChessGameState::Check },
		{ "EChineseChessGameState::CheckMate", (int64)EChineseChessGameState::CheckMate },
		{ "EChineseChessGameState::GiveUp", (int64)EChineseChessGameState::GiveUp },
		{ "EChineseChessGameState::RoundSwitch", (int64)EChineseChessGameState::RoundSwitch },
		{ "EChineseChessGameState::CampSwitch", (int64)EChineseChessGameState::CampSwitch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BoardGameDerived_EChineseChessGameState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CampSwitch.DisplayName", "\xe5\x88\x87\xe6\x8d\xa2\xe9\x98\xb5\xe8\x90\xa5" },
		{ "CampSwitch.Name", "EChineseChessGameState::CampSwitch" },
		{ "Check.DisplayName", "\xe5\xb0\x86\xe5\x86\x9b" },
		{ "Check.Name", "EChineseChessGameState::Check" },
		{ "CheckMate.DisplayName", "\xe5\xb0\x86\xe6\xad\xbb" },
		{ "CheckMate.Name", "EChineseChessGameState::CheckMate" },
		{ "GameOver.DisplayName", "\xe6\xb8\xb8\xe6\x88\x8f\xe7\xbb\x93\xe6\x9d\x9f" },
		{ "GameOver.Name", "EChineseChessGameState::GameOver" },
		{ "GameStart.DisplayName", "\xe6\xb8\xb8\xe6\x88\x8f\xe5\xbc\x80\xe5\xa7\x8b" },
		{ "GameStart.Name", "EChineseChessGameState::GameStart" },
		{ "GiveUp.DisplayName", "\xe8\xae\xa4\xe8\xbe\x93" },
		{ "GiveUp.Name", "EChineseChessGameState::GiveUp" },
		{ "IllegalMove.DisplayName", "\xe9\x9d\x9e\xe6\xb3\x95\xe7\xa7\xbb\xe5\x8a\xa8" },
		{ "IllegalMove.Name", "EChineseChessGameState::IllegalMove" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
		{ "None.DisplayName", "\xe5\x8d\xa0\xe4\xbd\x8d\xe7\xac\xa6" },
		{ "None.Name", "EChineseChessGameState::None" },
		{ "RoundSwitch.DisplayName", "\xe5\x88\x87\xe6\x8d\xa2\xe5\x9b\x9e\xe5\x90\x88" },
		{ "RoundSwitch.Name", "EChineseChessGameState::RoundSwitch" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BoardGameDerived_EChineseChessGameState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BoardGameDerived,
		nullptr,
		"EChineseChessGameState",
		"EChineseChessGameState",
		Z_Construct_UEnum_BoardGameDerived_EChineseChessGameState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessGameState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BoardGameDerived_EChineseChessGameState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessGameState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessGameState()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessGameState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChineseChessGameState.InnerSingleton, Z_Construct_UEnum_BoardGameDerived_EChineseChessGameState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChineseChessGameState.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics
	{
		struct ChineseChessManager_eventPlayerEnteredDelegate_Parms
		{
			EChineseChessPlayer PlayerCamp;
			APlayerState* Player;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerCamp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerCamp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::NewProp_PlayerCamp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::NewProp_PlayerCamp = { "PlayerCamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventPlayerEnteredDelegate_Parms, PlayerCamp), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, METADATA_PARAMS(nullptr, 0) }; // 3666507954
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventPlayerEnteredDelegate_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::NewProp_PlayerCamp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::NewProp_PlayerCamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "PlayerEnteredDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::ChineseChessManager_eventPlayerEnteredDelegate_Parms), Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void AChineseChessManager::FPlayerEnteredDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerEnteredDelegate, EChineseChessPlayer PlayerCamp, APlayerState* Player)
{
	struct ChineseChessManager_eventPlayerEnteredDelegate_Parms
	{
		EChineseChessPlayer PlayerCamp;
		APlayerState* Player;
	};
	ChineseChessManager_eventPlayerEnteredDelegate_Parms Parms;
	Parms.PlayerCamp=PlayerCamp;
	Parms.Player=Player;
	PlayerEnteredDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics
	{
		struct ChineseChessManager_eventPlayerLeftDelegate_Parms
		{
			EChineseChessPlayer PlayerCamp;
			APlayerState* Player;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerCamp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerCamp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::NewProp_PlayerCamp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::NewProp_PlayerCamp = { "PlayerCamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventPlayerLeftDelegate_Parms, PlayerCamp), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, METADATA_PARAMS(nullptr, 0) }; // 3666507954
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventPlayerLeftDelegate_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::NewProp_PlayerCamp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::NewProp_PlayerCamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "PlayerLeftDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::ChineseChessManager_eventPlayerLeftDelegate_Parms), Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void AChineseChessManager::FPlayerLeftDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerLeftDelegate, EChineseChessPlayer PlayerCamp, APlayerState* Player)
{
	struct ChineseChessManager_eventPlayerLeftDelegate_Parms
	{
		EChineseChessPlayer PlayerCamp;
		APlayerState* Player;
	};
	ChineseChessManager_eventPlayerLeftDelegate_Parms Parms;
	Parms.PlayerCamp=PlayerCamp;
	Parms.Player=Player;
	PlayerLeftDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics
	{
		struct ChineseChessManager_eventGameActionDelegate_Parms
		{
			EChineseChessGameState GameState;
			APlayerState* Player;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_GameState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GameState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::NewProp_GameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::NewProp_GameState = { "GameState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventGameActionDelegate_Parms, GameState), Z_Construct_UEnum_BoardGameDerived_EChineseChessGameState, METADATA_PARAMS(nullptr, 0) }; // 592025775
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventGameActionDelegate_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::NewProp_GameState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::NewProp_GameState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "GameActionDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::ChineseChessManager_eventGameActionDelegate_Parms), Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void AChineseChessManager::FGameActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameActionDelegate, EChineseChessGameState GameState, APlayerState* Player)
{
	struct ChineseChessManager_eventGameActionDelegate_Parms
	{
		EChineseChessGameState GameState;
		APlayerState* Player;
	};
	ChineseChessManager_eventGameActionDelegate_Parms Parms;
	Parms.GameState=GameState;
	Parms.Player=Player;
	GameActionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AChineseChessManager::execCompareFeatureMap)
	{
		P_GET_TARRAY(uint8,Z_Param_SoureFeatureMap);
		P_GET_TARRAY(uint8,Z_Param_TargetFeatureMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CompareFeatureMap(Z_Param_SoureFeatureMap,Z_Param_TargetFeatureMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execGetFeatureMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetFeatureMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execSwitchCamp)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Player);
		P_GET_ENUM(EChineseChessPlayer,Z_Param_TargetCamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchCamp(Z_Param_Player,EChineseChessPlayer(Z_Param_TargetCamp));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execGiveUp)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GiveUp(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execGameStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execIsEntered)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEntered(Z_Param_PlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execGetPlayerCamp)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_GET_ENUM_REF(EChineseChessPlayer,Z_Param_Out_PlayerCamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPlayerCamp(Z_Param_PlayerState,(EChineseChessPlayer&)(Z_Param_Out_PlayerCamp));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execGetPlayer)
	{
		P_GET_ENUM(EChineseChessPlayer,Z_Param_PlayerCamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerState**)Z_Param__Result=P_THIS->GetPlayer(EChineseChessPlayer(Z_Param_PlayerCamp));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execWaitPlayer)
	{
		P_GET_ENUM_REF(EChineseChessAwaitState,Z_Param_Out_OutAwaitState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WaitPlayer((EChineseChessAwaitState&)(Z_Param_Out_OutAwaitState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execGetPawnArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AChineseChessPawn*>*)Z_Param__Result=P_THIS->GetPawnArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execGetIsGameing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsGameing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execGetHistoryRecorder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UChineseChessHistoryRecorder**)Z_Param__Result=P_THIS->GetHistoryRecorder();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execOnPlayerLeft)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerLeft(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execOnPlayerEntered)
	{
		P_GET_ENUM(EChineseChessPlayer,Z_Param_PlayerCamp);
		P_GET_OBJECT(APlayerState,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerEntered(EChineseChessPlayer(Z_Param_PlayerCamp),Z_Param_Player);
		P_NATIVE_END;
	}
	struct ChineseChessManager_eventNotifyMovableSlotsShow_Parms
	{
		TArray<FVector2D> SlotPositions;
	};
	static FName NAME_AChineseChessManager_NotifyMovableSlotsShow = FName(TEXT("NotifyMovableSlotsShow"));
	void AChineseChessManager::NotifyMovableSlotsShow(TArray<FVector2D> const& SlotPositions)
	{
		ChineseChessManager_eventNotifyMovableSlotsShow_Parms Parms;
		Parms.SlotPositions=SlotPositions;
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_NotifyMovableSlotsShow),&Parms);
	}
	static FName NAME_AChineseChessManager_NotifyPlayerChange = FName(TEXT("NotifyPlayerChange"));
	void AChineseChessManager::NotifyPlayerChange()
	{
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_NotifyPlayerChange),NULL);
	}
	static FName NAME_AChineseChessManager_NotifySlotsHide = FName(TEXT("NotifySlotsHide"));
	void AChineseChessManager::NotifySlotsHide()
	{
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_NotifySlotsHide),NULL);
	}
	void AChineseChessManager::StaticRegisterNativesAChineseChessManager()
	{
		UClass* Class = AChineseChessManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompareFeatureMap", &AChineseChessManager::execCompareFeatureMap },
			{ "GameStart", &AChineseChessManager::execGameStart },
			{ "GetFeatureMap", &AChineseChessManager::execGetFeatureMap },
			{ "GetHistoryRecorder", &AChineseChessManager::execGetHistoryRecorder },
			{ "GetIsGameing", &AChineseChessManager::execGetIsGameing },
			{ "GetPawnArray", &AChineseChessManager::execGetPawnArray },
			{ "GetPlayer", &AChineseChessManager::execGetPlayer },
			{ "GetPlayerCamp", &AChineseChessManager::execGetPlayerCamp },
			{ "GiveUp", &AChineseChessManager::execGiveUp },
			{ "IsEntered", &AChineseChessManager::execIsEntered },
			{ "OnPlayerEntered", &AChineseChessManager::execOnPlayerEntered },
			{ "OnPlayerLeft", &AChineseChessManager::execOnPlayerLeft },
			{ "SwitchCamp", &AChineseChessManager::execSwitchCamp },
			{ "WaitPlayer", &AChineseChessManager::execWaitPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics
	{
		struct ChineseChessManager_eventCompareFeatureMap_Parms
		{
			TArray<uint8> SoureFeatureMap;
			TArray<uint8> TargetFeatureMap;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SoureFeatureMap_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoureFeatureMap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetFeatureMap_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetFeatureMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::NewProp_SoureFeatureMap_Inner = { "SoureFeatureMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::NewProp_SoureFeatureMap = { "SoureFeatureMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventCompareFeatureMap_Parms, SoureFeatureMap), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::NewProp_TargetFeatureMap_Inner = { "TargetFeatureMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::NewProp_TargetFeatureMap = { "TargetFeatureMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventCompareFeatureMap_Parms, TargetFeatureMap), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChineseChessManager_eventCompareFeatureMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChineseChessManager_eventCompareFeatureMap_Parms), &Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::NewProp_SoureFeatureMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::NewProp_SoureFeatureMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::NewProp_TargetFeatureMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::NewProp_TargetFeatureMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe6\xaf\x94\xe8\xbe\x83\xe7\x89\xb9\xe5\xbe\x81\xe5\x9b\xbe" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "CompareFeatureMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::ChineseChessManager_eventCompareFeatureMap_Parms), Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_GameStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_GameStart_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe5\xbc\x80\xe5\xa7\x8b\xe6\xb8\xb8\xe6\x88\x8f" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_GameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "GameStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_GameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_GameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_GameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_GetFeatureMap_Statics
	{
		struct ChineseChessManager_eventGetFeatureMap_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_GetFeatureMap_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChineseChessManager_GetFeatureMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventGetFeatureMap_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_GetFeatureMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetFeatureMap_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetFeatureMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_GetFeatureMap_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xb9\xe5\xbe\x81\xe5\x9b\xbe" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_GetFeatureMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "GetFeatureMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_GetFeatureMap_Statics::ChineseChessManager_eventGetFeatureMap_Parms), Z_Construct_UFunction_AChineseChessManager_GetFeatureMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetFeatureMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_GetFeatureMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetFeatureMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_GetFeatureMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_GetFeatureMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics
	{
		struct ChineseChessManager_eventGetHistoryRecorder_Parms
		{
			UChineseChessHistoryRecorder* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventGetHistoryRecorder_Parms, ReturnValue), Z_Construct_UClass_UChineseChessHistoryRecorder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x8e\x86\xe5\x8f\xb2\xe8\xae\xb0\xe5\xbd\x95\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "GetHistoryRecorder", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::ChineseChessManager_eventGetHistoryRecorder_Parms), Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_GetIsGameing_Statics
	{
		struct ChineseChessManager_eventGetIsGameing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AChineseChessManager_GetIsGameing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChineseChessManager_eventGetIsGameing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChineseChessManager_GetIsGameing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChineseChessManager_eventGetIsGameing_Parms), &Z_Construct_UFunction_AChineseChessManager_GetIsGameing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_GetIsGameing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetIsGameing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_GetIsGameing_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_GetIsGameing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "GetIsGameing", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_GetIsGameing_Statics::ChineseChessManager_eventGetIsGameing_Parms), Z_Construct_UFunction_AChineseChessManager_GetIsGameing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetIsGameing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_GetIsGameing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetIsGameing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_GetIsGameing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_GetIsGameing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_GetPawnArray_Statics
	{
		struct ChineseChessManager_eventGetPawnArray_Parms
		{
			TArray<AChineseChessPawn*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_GetPawnArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AChineseChessPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChineseChessManager_GetPawnArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventGetPawnArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_GetPawnArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetPawnArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetPawnArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_GetPawnArray_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\xa3\x8b\xe5\xad\x90\xe5\xbc\x95\xe7\x94\xa8" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_GetPawnArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "GetPawnArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_GetPawnArray_Statics::ChineseChessManager_eventGetPawnArray_Parms), Z_Construct_UFunction_AChineseChessManager_GetPawnArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetPawnArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_GetPawnArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetPawnArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_GetPawnArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_GetPawnArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics
	{
		struct ChineseChessManager_eventGetPlayer_Parms
		{
			EChineseChessPlayer PlayerCamp;
			APlayerState* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerCamp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerCamp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::NewProp_PlayerCamp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::NewProp_PlayerCamp = { "PlayerCamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventGetPlayer_Parms, PlayerCamp), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, METADATA_PARAMS(nullptr, 0) }; // 3666507954
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventGetPlayer_Parms, ReturnValue), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::NewProp_PlayerCamp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::NewProp_PlayerCamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x85\xa5\xe5\xba\xa7\xe7\x8e\xa9\xe5\xae\xb6" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "GetPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::ChineseChessManager_eventGetPlayer_Parms), Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_GetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_GetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics
	{
		struct ChineseChessManager_eventGetPlayerCamp_Parms
		{
			APlayerState* PlayerState;
			EChineseChessPlayer PlayerCamp;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerCamp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerCamp;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventGetPlayerCamp_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::NewProp_PlayerCamp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::NewProp_PlayerCamp = { "PlayerCamp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventGetPlayerCamp_Parms, PlayerCamp), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, METADATA_PARAMS(nullptr, 0) }; // 3666507954
	void Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChineseChessManager_eventGetPlayerCamp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChineseChessManager_eventGetPlayerCamp_Parms), &Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::NewProp_PlayerCamp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::NewProp_PlayerCamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe7\x8e\xa9\xe5\xae\xb6\xe9\x98\xb5\xe8\x90\xa5" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "GetPlayerCamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::ChineseChessManager_eventGetPlayerCamp_Parms), Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_GiveUp_Statics
	{
		struct ChineseChessManager_eventGiveUp_Parms
		{
			APlayerState* Player;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_GiveUp_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventGiveUp_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_GiveUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GiveUp_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_GiveUp_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\xae\xa4\xe8\xbe\x93" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_GiveUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "GiveUp", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_GiveUp_Statics::ChineseChessManager_eventGiveUp_Parms), Z_Construct_UFunction_AChineseChessManager_GiveUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GiveUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_GiveUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GiveUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_GiveUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_GiveUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics
	{
		struct ChineseChessManager_eventIsEntered_Parms
		{
			APlayerState* PlayerState;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventIsEntered_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChineseChessManager_eventIsEntered_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChineseChessManager_eventIsEntered_Parms), &Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe8\x90\xbd\xe5\xba\xa7\xe6\x83\x85\xe5\x86\xb5" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "IsEntered", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::ChineseChessManager_eventIsEntered_Parms), Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_IsEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_IsEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotPositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotPositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotPositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::NewProp_SlotPositions_Inner = { "SlotPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::NewProp_SlotPositions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::NewProp_SlotPositions = { "SlotPositions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventNotifyMovableSlotsShow_Parms, SlotPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::NewProp_SlotPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::NewProp_SlotPositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::NewProp_SlotPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::NewProp_SlotPositions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe9\x80\x9a\xe7\x9f\xa5\xe5\x8f\xaf\xe7\xa7\xbb\xe5\x8a\xa8\xe6\xa7\xbd\xe4\xbd\x8d\xe6\x98\xbe\xe7\x8e\xb0" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "NotifyMovableSlotsShow", nullptr, nullptr, sizeof(ChineseChessManager_eventNotifyMovableSlotsShow_Parms), Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_NotifyPlayerChange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_NotifyPlayerChange_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe9\x80\x9a\xe7\x9f\xa5\xe7\x8e\xa9\xe5\xae\xb6\xe5\x8f\x98\xe6\x9b\xb4" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_NotifyPlayerChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "NotifyPlayerChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_NotifyPlayerChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_NotifyPlayerChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_NotifyPlayerChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_NotifyPlayerChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_NotifySlotsHide_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_NotifySlotsHide_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe9\x80\x9a\xe7\x9f\xa5\xe6\xa7\xbd\xe4\xbd\x8d\xe9\x9a\x90\xe8\x97\x8f" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_NotifySlotsHide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "NotifySlotsHide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_NotifySlotsHide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_NotifySlotsHide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_NotifySlotsHide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_NotifySlotsHide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics
	{
		struct ChineseChessManager_eventOnPlayerEntered_Parms
		{
			EChineseChessPlayer PlayerCamp;
			APlayerState* Player;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerCamp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerCamp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::NewProp_PlayerCamp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::NewProp_PlayerCamp = { "PlayerCamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnPlayerEntered_Parms, PlayerCamp), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, METADATA_PARAMS(nullptr, 0) }; // 3666507954
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnPlayerEntered_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::NewProp_PlayerCamp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::NewProp_PlayerCamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe7\x8e\xa9\xe5\xae\xb6\xe5\x85\xa5\xe5\xba\xa7" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "OnPlayerEntered", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::ChineseChessManager_eventOnPlayerEntered_Parms), Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_OnPlayerLeft_Statics
	{
		struct ChineseChessManager_eventOnPlayerLeft_Parms
		{
			APlayerState* Player;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_OnPlayerLeft_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnPlayerLeft_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_OnPlayerLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnPlayerLeft_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_OnPlayerLeft_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe7\x8e\xa9\xe5\xae\xb6\xe7\xa6\xbb\xe5\xb8\xad" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_OnPlayerLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "OnPlayerLeft", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_OnPlayerLeft_Statics::ChineseChessManager_eventOnPlayerLeft_Parms), Z_Construct_UFunction_AChineseChessManager_OnPlayerLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnPlayerLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_OnPlayerLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnPlayerLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_OnPlayerLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_OnPlayerLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics
	{
		struct ChineseChessManager_eventSwitchCamp_Parms
		{
			APlayerState* Player;
			EChineseChessPlayer TargetCamp;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetCamp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetCamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventSwitchCamp_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::NewProp_TargetCamp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::NewProp_TargetCamp = { "TargetCamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventSwitchCamp_Parms, TargetCamp), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, METADATA_PARAMS(nullptr, 0) }; // 3666507954
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::NewProp_TargetCamp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::NewProp_TargetCamp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe5\x88\x87\xe6\x8d\xa2\xe9\x98\xb5\xe8\x90\xa5" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "SwitchCamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::ChineseChessManager_eventSwitchCamp_Parms), Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_SwitchCamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_SwitchCamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_WaitPlayer_Statics
	{
		struct ChineseChessManager_eventWaitPlayer_Parms
		{
			EChineseChessAwaitState OutAwaitState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutAwaitState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutAwaitState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_WaitPlayer_Statics::NewProp_OutAwaitState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_WaitPlayer_Statics::NewProp_OutAwaitState = { "OutAwaitState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventWaitPlayer_Parms, OutAwaitState), Z_Construct_UEnum_BoardGameDerived_EChineseChessAwaitState, METADATA_PARAMS(nullptr, 0) }; // 2883781220
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_WaitPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_WaitPlayer_Statics::NewProp_OutAwaitState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_WaitPlayer_Statics::NewProp_OutAwaitState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_WaitPlayer_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe7\xad\x89\xe5\xbe\x85\xe7\x8e\xa9\xe5\xae\xb6" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_WaitPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "WaitPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_WaitPlayer_Statics::ChineseChessManager_eventWaitPlayer_Parms), Z_Construct_UFunction_AChineseChessManager_WaitPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_WaitPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_WaitPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_WaitPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_WaitPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_WaitPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChineseChessManager);
	UClass* Z_Construct_UClass_AChineseChessManager_NoRegister()
	{
		return AChineseChessManager::StaticClass();
	}
	struct Z_Construct_UClass_AChineseChessManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerEntered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayerEntered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLeft_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayerLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameAction_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameSetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameSetClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoundState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RoundState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGaming_MetaData[];
#endif
		static void NewProp_bIsGaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedPawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerContainer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerContainer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChineseChessManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABoardGameManager,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardGameDerived,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChineseChessManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChineseChessManager_CompareFeatureMap, "CompareFeatureMap" }, // 1644803326
		{ &Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature, "GameActionDelegate__DelegateSignature" }, // 3166934590
		{ &Z_Construct_UFunction_AChineseChessManager_GameStart, "GameStart" }, // 866741365
		{ &Z_Construct_UFunction_AChineseChessManager_GetFeatureMap, "GetFeatureMap" }, // 3059854975
		{ &Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder, "GetHistoryRecorder" }, // 2633145575
		{ &Z_Construct_UFunction_AChineseChessManager_GetIsGameing, "GetIsGameing" }, // 1143256545
		{ &Z_Construct_UFunction_AChineseChessManager_GetPawnArray, "GetPawnArray" }, // 1432658270
		{ &Z_Construct_UFunction_AChineseChessManager_GetPlayer, "GetPlayer" }, // 2487491328
		{ &Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp, "GetPlayerCamp" }, // 962229770
		{ &Z_Construct_UFunction_AChineseChessManager_GiveUp, "GiveUp" }, // 3966089781
		{ &Z_Construct_UFunction_AChineseChessManager_IsEntered, "IsEntered" }, // 1363805582
		{ &Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow, "NotifyMovableSlotsShow" }, // 1298170995
		{ &Z_Construct_UFunction_AChineseChessManager_NotifyPlayerChange, "NotifyPlayerChange" }, // 3617205920
		{ &Z_Construct_UFunction_AChineseChessManager_NotifySlotsHide, "NotifySlotsHide" }, // 3748753378
		{ &Z_Construct_UFunction_AChineseChessManager_OnPlayerEntered, "OnPlayerEntered" }, // 3497242905
		{ &Z_Construct_UFunction_AChineseChessManager_OnPlayerLeft, "OnPlayerLeft" }, // 56902708
		{ &Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature, "PlayerEnteredDelegate__DelegateSignature" }, // 311875271
		{ &Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature, "PlayerLeftDelegate__DelegateSignature" }, // 2557874673
		{ &Z_Construct_UFunction_AChineseChessManager_SwitchCamp, "SwitchCamp" }, // 2378766753
		{ &Z_Construct_UFunction_AChineseChessManager_WaitPlayer, "WaitPlayer" }, // 2328355557
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ChineseChess/Helper/ChineseChessManager.h" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerEntered_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerEntered = { "PlayerEntered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessManager, PlayerEntered), Z_Construct_UDelegateFunction_AChineseChessManager_PlayerEnteredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerEntered_MetaData)) }; // 311875271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerLeft_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerLeft = { "PlayerLeft", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessManager, PlayerLeft), Z_Construct_UDelegateFunction_AChineseChessManager_PlayerLeftDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerLeft_MetaData)) }; // 2557874673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessManager_Statics::NewProp_GameAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AChineseChessManager_Statics::NewProp_GameAction = { "GameAction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessManager, GameAction), Z_Construct_UDelegateFunction_AChineseChessManager_GameActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_GameAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_GameAction_MetaData)) }; // 3166934590
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessManager_Statics::NewProp_GameSetClass_MetaData[] = {
		{ "Category", "\xe5\xb1\x9e\xe6\x80\xa7" },
		{ "DisplayName", "\xe6\xb8\xb8\xe6\x88\x8f\xe8\xae\xbe\xe7\xbd\xae\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChineseChessManager_Statics::NewProp_GameSetClass = { "GameSetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessManager, GameSetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UChineseChessSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_GameSetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_GameSetClass_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AChineseChessManager_Statics::NewProp_RoundState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessManager_Statics::NewProp_RoundState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AChineseChessManager_Statics::NewProp_RoundState = { "RoundState", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessManager, RoundState), Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState, METADATA_PARAMS(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_RoundState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_RoundState_MetaData)) }; // 384156632
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessManager_Statics::NewProp_bIsGaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	void Z_Construct_UClass_AChineseChessManager_Statics::NewProp_bIsGaming_SetBit(void* Obj)
	{
		((AChineseChessManager*)Obj)->bIsGaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChineseChessManager_Statics::NewProp_bIsGaming = { "bIsGaming", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AChineseChessManager), &Z_Construct_UClass_AChineseChessManager_Statics::NewProp_bIsGaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_bIsGaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_bIsGaming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessManager_Statics::NewProp_SelectedPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChineseChessManager_Statics::NewProp_SelectedPawn = { "SelectedPawn", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessManager, SelectedPawn), Z_Construct_UClass_AChineseChessPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_SelectedPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_SelectedPawn_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerContainer_Inner = { "PlayerContainer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerContainer_MetaData[] = {
		{ "Comment", "/** \xe7\x8e\xa9\xe5\xae\xb6 */" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerContainer = { "PlayerContainer", "NotifyPlayerChange", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessManager, PlayerContainer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerContainer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChineseChessManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerEntered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_GameAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_GameSetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_RoundState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_RoundState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_bIsGaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_SelectedPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerContainer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_PlayerContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChineseChessManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChineseChessManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChineseChessManager_Statics::ClassParams = {
		&AChineseChessManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChineseChessManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChineseChessManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChineseChessManager()
	{
		if (!Z_Registration_Info_UClass_AChineseChessManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChineseChessManager.OuterSingleton, Z_Construct_UClass_AChineseChessManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChineseChessManager.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UClass* StaticClass<AChineseChessManager>()
	{
		return AChineseChessManager::StaticClass();
	}

	void AChineseChessManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RoundState(TEXT("RoundState"));
		static const FName Name_bIsGaming(TEXT("bIsGaming"));
		static const FName Name_SelectedPawn(TEXT("SelectedPawn"));
		static const FName Name_PlayerContainer(TEXT("PlayerContainer"));

		const bool bIsValid = true
			&& Name_RoundState == ClassReps[(int32)ENetFields_Private::RoundState].Property->GetFName()
			&& Name_bIsGaming == ClassReps[(int32)ENetFields_Private::bIsGaming].Property->GetFName()
			&& Name_SelectedPawn == ClassReps[(int32)ENetFields_Private::SelectedPawn].Property->GetFName()
			&& Name_PlayerContainer == ClassReps[(int32)ENetFields_Private::PlayerContainer].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AChineseChessManager"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChineseChessManager);
	AChineseChessManager::~AChineseChessManager() {}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_Statics::EnumInfo[] = {
		{ EChineseChessPlayer_StaticEnum, TEXT("EChineseChessPlayer"), &Z_Registration_Info_UEnum_EChineseChessPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3666507954U) },
		{ EChineseChessAwaitState_StaticEnum, TEXT("EChineseChessAwaitState"), &Z_Registration_Info_UEnum_EChineseChessAwaitState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2883781220U) },
		{ EChineseChessRoundState_StaticEnum, TEXT("EChineseChessRoundState"), &Z_Registration_Info_UEnum_EChineseChessRoundState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 384156632U) },
		{ EChineseChessGameState_StaticEnum, TEXT("EChineseChessGameState"), &Z_Registration_Info_UEnum_EChineseChessGameState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 592025775U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChineseChessManager, AChineseChessManager::StaticClass, TEXT("AChineseChessManager"), &Z_Registration_Info_UClass_AChineseChessManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChineseChessManager), 1639614291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_2104395942(TEXT("/Script/BoardGameDerived"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
