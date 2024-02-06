// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardGameDerived/Public/ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChineseChessBlueprintFunctionLibrary() {}
// Cross Module References
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_AChineseChessManager_NoRegister();
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_UChineseChessSetFunctionLibrary();
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_UChineseChessSetFunctionLibrary_NoRegister();
	BOARDGAMEDERIVED_API UEnum* Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BoardGameDerived();
// End Cross Module References
	DEFINE_FUNCTION(UChineseChessSetFunctionLibrary::execAssessControl)
	{
		P_GET_OBJECT(AChineseChessManager,Z_Param_InManager);
		P_GET_OBJECT(APlayerState,Z_Param_InPlayerState);
		P_GET_ENUM(EChineseChessPlayer,Z_Param_InPlayerCamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UChineseChessSetFunctionLibrary::AssessControl(Z_Param_InManager,Z_Param_InPlayerState,EChineseChessPlayer(Z_Param_InPlayerCamp));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChineseChessSetFunctionLibrary::execIsBelongTo_Han)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_PawnCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UChineseChessSetFunctionLibrary::IsBelongTo_Han(Z_Param_PawnCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChineseChessSetFunctionLibrary::execIsBelongTo_Chu)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_PawnCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UChineseChessSetFunctionLibrary::IsBelongTo_Chu(Z_Param_PawnCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChineseChessSetFunctionLibrary::execDecode)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_I_PawnType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UChineseChessSetFunctionLibrary::Decode(Z_Param_Out_I_PawnType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChineseChessSetFunctionLibrary::execEncode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_S_PawnType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=UChineseChessSetFunctionLibrary::Encode(Z_Param_S_PawnType);
		P_NATIVE_END;
	}
	void UChineseChessSetFunctionLibrary::StaticRegisterNativesUChineseChessSetFunctionLibrary()
	{
		UClass* Class = UChineseChessSetFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssessControl", &UChineseChessSetFunctionLibrary::execAssessControl },
			{ "Decode", &UChineseChessSetFunctionLibrary::execDecode },
			{ "Encode", &UChineseChessSetFunctionLibrary::execEncode },
			{ "IsBelongTo_Chu", &UChineseChessSetFunctionLibrary::execIsBelongTo_Chu },
			{ "IsBelongTo_Han", &UChineseChessSetFunctionLibrary::execIsBelongTo_Han },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics
	{
		struct ChineseChessSetFunctionLibrary_eventAssessControl_Parms
		{
			AChineseChessManager* InManager;
			APlayerState* InPlayerState;
			EChineseChessPlayer InPlayerCamp;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InManager;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlayerState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPlayerCamp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPlayerCamp;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::NewProp_InManager = { "InManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventAssessControl_Parms, InManager), Z_Construct_UClass_AChineseChessManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::NewProp_InPlayerState = { "InPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventAssessControl_Parms, InPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::NewProp_InPlayerCamp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::NewProp_InPlayerCamp = { "InPlayerCamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventAssessControl_Parms, InPlayerCamp), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, METADATA_PARAMS(nullptr, 0) }; // 3666507954
	void Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChineseChessSetFunctionLibrary_eventAssessControl_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChineseChessSetFunctionLibrary_eventAssessControl_Parms), &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::NewProp_InManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::NewProp_InPlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::NewProp_InPlayerCamp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::NewProp_InPlayerCamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe8\xb1\xa1\xe6\xa3\x8b" },
		{ "DisplayName", "\xe8\xaf\x84\xe5\xae\x9a\xe6\x8e\xa7\xe5\x88\xb6\xe6\x9d\x83" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessSetFunctionLibrary, nullptr, "AssessControl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::ChineseChessSetFunctionLibrary_eventAssessControl_Parms), Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics
	{
		struct ChineseChessSetFunctionLibrary_eventDecode_Parms
		{
			uint8 I_PawnType;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_I_PawnType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_I_PawnType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::NewProp_I_PawnType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::NewProp_I_PawnType = { "I_PawnType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventDecode_Parms, I_PawnType), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::NewProp_I_PawnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::NewProp_I_PawnType_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventDecode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::NewProp_I_PawnType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe8\xb1\xa1\xe6\xa3\x8b" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\xa3\x8b\xe5\xad\x90\xe7\xb1\xbb\xe5\x9e\x8b\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessSetFunctionLibrary, nullptr, "Decode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::ChineseChessSetFunctionLibrary_eventDecode_Parms), Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics
	{
		struct ChineseChessSetFunctionLibrary_eventEncode_Parms
		{
			FString S_PawnType;
			uint8 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_S_PawnType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_S_PawnType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::NewProp_S_PawnType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::NewProp_S_PawnType = { "S_PawnType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventEncode_Parms, S_PawnType), METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::NewProp_S_PawnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::NewProp_S_PawnType_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventEncode_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::NewProp_S_PawnType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe8\xb1\xa1\xe6\xa3\x8b" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\xa3\x8b\xe5\xad\x90\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xbd\x8d\xe7\xbc\x96\xe7\xa0\x81" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessSetFunctionLibrary, nullptr, "Encode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::ChineseChessSetFunctionLibrary_eventEncode_Parms), Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics
	{
		struct ChineseChessSetFunctionLibrary_eventIsBelongTo_Chu_Parms
		{
			uint8 PawnCode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PawnCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::NewProp_PawnCode = { "PawnCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventIsBelongTo_Chu_Parms, PawnCode), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChineseChessSetFunctionLibrary_eventIsBelongTo_Chu_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChineseChessSetFunctionLibrary_eventIsBelongTo_Chu_Parms), &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::NewProp_PawnCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe8\xb1\xa1\xe6\xa3\x8b" },
		{ "DisplayName", "\xe5\x88\xa4\xe5\xae\x9a\xe6\xa3\x8b\xe5\xad\x90\xe9\x98\xb5\xe8\x90\xa5-\xe6\xa5\x9a" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessSetFunctionLibrary, nullptr, "IsBelongTo_Chu", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::ChineseChessSetFunctionLibrary_eventIsBelongTo_Chu_Parms), Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics
	{
		struct ChineseChessSetFunctionLibrary_eventIsBelongTo_Han_Parms
		{
			uint8 PawnCode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PawnCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::NewProp_PawnCode = { "PawnCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventIsBelongTo_Han_Parms, PawnCode), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChineseChessSetFunctionLibrary_eventIsBelongTo_Han_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChineseChessSetFunctionLibrary_eventIsBelongTo_Han_Parms), &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::NewProp_PawnCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe8\xb1\xa1\xe6\xa3\x8b" },
		{ "DisplayName", "\xe5\x88\xa4\xe5\xae\x9a\xe6\xa3\x8b\xe5\xad\x90\xe9\x98\xb5\xe8\x90\xa5-\xe6\xb1\x89" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessSetFunctionLibrary, nullptr, "IsBelongTo_Han", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::ChineseChessSetFunctionLibrary_eventIsBelongTo_Han_Parms), Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChineseChessSetFunctionLibrary);
	UClass* Z_Construct_UClass_UChineseChessSetFunctionLibrary_NoRegister()
	{
		return UChineseChessSetFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UChineseChessSetFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChineseChessSetFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardGameDerived,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChineseChessSetFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_AssessControl, "AssessControl" }, // 2742653223
		{ &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode, "Decode" }, // 1896329511
		{ &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode, "Encode" }, // 630708803
		{ &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Chu, "IsBelongTo_Chu" }, // 1679174517
		{ &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Han, "IsBelongTo_Han" }, // 2234760126
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChineseChessSetFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChineseChessSetFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChineseChessSetFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChineseChessSetFunctionLibrary_Statics::ClassParams = {
		&UChineseChessSetFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChineseChessSetFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChineseChessSetFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChineseChessSetFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UChineseChessSetFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChineseChessSetFunctionLibrary.OuterSingleton, Z_Construct_UClass_UChineseChessSetFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChineseChessSetFunctionLibrary.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UClass* StaticClass<UChineseChessSetFunctionLibrary>()
	{
		return UChineseChessSetFunctionLibrary::StaticClass();
	}
	UChineseChessSetFunctionLibrary::UChineseChessSetFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChineseChessSetFunctionLibrary);
	UChineseChessSetFunctionLibrary::~UChineseChessSetFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChineseChessSetFunctionLibrary, UChineseChessSetFunctionLibrary::StaticClass, TEXT("UChineseChessSetFunctionLibrary"), &Z_Registration_Info_UClass_UChineseChessSetFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChineseChessSetFunctionLibrary), 2174242807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_2117451701(TEXT("/Script/BoardGameDerived"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
