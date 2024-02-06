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
	BOARDGAMEDERIVED_API UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessCheckState();
	BOARDGAMEDERIVED_API UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer();
	BOARDGAMEDERIVED_API UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayerSeated();
	BOARDGAMEDERIVED_API UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState();
	BOARDGAMES_API UClass* Z_Construct_UClass_ABoardGameManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BoardGameDerived();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChineseChessPlayerSeated;
	static UEnum* EChineseChessPlayerSeated_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessPlayerSeated.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChineseChessPlayerSeated.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayerSeated, (UObject*)Z_Construct_UPackage__Script_BoardGameDerived(), TEXT("EChineseChessPlayerSeated"));
		}
		return Z_Registration_Info_UEnum_EChineseChessPlayerSeated.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessPlayerSeated>()
	{
		return EChineseChessPlayerSeated_StaticEnum();
	}
	struct Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayerSeated_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayerSeated_Statics::Enumerators[] = {
		{ "EChineseChessPlayerSeated::Filled", (int64)EChineseChessPlayerSeated::Filled },
		{ "EChineseChessPlayerSeated::RemainBothSide", (int64)EChineseChessPlayerSeated::RemainBothSide },
		{ "EChineseChessPlayerSeated::RemainChu", (int64)EChineseChessPlayerSeated::RemainChu },
		{ "EChineseChessPlayerSeated::RemainHan", (int64)EChineseChessPlayerSeated::RemainHan },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayerSeated_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Filled.DisplayName", "\xe5\xae\x8c\xe5\x85\xa8\xe5\x85\xa5\xe5\xba\xa7" },
		{ "Filled.Name", "EChineseChessPlayerSeated::Filled" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
		{ "RemainBothSide.DisplayName", "\xe7\xad\x89\xe5\xbe\x85\xe5\x8f\x8c\xe6\x96\xb9\xe5\x85\xa5\xe5\xba\xa7" },
		{ "RemainBothSide.Name", "EChineseChessPlayerSeated::RemainBothSide" },
		{ "RemainChu.DisplayName", "\xe7\xad\x89\xe5\xbe\x85\xe6\xa5\x9a\xe5\x85\xa5\xe5\xba\xa7" },
		{ "RemainChu.Name", "EChineseChessPlayerSeated::RemainChu" },
		{ "RemainHan.DisplayName", "\xe7\xad\x89\xe5\xbe\x85\xe6\xb1\x89\xe5\x85\xa5\xe5\xba\xa7" },
		{ "RemainHan.Name", "EChineseChessPlayerSeated::RemainHan" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayerSeated_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BoardGameDerived,
		nullptr,
		"EChineseChessPlayerSeated",
		"EChineseChessPlayerSeated",
		Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayerSeated_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayerSeated_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayerSeated_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayerSeated_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayerSeated()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessPlayerSeated.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChineseChessPlayerSeated.InnerSingleton, Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayerSeated_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChineseChessPlayerSeated.InnerSingleton;
	}
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
		{ "EChineseChessRoundState::None", (int64)EChineseChessRoundState::None },
		{ "EChineseChessRoundState::RoundChu", (int64)EChineseChessRoundState::RoundChu },
		{ "EChineseChessRoundState::RoundHan", (int64)EChineseChessRoundState::RoundHan },
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
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChineseChessCheckState;
	static UEnum* EChineseChessCheckState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessCheckState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChineseChessCheckState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BoardGameDerived_EChineseChessCheckState, (UObject*)Z_Construct_UPackage__Script_BoardGameDerived(), TEXT("EChineseChessCheckState"));
		}
		return Z_Registration_Info_UEnum_EChineseChessCheckState.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessCheckState>()
	{
		return EChineseChessCheckState_StaticEnum();
	}
	struct Z_Construct_UEnum_BoardGameDerived_EChineseChessCheckState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BoardGameDerived_EChineseChessCheckState_Statics::Enumerators[] = {
		{ "EChineseChessCheckState::None", (int64)EChineseChessCheckState::None },
		{ "EChineseChessCheckState::Check", (int64)EChineseChessCheckState::Check },
		{ "EChineseChessCheckState::CheckMate", (int64)EChineseChessCheckState::CheckMate },
		{ "EChineseChessCheckState::Illegal", (int64)EChineseChessCheckState::Illegal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BoardGameDerived_EChineseChessCheckState_Statics::Enum_MetaDataParams[] = {
		{ "Check.DisplayName", "\xe5\xb0\x86\xe5\x86\x9b" },
		{ "Check.Name", "EChineseChessCheckState::Check" },
		{ "CheckMate.DisplayName", "\xe5\xb0\x86\xe6\xad\xbb" },
		{ "CheckMate.Name", "EChineseChessCheckState::CheckMate" },
		{ "Illegal.DisplayName", "\xe9\x9d\x9e\xe6\xb3\x95\xe7\xa7\xbb\xe5\x8a\xa8" },
		{ "Illegal.Name", "EChineseChessCheckState::Illegal" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
		{ "None.DisplayName", "\xe6\x9c\xaa\xe5\xb0\x86\xe5\x86\x9b" },
		{ "None.Name", "EChineseChessCheckState::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BoardGameDerived_EChineseChessCheckState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BoardGameDerived,
		nullptr,
		"EChineseChessCheckState",
		"EChineseChessCheckState",
		Z_Construct_UEnum_BoardGameDerived_EChineseChessCheckState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessCheckState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BoardGameDerived_EChineseChessCheckState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessCheckState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessCheckState()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessCheckState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChineseChessCheckState.InnerSingleton, Z_Construct_UEnum_BoardGameDerived_EChineseChessCheckState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChineseChessCheckState.InnerSingleton;
	}
	DEFINE_FUNCTION(AChineseChessManager::execSerializeBoard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SerializeBoard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execOnPawnDead)
	{
		P_GET_OBJECT(AChineseChessPawn,Z_Param_PawnPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnDead(Z_Param_PawnPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execOnPawnMoved)
	{
		P_GET_OBJECT(AChineseChessPawn,Z_Param_PawnPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnMoved(Z_Param_PawnPtr);
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
	DEFINE_FUNCTION(AChineseChessManager::execRestart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Restart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execGameStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execIsSeating)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSeating(Z_Param_PlayerState);
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
	DEFINE_FUNCTION(AChineseChessManager::execPlayerLeave)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerLeave(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execPlayerSeated)
	{
		P_GET_ENUM(EChineseChessPlayer,Z_Param_PlayerCamp);
		P_GET_OBJECT(APlayerState,Z_Param_NewPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerSeated(EChineseChessPlayer(Z_Param_PlayerCamp),Z_Param_NewPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execGetRemainPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EChineseChessPlayerSeated*)Z_Param__Result=P_THIS->GetRemainPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execGetHistoryRecorder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UChineseChessHistoryRecorder**)Z_Param__Result=P_THIS->GetHistoryRecorder();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execMulticast_OnPlayerLeave)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Player);
		P_GET_ENUM(EChineseChessPlayer,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnPlayerLeave_Implementation(Z_Param_Player,EChineseChessPlayer(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessManager::execMulticast_OnPlayerSeated)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Player);
		P_GET_ENUM(EChineseChessPlayer,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnPlayerSeated_Implementation(Z_Param_Player,EChineseChessPlayer(Z_Param_Type));
		P_NATIVE_END;
	}
	struct ChineseChessManager_eventMulticast_OnPlayerLeave_Parms
	{
		APlayerState* Player;
		EChineseChessPlayer Type;
	};
	struct ChineseChessManager_eventMulticast_OnPlayerSeated_Parms
	{
		APlayerState* Player;
		EChineseChessPlayer Type;
	};
	struct ChineseChessManager_eventNotifyMovableSlotsShow_Parms
	{
		TArray<FVector2D> SlotPositions;
	};
	struct ChineseChessManager_eventOnCheck_Parms
	{
		EChineseChessRoundState ThisRound;
	};
	struct ChineseChessManager_eventOnCheckMate_Parms
	{
		EChineseChessRoundState ThisRound;
	};
	struct ChineseChessManager_eventOnGameStart_Parms
	{
		EChineseChessPlayerSeated SeatedState;
	};
	struct ChineseChessManager_eventOnGiveUp_Parms
	{
		EChineseChessPlayer Type;
	};
	struct ChineseChessManager_eventOnIllegal_Parms
	{
		EChineseChessRoundState ThisRound;
	};
	struct ChineseChessManager_eventOnPlayerLeave_Parms
	{
		APlayerState* Player;
		EChineseChessPlayer Type;
	};
	struct ChineseChessManager_eventOnPlayerSeated_Parms
	{
		EChineseChessPlayer Type;
	};
	struct ChineseChessManager_eventOnRoundSwitch_Parms
	{
		EChineseChessRoundState NextRound;
	};
	struct ChineseChessManager_eventOnSwitchCamp_Parms
	{
		APlayerState* Player;
	};
	static FName NAME_AChineseChessManager_Multicast_OnPlayerLeave = FName(TEXT("Multicast_OnPlayerLeave"));
	void AChineseChessManager::Multicast_OnPlayerLeave(APlayerState* Player, EChineseChessPlayer Type)
	{
		ChineseChessManager_eventMulticast_OnPlayerLeave_Parms Parms;
		Parms.Player=Player;
		Parms.Type=Type;
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_Multicast_OnPlayerLeave),&Parms);
	}
	static FName NAME_AChineseChessManager_Multicast_OnPlayerSeated = FName(TEXT("Multicast_OnPlayerSeated"));
	void AChineseChessManager::Multicast_OnPlayerSeated(APlayerState* Player, EChineseChessPlayer Type)
	{
		ChineseChessManager_eventMulticast_OnPlayerSeated_Parms Parms;
		Parms.Player=Player;
		Parms.Type=Type;
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_Multicast_OnPlayerSeated),&Parms);
	}
	static FName NAME_AChineseChessManager_NotifyMovableSlotsShow = FName(TEXT("NotifyMovableSlotsShow"));
	void AChineseChessManager::NotifyMovableSlotsShow(TArray<FVector2D> const& SlotPositions)
	{
		ChineseChessManager_eventNotifyMovableSlotsShow_Parms Parms;
		Parms.SlotPositions=SlotPositions;
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_NotifyMovableSlotsShow),&Parms);
	}
	static FName NAME_AChineseChessManager_NotifySlotsHide = FName(TEXT("NotifySlotsHide"));
	void AChineseChessManager::NotifySlotsHide()
	{
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_NotifySlotsHide),NULL);
	}
	static FName NAME_AChineseChessManager_OnCheck = FName(TEXT("OnCheck"));
	void AChineseChessManager::OnCheck(EChineseChessRoundState ThisRound)
	{
		ChineseChessManager_eventOnCheck_Parms Parms;
		Parms.ThisRound=ThisRound;
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_OnCheck),&Parms);
	}
	static FName NAME_AChineseChessManager_OnCheckMate = FName(TEXT("OnCheckMate"));
	void AChineseChessManager::OnCheckMate(EChineseChessRoundState ThisRound)
	{
		ChineseChessManager_eventOnCheckMate_Parms Parms;
		Parms.ThisRound=ThisRound;
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_OnCheckMate),&Parms);
	}
	static FName NAME_AChineseChessManager_OnGameOver = FName(TEXT("OnGameOver"));
	void AChineseChessManager::OnGameOver()
	{
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_OnGameOver),NULL);
	}
	static FName NAME_AChineseChessManager_OnGameStart = FName(TEXT("OnGameStart"));
	void AChineseChessManager::OnGameStart(EChineseChessPlayerSeated SeatedState)
	{
		ChineseChessManager_eventOnGameStart_Parms Parms;
		Parms.SeatedState=SeatedState;
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_OnGameStart),&Parms);
	}
	static FName NAME_AChineseChessManager_OnGiveUp = FName(TEXT("OnGiveUp"));
	void AChineseChessManager::OnGiveUp(EChineseChessPlayer Type)
	{
		ChineseChessManager_eventOnGiveUp_Parms Parms;
		Parms.Type=Type;
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_OnGiveUp),&Parms);
	}
	static FName NAME_AChineseChessManager_OnIllegal = FName(TEXT("OnIllegal"));
	void AChineseChessManager::OnIllegal(EChineseChessRoundState ThisRound)
	{
		ChineseChessManager_eventOnIllegal_Parms Parms;
		Parms.ThisRound=ThisRound;
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_OnIllegal),&Parms);
	}
	static FName NAME_AChineseChessManager_OnPlayerLeave = FName(TEXT("OnPlayerLeave"));
	void AChineseChessManager::OnPlayerLeave(APlayerState* Player, EChineseChessPlayer Type)
	{
		ChineseChessManager_eventOnPlayerLeave_Parms Parms;
		Parms.Player=Player;
		Parms.Type=Type;
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_OnPlayerLeave),&Parms);
	}
	static FName NAME_AChineseChessManager_OnPlayerSeated = FName(TEXT("OnPlayerSeated"));
	void AChineseChessManager::OnPlayerSeated(EChineseChessPlayer Type)
	{
		ChineseChessManager_eventOnPlayerSeated_Parms Parms;
		Parms.Type=Type;
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_OnPlayerSeated),&Parms);
	}
	static FName NAME_AChineseChessManager_OnRoundSwitch = FName(TEXT("OnRoundSwitch"));
	void AChineseChessManager::OnRoundSwitch(EChineseChessRoundState NextRound)
	{
		ChineseChessManager_eventOnRoundSwitch_Parms Parms;
		Parms.NextRound=NextRound;
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_OnRoundSwitch),&Parms);
	}
	static FName NAME_AChineseChessManager_OnSwitchCamp = FName(TEXT("OnSwitchCamp"));
	void AChineseChessManager::OnSwitchCamp(APlayerState* Player)
	{
		ChineseChessManager_eventOnSwitchCamp_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessManager_OnSwitchCamp),&Parms);
	}
	void AChineseChessManager::StaticRegisterNativesAChineseChessManager()
	{
		UClass* Class = AChineseChessManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameStart", &AChineseChessManager::execGameStart },
			{ "GetHistoryRecorder", &AChineseChessManager::execGetHistoryRecorder },
			{ "GetPlayer", &AChineseChessManager::execGetPlayer },
			{ "GetPlayerCamp", &AChineseChessManager::execGetPlayerCamp },
			{ "GetRemainPlayer", &AChineseChessManager::execGetRemainPlayer },
			{ "GiveUp", &AChineseChessManager::execGiveUp },
			{ "IsSeating", &AChineseChessManager::execIsSeating },
			{ "Multicast_OnPlayerLeave", &AChineseChessManager::execMulticast_OnPlayerLeave },
			{ "Multicast_OnPlayerSeated", &AChineseChessManager::execMulticast_OnPlayerSeated },
			{ "OnPawnDead", &AChineseChessManager::execOnPawnDead },
			{ "OnPawnMoved", &AChineseChessManager::execOnPawnMoved },
			{ "PlayerLeave", &AChineseChessManager::execPlayerLeave },
			{ "PlayerSeated", &AChineseChessManager::execPlayerSeated },
			{ "Restart", &AChineseChessManager::execRestart },
			{ "SerializeBoard", &AChineseChessManager::execSerializeBoard },
			{ "SwitchCamp", &AChineseChessManager::execSwitchCamp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "GetHistoryRecorder", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::ChineseChessManager_eventGetHistoryRecorder_Parms), Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer_Statics
	{
		struct ChineseChessManager_eventGetRemainPlayer_Parms
		{
			EChineseChessPlayerSeated ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventGetRemainPlayer_Parms, ReturnValue), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayerSeated, METADATA_PARAMS(nullptr, 0) }; // 2935201339
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x9c\xaa\xe5\x85\xa5\xe5\xba\xa7\xe7\x9a\x84\xe7\x8e\xa9\xe5\xae\xb6" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "GetRemainPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer_Statics::ChineseChessManager_eventGetRemainPlayer_Parms), Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics
	{
		struct ChineseChessManager_eventIsSeating_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventIsSeating_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChineseChessManager_eventIsSeating_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChineseChessManager_eventIsSeating_Parms), &Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe8\x90\xbd\xe5\xba\xa7\xe6\x83\x85\xe5\x86\xb5" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "IsSeating", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::ChineseChessManager_eventIsSeating_Parms), Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_IsSeating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_IsSeating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventMulticast_OnPlayerLeave_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventMulticast_OnPlayerLeave_Parms, Type), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, METADATA_PARAMS(nullptr, 0) }; // 3666507954
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "Multicast_OnPlayerLeave", nullptr, nullptr, sizeof(ChineseChessManager_eventMulticast_OnPlayerLeave_Parms), Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventMulticast_OnPlayerSeated_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventMulticast_OnPlayerSeated_Parms, Type), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, METADATA_PARAMS(nullptr, 0) }; // 3666507954
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//AChineseChessPawn* SelectedPawn_Han;\n" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
		{ "ToolTip", "AChineseChessPawn* SelectedPawn_Han;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "Multicast_OnPlayerSeated", nullptr, nullptr, sizeof(ChineseChessManager_eventMulticast_OnPlayerSeated_Parms), Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AChineseChessManager_OnCheck_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThisRound_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThisRound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_OnCheck_Statics::NewProp_ThisRound_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_OnCheck_Statics::NewProp_ThisRound = { "ThisRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnCheck_Parms, ThisRound), Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState, METADATA_PARAMS(nullptr, 0) }; // 840314179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_OnCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnCheck_Statics::NewProp_ThisRound_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnCheck_Statics::NewProp_ThisRound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_OnCheck_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe5\xb0\x86\xe5\x86\x9b\xef\xbc\x81" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_OnCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "OnCheck", nullptr, nullptr, sizeof(ChineseChessManager_eventOnCheck_Parms), Z_Construct_UFunction_AChineseChessManager_OnCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_OnCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_OnCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_OnCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_OnCheckMate_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThisRound_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThisRound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_OnCheckMate_Statics::NewProp_ThisRound_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_OnCheckMate_Statics::NewProp_ThisRound = { "ThisRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnCheckMate_Parms, ThisRound), Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState, METADATA_PARAMS(nullptr, 0) }; // 840314179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_OnCheckMate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnCheckMate_Statics::NewProp_ThisRound_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnCheckMate_Statics::NewProp_ThisRound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_OnCheckMate_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe5\xb0\x86\xe6\xad\xbb\xef\xbc\x81" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_OnCheckMate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "OnCheckMate", nullptr, nullptr, sizeof(ChineseChessManager_eventOnCheckMate_Parms), Z_Construct_UFunction_AChineseChessManager_OnCheckMate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnCheckMate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_OnCheckMate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnCheckMate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_OnCheckMate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_OnCheckMate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_OnGameOver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_OnGameOver_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe6\xb8\xb8\xe6\x88\x8f\xe7\xbb\x93\xe6\x9d\x9f" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_OnGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "OnGameOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_OnGameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnGameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_OnGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_OnGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_OnGameStart_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_SeatedState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SeatedState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_OnGameStart_Statics::NewProp_SeatedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_OnGameStart_Statics::NewProp_SeatedState = { "SeatedState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnGameStart_Parms, SeatedState), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayerSeated, METADATA_PARAMS(nullptr, 0) }; // 2935201339
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_OnGameStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnGameStart_Statics::NewProp_SeatedState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnGameStart_Statics::NewProp_SeatedState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_OnGameStart_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe5\xbc\x80\xe5\xa7\x8b\xe6\xb8\xb8\xe6\x88\x8f" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_OnGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "OnGameStart", nullptr, nullptr, sizeof(ChineseChessManager_eventOnGameStart_Parms), Z_Construct_UFunction_AChineseChessManager_OnGameStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnGameStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_OnGameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnGameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_OnGameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_OnGameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_OnGiveUp_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_OnGiveUp_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_OnGiveUp_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnGiveUp_Parms, Type), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, METADATA_PARAMS(nullptr, 0) }; // 3666507954
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_OnGiveUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnGiveUp_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnGiveUp_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_OnGiveUp_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\xae\xa4\xe8\xbe\x93" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_OnGiveUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "OnGiveUp", nullptr, nullptr, sizeof(ChineseChessManager_eventOnGiveUp_Parms), Z_Construct_UFunction_AChineseChessManager_OnGiveUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnGiveUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_OnGiveUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnGiveUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_OnGiveUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_OnGiveUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_OnIllegal_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThisRound_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThisRound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_OnIllegal_Statics::NewProp_ThisRound_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_OnIllegal_Statics::NewProp_ThisRound = { "ThisRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnIllegal_Parms, ThisRound), Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState, METADATA_PARAMS(nullptr, 0) }; // 840314179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_OnIllegal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnIllegal_Statics::NewProp_ThisRound_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnIllegal_Statics::NewProp_ThisRound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_OnIllegal_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe9\x9d\x9e\xe6\xb3\x95\xe7\xa7\xbb\xe5\x8a\xa8\xef\xbc\x81" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_OnIllegal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "OnIllegal", nullptr, nullptr, sizeof(ChineseChessManager_eventOnIllegal_Parms), Z_Construct_UFunction_AChineseChessManager_OnIllegal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnIllegal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_OnIllegal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnIllegal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_OnIllegal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_OnIllegal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_OnPawnDead_Statics
	{
		struct ChineseChessManager_eventOnPawnDead_Parms
		{
			AChineseChessPawn* PawnPtr;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_OnPawnDead_Statics::NewProp_PawnPtr = { "PawnPtr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnPawnDead_Parms, PawnPtr), Z_Construct_UClass_AChineseChessPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_OnPawnDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnPawnDead_Statics::NewProp_PawnPtr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_OnPawnDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_OnPawnDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "OnPawnDead", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_OnPawnDead_Statics::ChineseChessManager_eventOnPawnDead_Parms), Z_Construct_UFunction_AChineseChessManager_OnPawnDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnPawnDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_OnPawnDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnPawnDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_OnPawnDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_OnPawnDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_OnPawnMoved_Statics
	{
		struct ChineseChessManager_eventOnPawnMoved_Parms
		{
			AChineseChessPawn* PawnPtr;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_OnPawnMoved_Statics::NewProp_PawnPtr = { "PawnPtr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnPawnMoved_Parms, PawnPtr), Z_Construct_UClass_AChineseChessPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_OnPawnMoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnPawnMoved_Statics::NewProp_PawnPtr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_OnPawnMoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_OnPawnMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "OnPawnMoved", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_OnPawnMoved_Statics::ChineseChessManager_eventOnPawnMoved_Parms), Z_Construct_UFunction_AChineseChessManager_OnPawnMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnPawnMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_OnPawnMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnPawnMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_OnPawnMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_OnPawnMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnPlayerLeave_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnPlayerLeave_Parms, Type), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, METADATA_PARAMS(nullptr, 0) }; // 3666507954
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe7\x8e\xa9\xe5\xae\xb6\xe7\xa6\xbb\xe5\xbc\x80" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "OnPlayerLeave", nullptr, nullptr, sizeof(ChineseChessManager_eventOnPlayerLeave_Parms), Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnPlayerSeated_Parms, Type), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, METADATA_PARAMS(nullptr, 0) }; // 3666507954
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe7\x8e\xa9\xe5\xae\xb6\xe5\x85\xa5\xe5\xba\xa7" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "OnPlayerSeated", nullptr, nullptr, sizeof(ChineseChessManager_eventOnPlayerSeated_Parms), Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NextRound_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NextRound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch_Statics::NewProp_NextRound_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch_Statics::NewProp_NextRound = { "NextRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnRoundSwitch_Parms, NextRound), Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState, METADATA_PARAMS(nullptr, 0) }; // 840314179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch_Statics::NewProp_NextRound_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch_Statics::NewProp_NextRound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe5\x9b\x9e\xe5\x90\x88\xe5\x88\x87\xe6\x8d\xa2" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "OnRoundSwitch", nullptr, nullptr, sizeof(ChineseChessManager_eventOnRoundSwitch_Parms), Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_OnSwitchCamp_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_OnSwitchCamp_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventOnSwitchCamp_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_OnSwitchCamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_OnSwitchCamp_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_OnSwitchCamp_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe5\x88\x87\xe6\x8d\xa2\xe9\x98\xb5\xe8\x90\xa5" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_OnSwitchCamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "OnSwitchCamp", nullptr, nullptr, sizeof(ChineseChessManager_eventOnSwitchCamp_Parms), Z_Construct_UFunction_AChineseChessManager_OnSwitchCamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnSwitchCamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_OnSwitchCamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_OnSwitchCamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_OnSwitchCamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_OnSwitchCamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_PlayerLeave_Statics
	{
		struct ChineseChessManager_eventPlayerLeave_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_PlayerLeave_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventPlayerLeave_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_PlayerLeave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_PlayerLeave_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_PlayerLeave_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe7\x8e\xa9\xe5\xae\xb6\xe7\xa6\xbb\xe5\xbc\x80" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_PlayerLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "PlayerLeave", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_PlayerLeave_Statics::ChineseChessManager_eventPlayerLeave_Parms), Z_Construct_UFunction_AChineseChessManager_PlayerLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_PlayerLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_PlayerLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_PlayerLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_PlayerLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_PlayerLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics
	{
		struct ChineseChessManager_eventPlayerSeated_Parms
		{
			EChineseChessPlayer PlayerCamp;
			APlayerState* NewPlayer;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerCamp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerCamp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::NewProp_PlayerCamp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::NewProp_PlayerCamp = { "PlayerCamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventPlayerSeated_Parms, PlayerCamp), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, METADATA_PARAMS(nullptr, 0) }; // 3666507954
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventPlayerSeated_Parms, NewPlayer), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::NewProp_PlayerCamp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::NewProp_PlayerCamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe7\x8e\xa9\xe5\xae\xb6\xe5\x85\xa5\xe5\xba\xa7" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "PlayerSeated", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::ChineseChessManager_eventPlayerSeated_Parms), Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_PlayerSeated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_PlayerSeated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_Restart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_Restart_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe9\x87\x8d\xe7\xbd\xae\xe6\xb8\xb8\xe6\x88\x8f" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_Restart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "Restart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_Restart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_Restart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_Restart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_Restart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessManager_SerializeBoard_Statics
	{
		struct ChineseChessManager_eventSerializeBoard_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AChineseChessManager_SerializeBoard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessManager_eventSerializeBoard_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessManager_SerializeBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessManager_SerializeBoard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessManager_SerializeBoard_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe5\xba\x8f\xe5\x88\x97\xe5\x8c\x96\xe6\xa3\x8b\xe7\x9b\x98" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessManager_SerializeBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessManager, nullptr, "SerializeBoard", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessManager_SerializeBoard_Statics::ChineseChessManager_eventSerializeBoard_Parms), Z_Construct_UFunction_AChineseChessManager_SerializeBoard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_SerializeBoard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessManager_SerializeBoard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessManager_SerializeBoard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessManager_SerializeBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessManager_SerializeBoard_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameSetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameSetClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoundState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RoundState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Chu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Han_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Han;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChineseChessManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABoardGameManager,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardGameDerived,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChineseChessManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChineseChessManager_GameStart, "GameStart" }, // 866741365
		{ &Z_Construct_UFunction_AChineseChessManager_GetHistoryRecorder, "GetHistoryRecorder" }, // 1963567579
		{ &Z_Construct_UFunction_AChineseChessManager_GetPlayer, "GetPlayer" }, // 2487491328
		{ &Z_Construct_UFunction_AChineseChessManager_GetPlayerCamp, "GetPlayerCamp" }, // 962229770
		{ &Z_Construct_UFunction_AChineseChessManager_GetRemainPlayer, "GetRemainPlayer" }, // 2487559069
		{ &Z_Construct_UFunction_AChineseChessManager_GiveUp, "GiveUp" }, // 3966089781
		{ &Z_Construct_UFunction_AChineseChessManager_IsSeating, "IsSeating" }, // 180425791
		{ &Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerLeave, "Multicast_OnPlayerLeave" }, // 954496449
		{ &Z_Construct_UFunction_AChineseChessManager_Multicast_OnPlayerSeated, "Multicast_OnPlayerSeated" }, // 2799651992
		{ &Z_Construct_UFunction_AChineseChessManager_NotifyMovableSlotsShow, "NotifyMovableSlotsShow" }, // 1298170995
		{ &Z_Construct_UFunction_AChineseChessManager_NotifySlotsHide, "NotifySlotsHide" }, // 3748753378
		{ &Z_Construct_UFunction_AChineseChessManager_OnCheck, "OnCheck" }, // 3024268912
		{ &Z_Construct_UFunction_AChineseChessManager_OnCheckMate, "OnCheckMate" }, // 861983837
		{ &Z_Construct_UFunction_AChineseChessManager_OnGameOver, "OnGameOver" }, // 442080415
		{ &Z_Construct_UFunction_AChineseChessManager_OnGameStart, "OnGameStart" }, // 678820117
		{ &Z_Construct_UFunction_AChineseChessManager_OnGiveUp, "OnGiveUp" }, // 3882720939
		{ &Z_Construct_UFunction_AChineseChessManager_OnIllegal, "OnIllegal" }, // 3843044228
		{ &Z_Construct_UFunction_AChineseChessManager_OnPawnDead, "OnPawnDead" }, // 707194772
		{ &Z_Construct_UFunction_AChineseChessManager_OnPawnMoved, "OnPawnMoved" }, // 2118574905
		{ &Z_Construct_UFunction_AChineseChessManager_OnPlayerLeave, "OnPlayerLeave" }, // 3418754344
		{ &Z_Construct_UFunction_AChineseChessManager_OnPlayerSeated, "OnPlayerSeated" }, // 22509508
		{ &Z_Construct_UFunction_AChineseChessManager_OnRoundSwitch, "OnRoundSwitch" }, // 627763513
		{ &Z_Construct_UFunction_AChineseChessManager_OnSwitchCamp, "OnSwitchCamp" }, // 81633775
		{ &Z_Construct_UFunction_AChineseChessManager_PlayerLeave, "PlayerLeave" }, // 396404127
		{ &Z_Construct_UFunction_AChineseChessManager_PlayerSeated, "PlayerSeated" }, // 2746117134
		{ &Z_Construct_UFunction_AChineseChessManager_Restart, "Restart" }, // 3288737726
		{ &Z_Construct_UFunction_AChineseChessManager_SerializeBoard, "SerializeBoard" }, // 712732355
		{ &Z_Construct_UFunction_AChineseChessManager_SwitchCamp, "SwitchCamp" }, // 2378766753
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ChineseChess/Helper/ChineseChessManager.h" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
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
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AChineseChessManager_Statics::NewProp_RoundState = { "RoundState", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessManager, RoundState), Z_Construct_UEnum_BoardGameDerived_EChineseChessRoundState, METADATA_PARAMS(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_RoundState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_RoundState_MetaData)) }; // 840314179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessManager_Statics::NewProp_SelectedPawn_MetaData[] = {
		{ "Comment", "/**\n\x09 * \xe7\x94\xa8\xe4\xba\x8e\xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\xef\xbc\x8c\xe5\xae\x83\xe6\xb0\xb8\xe8\xbf\x9c\xe9\x83\xbd\xe4\xbc\x9a\xe5\x9c\xa8\xe5\xb7\xb1\xe6\x96\xb9\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe4\xb8\x8a\xe6\x98\xbe\xe7\xa4\xba\xe5\xaf\xb9\xe6\x96\xb9\xe7\x9a\x84\xe6\x93\x8d\xe4\xbd\x9c\n\x09 * \xe6\xaf\x94\xe5\xa6\x82\xe8\xaf\xb4\xe4\xb8\xbe\xe6\xa3\x8b\xe4\xb8\x8d\xe5\xae\x9a\xe3\x80\x81\xe8\x90\xbd\xe5\xad\x90\xe7\xad\x89\n\x09 * \xe5\xbd\x93\xe7\x84\xb6\xe8\x87\xaa\xe5\xb7\xb1\xe4\xb9\x9f\xe8\x83\xbd\xe5\xaf\xb9\xe6\xa3\x8b\xe5\xad\x90\xe8\xbf\x9b\xe8\xa1\x8c\xe7\x82\xb9\xe5\x87\xbb\xef\xbc\x8c\xe5\x8f\xaa\xe4\xb8\x8d\xe8\xbf\x87\xe4\xb8\x8d\xe6\x98\xaf\xe8\x87\xaa\xe5\xb7\xb1\xe7\x9a\x84\xe5\x9b\x9e\xe5\x90\x88\xe4\xb8\x8d\xe8\x83\xbd\xe7\xa7\xbb\xe5\x8a\xa8\xe7\xbd\xa2\xe4\xba\x86\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\xef\xbc\x8c\xe5\xae\x83\xe6\xb0\xb8\xe8\xbf\x9c\xe9\x83\xbd\xe4\xbc\x9a\xe5\x9c\xa8\xe5\xb7\xb1\xe6\x96\xb9\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe4\xb8\x8a\xe6\x98\xbe\xe7\xa4\xba\xe5\xaf\xb9\xe6\x96\xb9\xe7\x9a\x84\xe6\x93\x8d\xe4\xbd\x9c\n\xe6\xaf\x94\xe5\xa6\x82\xe8\xaf\xb4\xe4\xb8\xbe\xe6\xa3\x8b\xe4\xb8\x8d\xe5\xae\x9a\xe3\x80\x81\xe8\x90\xbd\xe5\xad\x90\xe7\xad\x89\n\xe5\xbd\x93\xe7\x84\xb6\xe8\x87\xaa\xe5\xb7\xb1\xe4\xb9\x9f\xe8\x83\xbd\xe5\xaf\xb9\xe6\xa3\x8b\xe5\xad\x90\xe8\xbf\x9b\xe8\xa1\x8c\xe7\x82\xb9\xe5\x87\xbb\xef\xbc\x8c\xe5\x8f\xaa\xe4\xb8\x8d\xe8\xbf\x87\xe4\xb8\x8d\xe6\x98\xaf\xe8\x87\xaa\xe5\xb7\xb1\xe7\x9a\x84\xe5\x9b\x9e\xe5\x90\x88\xe4\xb8\x8d\xe8\x83\xbd\xe7\xa7\xbb\xe5\x8a\xa8\xe7\xbd\xa2\xe4\xba\x86" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChineseChessManager_Statics::NewProp_SelectedPawn = { "SelectedPawn", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessManager, SelectedPawn), Z_Construct_UClass_AChineseChessPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_SelectedPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_SelectedPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessManager_Statics::NewProp_Chu_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChineseChessManager_Statics::NewProp_Chu = { "Chu", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessManager, Chu), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_Chu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_Chu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessManager_Statics::NewProp_Han_MetaData[] = {
		{ "Comment", "//AChineseChessPawn* SelectedPawn_Chu;\n" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessManager.h" },
		{ "ToolTip", "AChineseChessPawn* SelectedPawn_Chu;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChineseChessManager_Statics::NewProp_Han = { "Han", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessManager, Han), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_Han_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessManager_Statics::NewProp_Han_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChineseChessManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_GameSetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_RoundState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_RoundState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_SelectedPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_Chu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessManager_Statics::NewProp_Han,
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
		static const FName Name_SelectedPawn(TEXT("SelectedPawn"));
		static const FName Name_Chu(TEXT("Chu"));
		static const FName Name_Han(TEXT("Han"));

		const bool bIsValid = true
			&& Name_RoundState == ClassReps[(int32)ENetFields_Private::RoundState].Property->GetFName()
			&& Name_SelectedPawn == ClassReps[(int32)ENetFields_Private::SelectedPawn].Property->GetFName()
			&& Name_Chu == ClassReps[(int32)ENetFields_Private::Chu].Property->GetFName()
			&& Name_Han == ClassReps[(int32)ENetFields_Private::Han].Property->GetFName();

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
		{ EChineseChessPlayerSeated_StaticEnum, TEXT("EChineseChessPlayerSeated"), &Z_Registration_Info_UEnum_EChineseChessPlayerSeated, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2935201339U) },
		{ EChineseChessPlayer_StaticEnum, TEXT("EChineseChessPlayer"), &Z_Registration_Info_UEnum_EChineseChessPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3666507954U) },
		{ EChineseChessRoundState_StaticEnum, TEXT("EChineseChessRoundState"), &Z_Registration_Info_UEnum_EChineseChessRoundState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 840314179U) },
		{ EChineseChessCheckState_StaticEnum, TEXT("EChineseChessCheckState"), &Z_Registration_Info_UEnum_EChineseChessCheckState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 475053136U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChineseChessManager, AChineseChessManager::StaticClass, TEXT("AChineseChessManager"), &Z_Registration_Info_UClass_AChineseChessManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChineseChessManager), 4191911225U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_193278005(TEXT("/Script/BoardGameDerived"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
