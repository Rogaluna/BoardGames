// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardGameDerived/Public/ChineseChess/ChineseChessPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChineseChessPawn() {}
// Cross Module References
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_AChineseChessManager_NoRegister();
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_AChineseChessPawn();
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_AChineseChessPawn_NoRegister();
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_UChineseChessBoardSlot_NoRegister();
	BOARDGAMEDERIVED_API UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessControlPower();
	BOARDGAMEDERIVED_API UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState();
	BOARDGAMEDERIVED_API UFunction* Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature();
	BOARDGAMES_API UClass* Z_Construct_UClass_AGameBasePawn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_BoardGameDerived();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChineseChessPawnState;
	static UEnum* EChineseChessPawnState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessPawnState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChineseChessPawnState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState, (UObject*)Z_Construct_UPackage__Script_BoardGameDerived(), TEXT("EChineseChessPawnState"));
		}
		return Z_Registration_Info_UEnum_EChineseChessPawnState.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessPawnState>()
	{
		return EChineseChessPawnState_StaticEnum();
	}
	struct Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState_Statics::Enumerators[] = {
		{ "EChineseChessPawnState::None", (int64)EChineseChessPawnState::None },
		{ "EChineseChessPawnState::Absence", (int64)EChineseChessPawnState::Absence },
		{ "EChineseChessPawnState::Idle", (int64)EChineseChessPawnState::Idle },
		{ "EChineseChessPawnState::Selected", (int64)EChineseChessPawnState::Selected },
		{ "EChineseChessPawnState::Dead", (int64)EChineseChessPawnState::Dead },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState_Statics::Enum_MetaDataParams[] = {
		{ "Absence.DisplayName", "\xe4\xb8\x8d\xe5\x9c\xa8\xe5\x9c\xba" },
		{ "Absence.Name", "EChineseChessPawnState::Absence" },
		{ "BlueprintType", "true" },
		{ "Dead.DisplayName", "\xe6\xad\xbb\xe4\xba\xa1" },
		{ "Dead.Name", "EChineseChessPawnState::Dead" },
		{ "Idle.DisplayName", "\xe9\x9d\x99\xe6\xad\xa2" },
		{ "Idle.Name", "EChineseChessPawnState::Idle" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessPawn.h" },
		{ "None.DisplayName", "\xe5\x8d\xa0\xe4\xbd\x8d\xe7\xac\xa6(\xe7\xa9\xba)" },
		{ "None.Name", "EChineseChessPawnState::None" },
		{ "Selected.DisplayName", "\xe8\xa2\xab\xe9\x80\x89\xe4\xb8\xad" },
		{ "Selected.Name", "EChineseChessPawnState::Selected" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BoardGameDerived,
		nullptr,
		"EChineseChessPawnState",
		"EChineseChessPawnState",
		Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessPawnState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChineseChessPawnState.InnerSingleton, Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChineseChessPawnState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChineseChessControlPower;
	static UEnum* EChineseChessControlPower_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessControlPower.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChineseChessControlPower.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BoardGameDerived_EChineseChessControlPower, (UObject*)Z_Construct_UPackage__Script_BoardGameDerived(), TEXT("EChineseChessControlPower"));
		}
		return Z_Registration_Info_UEnum_EChineseChessControlPower.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessControlPower>()
	{
		return EChineseChessControlPower_StaticEnum();
	}
	struct Z_Construct_UEnum_BoardGameDerived_EChineseChessControlPower_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BoardGameDerived_EChineseChessControlPower_Statics::Enumerators[] = {
		{ "EChineseChessControlPower::None", (int64)EChineseChessControlPower::None },
		{ "EChineseChessControlPower::Team", (int64)EChineseChessControlPower::Team },
		{ "EChineseChessControlPower::Enemy", (int64)EChineseChessControlPower::Enemy },
		{ "EChineseChessControlPower::All", (int64)EChineseChessControlPower::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BoardGameDerived_EChineseChessControlPower_Statics::Enum_MetaDataParams[] = {
		{ "All.DisplayName", "\xe5\x85\xa8\xe5\xb1\x80\xe6\x8e\xa7\xe5\x88\xb6\xe6\x9d\x83" },
		{ "All.Name", "EChineseChessControlPower::All" },
		{ "BlueprintType", "true" },
		{ "Enemy.DisplayName", "\xe6\x95\x8c\xe5\x86\x9b\xe6\x8e\xa7\xe5\x88\xb6\xe6\x9d\x83" },
		{ "Enemy.Name", "EChineseChessControlPower::Enemy" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessPawn.h" },
		{ "None.DisplayName", "\xe6\x97\xa0\xe6\x8e\xa7\xe5\x88\xb6\xe6\x9d\x83" },
		{ "None.Name", "EChineseChessControlPower::None" },
		{ "Team.DisplayName", "\xe5\x8f\x8b\xe5\x86\x9b\xe6\x8e\xa7\xe5\x88\xb6\xe6\x9d\x83" },
		{ "Team.Name", "EChineseChessControlPower::Team" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BoardGameDerived_EChineseChessControlPower_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BoardGameDerived,
		nullptr,
		"EChineseChessControlPower",
		"EChineseChessControlPower",
		Z_Construct_UEnum_BoardGameDerived_EChineseChessControlPower_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessControlPower_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BoardGameDerived_EChineseChessControlPower_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EChineseChessControlPower_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessControlPower()
	{
		if (!Z_Registration_Info_UEnum_EChineseChessControlPower.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChineseChessControlPower.InnerSingleton, Z_Construct_UEnum_BoardGameDerived_EChineseChessControlPower_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChineseChessControlPower.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature_Statics
	{
		struct ChineseChessPawn_eventPerformDelegate_Parms
		{
			EChineseChessPawnState PawnState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PawnState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PawnState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature_Statics::NewProp_PawnState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature_Statics::NewProp_PawnState = { "PawnState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessPawn_eventPerformDelegate_Parms, PawnState), Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState, METADATA_PARAMS(nullptr, 0) }; // 1557472555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature_Statics::NewProp_PawnState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature_Statics::NewProp_PawnState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessPawn, nullptr, "PerformDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature_Statics::ChineseChessPawn_eventPerformDelegate_Parms), Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void AChineseChessPawn::FPerformDelegate_DelegateWrapper(const FMulticastScriptDelegate& PerformDelegate, EChineseChessPawnState PawnState)
{
	struct ChineseChessPawn_eventPerformDelegate_Parms
	{
		EChineseChessPawnState PawnState;
	};
	ChineseChessPawn_eventPerformDelegate_Parms Parms;
	Parms.PawnState=PawnState;
	PerformDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AChineseChessPawn::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessPawn::execGetSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UChineseChessBoardSlot**)Z_Param__Result=P_THIS->GetSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessPawn::execGetGameManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AChineseChessManager**)Z_Param__Result=P_THIS->GetGameManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessPawn::execGetPawnType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPawnType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessPawn::execSetupSlot)
	{
		P_GET_OBJECT(UChineseChessBoardSlot,Z_Param_NewSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupSlot(Z_Param_NewSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessPawn::execSetState)
	{
		P_GET_ENUM(EChineseChessPawnState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(EChineseChessPawnState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessPawn::execOnRep_ChangeState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ChangeState();
		P_NATIVE_END;
	}
	struct ChineseChessPawn_eventMoveRule_Parms
	{
		TArray<uint8> InBoardStatus;
		FVector2D PawnPos;
		TArray<FVector2D> OutPositions;
	};
	static FName NAME_AChineseChessPawn_MoveRule = FName(TEXT("MoveRule"));
	void AChineseChessPawn::MoveRule(TArray<uint8> const& InBoardStatus, FVector2D const& PawnPos, TArray<FVector2D>& OutPositions)
	{
		ChineseChessPawn_eventMoveRule_Parms Parms;
		Parms.InBoardStatus=InBoardStatus;
		Parms.PawnPos=PawnPos;
		Parms.OutPositions=OutPositions;
		ProcessEvent(FindFunctionChecked(NAME_AChineseChessPawn_MoveRule),&Parms);
		OutPositions=Parms.OutPositions;
	}
	void AChineseChessPawn::StaticRegisterNativesAChineseChessPawn()
	{
		UClass* Class = AChineseChessPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameManager", &AChineseChessPawn::execGetGameManager },
			{ "GetPawnType", &AChineseChessPawn::execGetPawnType },
			{ "GetSlot", &AChineseChessPawn::execGetSlot },
			{ "IsAlive", &AChineseChessPawn::execIsAlive },
			{ "OnRep_ChangeState", &AChineseChessPawn::execOnRep_ChangeState },
			{ "SetState", &AChineseChessPawn::execSetState },
			{ "SetupSlot", &AChineseChessPawn::execSetupSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChineseChessPawn_GetGameManager_Statics
	{
		struct ChineseChessPawn_eventGetGameManager_Parms
		{
			AChineseChessManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessPawn_GetGameManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessPawn_eventGetGameManager_Parms, ReturnValue), Z_Construct_UClass_AChineseChessManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessPawn_GetGameManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessPawn_GetGameManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessPawn_GetGameManager_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessPawn_GetGameManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessPawn, nullptr, "GetGameManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessPawn_GetGameManager_Statics::ChineseChessPawn_eventGetGameManager_Parms), Z_Construct_UFunction_AChineseChessPawn_GetGameManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_GetGameManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessPawn_GetGameManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_GetGameManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessPawn_GetGameManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessPawn_GetGameManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics
	{
		struct ChineseChessPawn_eventGetPawnType_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessPawn_eventGetPawnType_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\xa3\x8b\xe5\xad\x90\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessPawn, nullptr, "GetPawnType", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics::ChineseChessPawn_eventGetPawnType_Parms), Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessPawn_GetPawnType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessPawn_GetPawnType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics
	{
		struct ChineseChessPawn_eventGetSlot_Parms
		{
			UChineseChessBoardSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessPawn_eventGetSlot_Parms, ReturnValue), Z_Construct_UClass_UChineseChessBoardSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe6\xa3\x8b\xe5\xad\x90\xe6\xa7\xbd\xe5\xbc\x95\xe7\x94\xa8" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessPawn, nullptr, "GetSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics::ChineseChessPawn_eventGetSlot_Parms), Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessPawn_GetSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessPawn_GetSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessPawn_IsAlive_Statics
	{
		struct ChineseChessPawn_eventIsAlive_Parms
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
	void Z_Construct_UFunction_AChineseChessPawn_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChineseChessPawn_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChineseChessPawn_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChineseChessPawn_eventIsAlive_Parms), &Z_Construct_UFunction_AChineseChessPawn_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessPawn_IsAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessPawn_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessPawn_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xad\x98\xe6\xb4\xbb" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessPawn_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessPawn, nullptr, "IsAlive", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessPawn_IsAlive_Statics::ChineseChessPawn_eventIsAlive_Parms), Z_Construct_UFunction_AChineseChessPawn_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessPawn_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessPawn_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessPawn_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBoardStatus_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBoardStatus_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBoardStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PawnPos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPositions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_InBoardStatus_Inner = { "InBoardStatus", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_InBoardStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_InBoardStatus = { "InBoardStatus", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessPawn_eventMoveRule_Parms, InBoardStatus), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_InBoardStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_InBoardStatus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_PawnPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_PawnPos = { "PawnPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessPawn_eventMoveRule_Parms, PawnPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_PawnPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_PawnPos_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_OutPositions_Inner = { "OutPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_OutPositions = { "OutPositions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessPawn_eventMoveRule_Parms, OutPositions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_InBoardStatus_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_InBoardStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_PawnPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_OutPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::NewProp_OutPositions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * \xe8\xbf\x99\xe4\xb8\xaa\xe5\x87\xbd\xe6\x95\xb0\xe5\xae\x9a\xe4\xb9\x89\xe4\xba\x86\xe6\xa3\x8b\xe5\xad\x90\xe7\x9a\x84\xe7\xa7\xbb\xe5\x8a\xa8\xe8\xa7\x84\xe5\x88\x99\xef\xbc\x8c\n\x09 * InStatus \xe6\xa3\x8b\xe7\x9b\x98\xe7\x8a\xb6\xe6\x80\x81\n\x09 * PawnPos \xe5\xbd\x93\xe5\x89\x8d\xe6\xa3\x8b\xe7\x9b\x98\xe7\x8a\xb6\xe6\x80\x81\xe4\xb8\x8b\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xe4\xbd\x8d\xe7\xbd\xae\n\x09 * OutPositions \xe8\xbf\x94\xe5\x9b\x9e\xe6\xa3\x8b\xe5\xad\x90\xe5\x8f\xaf\xe8\x83\xbd\xe5\x88\xb0\xe8\xbe\xbe\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\n\x09 */" },
		{ "DisplayName", "\xe7\xa7\xbb\xe5\x8a\xa8\xe8\xa7\x84\xe5\x88\x99" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessPawn.h" },
		{ "ToolTip", "\xe8\xbf\x99\xe4\xb8\xaa\xe5\x87\xbd\xe6\x95\xb0\xe5\xae\x9a\xe4\xb9\x89\xe4\xba\x86\xe6\xa3\x8b\xe5\xad\x90\xe7\x9a\x84\xe7\xa7\xbb\xe5\x8a\xa8\xe8\xa7\x84\xe5\x88\x99\xef\xbc\x8c\nInStatus \xe6\xa3\x8b\xe7\x9b\x98\xe7\x8a\xb6\xe6\x80\x81\nPawnPos \xe5\xbd\x93\xe5\x89\x8d\xe6\xa3\x8b\xe7\x9b\x98\xe7\x8a\xb6\xe6\x80\x81\xe4\xb8\x8b\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xe4\xbd\x8d\xe7\xbd\xae\nOutPositions \xe8\xbf\x94\xe5\x9b\x9e\xe6\xa3\x8b\xe5\xad\x90\xe5\x8f\xaf\xe8\x83\xbd\xe5\x88\xb0\xe8\xbe\xbe\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessPawn, nullptr, "MoveRule", nullptr, nullptr, sizeof(ChineseChessPawn_eventMoveRule_Parms), Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessPawn_MoveRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessPawn_MoveRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessPawn_OnRep_ChangeState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessPawn_OnRep_ChangeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessPawn_OnRep_ChangeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessPawn, nullptr, "OnRep_ChangeState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessPawn_OnRep_ChangeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_OnRep_ChangeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessPawn_OnRep_ChangeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessPawn_OnRep_ChangeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessPawn_SetState_Statics
	{
		struct ChineseChessPawn_eventSetState_Parms
		{
			EChineseChessPawnState NewState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChineseChessPawn_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChineseChessPawn_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessPawn_eventSetState_Parms, NewState), Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState, METADATA_PARAMS(nullptr, 0) }; // 1557472555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessPawn_SetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessPawn_SetState_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessPawn_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessPawn_SetState_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xae\xe7\x8a\xb6\xe6\x80\x81" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessPawn_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessPawn, nullptr, "SetState", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessPawn_SetState_Statics::ChineseChessPawn_eventSetState_Parms), Z_Construct_UFunction_AChineseChessPawn_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessPawn_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessPawn_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessPawn_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics
	{
		struct ChineseChessPawn_eventSetupSlot_Parms
		{
			UChineseChessBoardSlot* NewSlot;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics::NewProp_NewSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics::NewProp_NewSlot = { "NewSlot", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessPawn_eventSetupSlot_Parms, NewSlot), Z_Construct_UClass_UChineseChessBoardSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics::NewProp_NewSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics::NewProp_NewSlot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics::NewProp_NewSlot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe5\xb0\x86\xe6\xa3\x8b\xe5\xad\x90\xe8\xae\xbe\xe7\xbd\xae\xe5\x88\xb0\xe6\xa7\xbd\xe4\xbd\x8d" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessPawn, nullptr, "SetupSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics::ChineseChessPawn_eventSetupSlot_Parms), Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessPawn_SetupSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessPawn_SetupSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChineseChessPawn);
	UClass* Z_Construct_UClass_AChineseChessPawn_NoRegister()
	{
		return AChineseChessPawn::StaticClass();
	}
	struct Z_Construct_UClass_AChineseChessPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChineseChessPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameBasePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardGameDerived,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChineseChessPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChineseChessPawn_GetGameManager, "GetGameManager" }, // 3778223141
		{ &Z_Construct_UFunction_AChineseChessPawn_GetPawnType, "GetPawnType" }, // 3639816862
		{ &Z_Construct_UFunction_AChineseChessPawn_GetSlot, "GetSlot" }, // 894646635
		{ &Z_Construct_UFunction_AChineseChessPawn_IsAlive, "IsAlive" }, // 4174227107
		{ &Z_Construct_UFunction_AChineseChessPawn_MoveRule, "MoveRule" }, // 3498223877
		{ &Z_Construct_UFunction_AChineseChessPawn_OnRep_ChangeState, "OnRep_ChangeState" }, // 1127622534
		{ &Z_Construct_UDelegateFunction_AChineseChessPawn_PerformDelegate__DelegateSignature, "PerformDelegate__DelegateSignature" }, // 515441820
		{ &Z_Construct_UFunction_AChineseChessPawn_SetState, "SetState" }, // 1191814538
		{ &Z_Construct_UFunction_AChineseChessPawn_SetupSlot, "SetupSlot" }, // 2062652504
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ChineseChess/ChineseChessPawn.h" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessPawn.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AChineseChessPawn_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessPawn_Statics::NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessPawn.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AChineseChessPawn_Statics::NewProp_State = { "State", "OnRep_ChangeState", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessPawn, State), Z_Construct_UEnum_BoardGameDerived_EChineseChessPawnState, METADATA_PARAMS(Z_Construct_UClass_AChineseChessPawn_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessPawn_Statics::NewProp_State_MetaData)) }; // 1557472555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessPawn_Statics::NewProp_GameManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChineseChessPawn_Statics::NewProp_GameManager = { "GameManager", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessPawn, GameManager), Z_Construct_UClass_AChineseChessManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChineseChessPawn_Statics::NewProp_GameManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessPawn_Statics::NewProp_GameManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChineseChessPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessPawn_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessPawn_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessPawn_Statics::NewProp_GameManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChineseChessPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChineseChessPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChineseChessPawn_Statics::ClassParams = {
		&AChineseChessPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChineseChessPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChineseChessPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChineseChessPawn()
	{
		if (!Z_Registration_Info_UClass_AChineseChessPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChineseChessPawn.OuterSingleton, Z_Construct_UClass_AChineseChessPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChineseChessPawn.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UClass* StaticClass<AChineseChessPawn>()
	{
		return AChineseChessPawn::StaticClass();
	}

	void AChineseChessPawn::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_State(TEXT("State"));
		static const FName Name_GameManager(TEXT("GameManager"));

		const bool bIsValid = true
			&& Name_State == ClassReps[(int32)ENetFields_Private::State].Property->GetFName()
			&& Name_GameManager == ClassReps[(int32)ENetFields_Private::GameManager].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AChineseChessPawn"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChineseChessPawn);
	AChineseChessPawn::~AChineseChessPawn() {}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_Statics::EnumInfo[] = {
		{ EChineseChessPawnState_StaticEnum, TEXT("EChineseChessPawnState"), &Z_Registration_Info_UEnum_EChineseChessPawnState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1557472555U) },
		{ EChineseChessControlPower_StaticEnum, TEXT("EChineseChessControlPower"), &Z_Registration_Info_UEnum_EChineseChessControlPower, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2636232700U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChineseChessPawn, AChineseChessPawn::StaticClass, TEXT("AChineseChessPawn"), &Z_Registration_Info_UClass_AChineseChessPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChineseChessPawn), 1442517448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_3324667583(TEXT("/Script/BoardGameDerived"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
