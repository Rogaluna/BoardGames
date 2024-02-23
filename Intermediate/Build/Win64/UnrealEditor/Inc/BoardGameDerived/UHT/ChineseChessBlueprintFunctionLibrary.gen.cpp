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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BoardGameDerived();
// End Cross Module References
	DEFINE_FUNCTION(UChineseChessSetFunctionLibrary::execTransformPosToIndex)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Pos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UChineseChessSetFunctionLibrary::TransformPosToIndex(Z_Param_Out_Pos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChineseChessSetFunctionLibrary::execTransformIndexToPos)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UChineseChessSetFunctionLibrary::TransformIndexToPos(Z_Param_Out_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChineseChessSetFunctionLibrary::execCheckPositionInBoard)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InVec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UChineseChessSetFunctionLibrary::CheckPositionInBoard(Z_Param_Out_InVec);
		P_NATIVE_END;
	}
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
	DEFINE_FUNCTION(UChineseChessSetFunctionLibrary::execIsBelongTo)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_PawnCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EChineseChessPlayer*)Z_Param__Result=UChineseChessSetFunctionLibrary::IsBelongTo(Z_Param_PawnCode);
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
	DEFINE_FUNCTION(UChineseChessSetFunctionLibrary::execGetInitState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UChineseChessSetFunctionLibrary::GetInitState();
		P_NATIVE_END;
	}
	void UChineseChessSetFunctionLibrary::StaticRegisterNativesUChineseChessSetFunctionLibrary()
	{
		UClass* Class = UChineseChessSetFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssessControl", &UChineseChessSetFunctionLibrary::execAssessControl },
			{ "CheckPositionInBoard", &UChineseChessSetFunctionLibrary::execCheckPositionInBoard },
			{ "Decode", &UChineseChessSetFunctionLibrary::execDecode },
			{ "Encode", &UChineseChessSetFunctionLibrary::execEncode },
			{ "GetInitState", &UChineseChessSetFunctionLibrary::execGetInitState },
			{ "IsBelongTo", &UChineseChessSetFunctionLibrary::execIsBelongTo },
			{ "TransformIndexToPos", &UChineseChessSetFunctionLibrary::execTransformIndexToPos },
			{ "TransformPosToIndex", &UChineseChessSetFunctionLibrary::execTransformPosToIndex },
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
	struct Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics
	{
		struct ChineseChessSetFunctionLibrary_eventCheckPositionInBoard_Parms
		{
			FVector2D InVec;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVec;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::NewProp_InVec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::NewProp_InVec = { "InVec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventCheckPositionInBoard_Parms, InVec), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::NewProp_InVec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::NewProp_InVec_MetaData)) };
	void Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChineseChessSetFunctionLibrary_eventCheckPositionInBoard_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChineseChessSetFunctionLibrary_eventCheckPositionInBoard_Parms), &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::NewProp_InVec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe8\xb1\xa1\xe6\xa3\x8b" },
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe4\xbd\x8d\xe7\xbd\xae\xe6\x98\xaf\xe5\x90\xa6\xe5\xa4\x84\xe4\xba\x8e\xe6\xa3\x8b\xe7\x9b\x98" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessSetFunctionLibrary, nullptr, "CheckPositionInBoard", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::ChineseChessSetFunctionLibrary_eventCheckPositionInBoard_Parms), Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard_Statics::FuncParams);
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
	struct Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState_Statics
	{
		struct ChineseChessSetFunctionLibrary_eventGetInitState_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventGetInitState_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe8\xb1\xa1\xe6\xa3\x8b" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x88\x9d\xe5\xa7\x8b\xe6\xa3\x8b\xe7\x9b\x98\xe7\x8a\xb6\xe6\x80\x81" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessSetFunctionLibrary, nullptr, "GetInitState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState_Statics::ChineseChessSetFunctionLibrary_eventGetInitState_Parms), Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics
	{
		struct ChineseChessSetFunctionLibrary_eventIsBelongTo_Parms
		{
			uint8 PawnCode;
			EChineseChessPlayer ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PawnCode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::NewProp_PawnCode = { "PawnCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventIsBelongTo_Parms, PawnCode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventIsBelongTo_Parms, ReturnValue), Z_Construct_UEnum_BoardGameDerived_EChineseChessPlayer, METADATA_PARAMS(nullptr, 0) }; // 3666507954
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::NewProp_PawnCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe8\xb1\xa1\xe6\xa3\x8b" },
		{ "DisplayName", "\xe5\x88\xa4\xe5\xae\x9a\xe6\xa3\x8b\xe5\xad\x90\xe9\x98\xb5\xe8\x90\xa5" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessSetFunctionLibrary, nullptr, "IsBelongTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::ChineseChessSetFunctionLibrary_eventIsBelongTo_Parms), Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics
	{
		struct ChineseChessSetFunctionLibrary_eventTransformIndexToPos_Parms
		{
			int32 Index;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventTransformIndexToPos_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventTransformIndexToPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe8\xb1\xa1\xe6\xa3\x8b" },
		{ "DisplayName", "\xe8\xbd\xac\xe6\x8d\xa2\xe7\xb4\xa2\xe5\xbc\x95\xe5\x88\xb0\xe5\x9d\x90\xe6\xa0\x87" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessSetFunctionLibrary, nullptr, "TransformIndexToPos", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::ChineseChessSetFunctionLibrary_eventTransformIndexToPos_Parms), Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics
	{
		struct ChineseChessSetFunctionLibrary_eventTransformPosToIndex_Parms
		{
			FVector2D Pos;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::NewProp_Pos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventTransformPosToIndex_Parms, Pos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::NewProp_Pos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::NewProp_Pos_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessSetFunctionLibrary_eventTransformPosToIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::NewProp_Pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe8\xb1\xa1\xe6\xa3\x8b" },
		{ "DisplayName", "\xe8\xbd\xac\xe6\x8d\xa2\xe5\x9d\x90\xe6\xa0\x87\xe5\x88\xb0\xe7\xb4\xa2\xe5\xbc\x95" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessSetFunctionLibrary, nullptr, "TransformPosToIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::ChineseChessSetFunctionLibrary_eventTransformPosToIndex_Parms), Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_CheckPositionInBoard, "CheckPositionInBoard" }, // 2219944826
		{ &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Decode, "Decode" }, // 1896329511
		{ &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_Encode, "Encode" }, // 630708803
		{ &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_GetInitState, "GetInitState" }, // 3120809845
		{ &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_IsBelongTo, "IsBelongTo" }, // 3906369242
		{ &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformIndexToPos, "TransformIndexToPos" }, // 74998122
		{ &Z_Construct_UFunction_UChineseChessSetFunctionLibrary_TransformPosToIndex, "TransformPosToIndex" }, // 741372638
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
		{ Z_Construct_UClass_UChineseChessSetFunctionLibrary, UChineseChessSetFunctionLibrary::StaticClass, TEXT("UChineseChessSetFunctionLibrary"), &Z_Registration_Info_UClass_UChineseChessSetFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChineseChessSetFunctionLibrary), 2422490241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_320642946(TEXT("/Script/BoardGameDerived"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
