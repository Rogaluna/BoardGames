// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardGameDerived/Public/ChineseChess/Helper/ChineseChessHistoryRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChineseChessHistoryRecorder() {}
// Cross Module References
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_UChineseChessHistoryRecorder();
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_UChineseChessHistoryRecorder_NoRegister();
	BOARDGAMEDERIVED_API UScriptStruct* Z_Construct_UScriptStruct_FChineseChessHistoryItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_BoardGameDerived();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChineseChessHistoryItem;
class UScriptStruct* FChineseChessHistoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChineseChessHistoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChineseChessHistoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChineseChessHistoryItem, (UObject*)Z_Construct_UPackage__Script_BoardGameDerived(), TEXT("ChineseChessHistoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_ChineseChessHistoryItem.OuterSingleton;
}
template<> BOARDGAMEDERIVED_API UScriptStruct* StaticStruct<FChineseChessHistoryItem>()
{
	return FChineseChessHistoryItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PawnName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isKiller_MetaData[];
#endif
		static void NewProp_isKiller_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isKiller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KilledName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KilledName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isChecker_MetaData[];
#endif
		static void NewProp_isChecker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isChecker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessHistoryRecorder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChineseChessHistoryItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_PawnName_MetaData[] = {
		{ "Category", "ChineseChessHistoryItem" },
		{ "Comment", "// \xe4\xb8\xbb\xe4\xbd\x93\xe6\xa3\x8b\xe5\xad\x90\xe5\x90\x8d\xe7\xa7\xb0\n" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessHistoryRecorder.h" },
		{ "ToolTip", "\xe4\xb8\xbb\xe4\xbd\x93\xe6\xa3\x8b\xe5\xad\x90\xe5\x90\x8d\xe7\xa7\xb0" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_PawnName = { "PawnName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChineseChessHistoryItem, PawnName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_PawnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_PawnName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_StartPos_MetaData[] = {
		{ "Category", "ChineseChessHistoryItem" },
		{ "Comment", "// \xe5\xa7\x8b\xe5\x8a\xa8\xe4\xbd\x8d\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessHistoryRecorder.h" },
		{ "ToolTip", "\xe5\xa7\x8b\xe5\x8a\xa8\xe4\xbd\x8d\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChineseChessHistoryItem, StartPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_StartPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_StartPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_EndPos_MetaData[] = {
		{ "Category", "ChineseChessHistoryItem" },
		{ "Comment", "// \xe7\xbb\x88\xe6\xad\xa2\xe4\xbd\x8d\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessHistoryRecorder.h" },
		{ "ToolTip", "\xe7\xbb\x88\xe6\xad\xa2\xe4\xbd\x8d\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChineseChessHistoryItem, EndPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_EndPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_EndPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_isKiller_MetaData[] = {
		{ "Category", "ChineseChessHistoryItem" },
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe6\x9d\x80\xe6\xad\xbb\xe6\xa3\x8b\xe5\xad\x90\n" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessHistoryRecorder.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x9d\x80\xe6\xad\xbb\xe6\xa3\x8b\xe5\xad\x90" },
	};
#endif
	void Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_isKiller_SetBit(void* Obj)
	{
		((FChineseChessHistoryItem*)Obj)->isKiller = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_isKiller = { "isKiller", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FChineseChessHistoryItem), &Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_isKiller_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_isKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_isKiller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_KilledName_MetaData[] = {
		{ "Category", "ChineseChessHistoryItem" },
		{ "Comment", "// \xe8\xa2\xab\xe6\x9d\x80\xe6\xa3\x8b\xe5\xad\x90\xe5\x90\x8d\xe7\xa7\xb0\n" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessHistoryRecorder.h" },
		{ "ToolTip", "\xe8\xa2\xab\xe6\x9d\x80\xe6\xa3\x8b\xe5\xad\x90\xe5\x90\x8d\xe7\xa7\xb0" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_KilledName = { "KilledName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChineseChessHistoryItem, KilledName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_KilledName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_KilledName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_isChecker_MetaData[] = {
		{ "Category", "ChineseChessHistoryItem" },
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe5\xb0\x86\xe5\x86\x9b\n" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessHistoryRecorder.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xb0\x86\xe5\x86\x9b" },
	};
#endif
	void Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_isChecker_SetBit(void* Obj)
	{
		((FChineseChessHistoryItem*)Obj)->isChecker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_isChecker = { "isChecker", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FChineseChessHistoryItem), &Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_isChecker_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_isChecker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_isChecker_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_PawnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_StartPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_EndPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_isKiller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_KilledName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewProp_isChecker,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BoardGameDerived,
		nullptr,
		&NewStructOps,
		"ChineseChessHistoryItem",
		sizeof(FChineseChessHistoryItem),
		alignof(FChineseChessHistoryItem),
		Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChineseChessHistoryItem()
	{
		if (!Z_Registration_Info_UScriptStruct_ChineseChessHistoryItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChineseChessHistoryItem.InnerSingleton, Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChineseChessHistoryItem.InnerSingleton;
	}
	DEFINE_FUNCTION(UChineseChessHistoryRecorder::execGetLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChineseChessHistoryRecorder::execGetLastHistoryItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FChineseChessHistoryItem*)Z_Param__Result=P_THIS->GetLastHistoryItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChineseChessHistoryRecorder::execGetHistoryItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FChineseChessHistoryItem*)Z_Param__Result=P_THIS->GetHistoryItem(Z_Param_Index);
		P_NATIVE_END;
	}
	void UChineseChessHistoryRecorder::StaticRegisterNativesUChineseChessHistoryRecorder()
	{
		UClass* Class = UChineseChessHistoryRecorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHistoryItem", &UChineseChessHistoryRecorder::execGetHistoryItem },
			{ "GetLastHistoryItem", &UChineseChessHistoryRecorder::execGetLastHistoryItem },
			{ "GetLength", &UChineseChessHistoryRecorder::execGetLength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics
	{
		struct ChineseChessHistoryRecorder_eventGetHistoryItem_Parms
		{
			int32 Index;
			FChineseChessHistoryItem ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessHistoryRecorder_eventGetHistoryItem_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessHistoryRecorder_eventGetHistoryItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FChineseChessHistoryItem, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::NewProp_ReturnValue_MetaData)) }; // 2170907368
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9a\xe7\xb4\xa2\xe5\xbc\x95\xe5\x8e\x86\xe5\x8f\xb2\xe8\xae\xb0\xe5\xbd\x95" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessHistoryRecorder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessHistoryRecorder, nullptr, "GetHistoryItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::ChineseChessHistoryRecorder_eventGetHistoryItem_Parms), Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics
	{
		struct ChineseChessHistoryRecorder_eventGetLastHistoryItem_Parms
		{
			FChineseChessHistoryItem ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessHistoryRecorder_eventGetLastHistoryItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FChineseChessHistoryItem, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics::NewProp_ReturnValue_MetaData)) }; // 2170907368
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x9c\x80\xe5\x90\x8e\xe4\xb8\x80\xe6\x9d\xa1\xe5\x8e\x86\xe5\x8f\xb2\xe8\xae\xb0\xe5\xbd\x95" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessHistoryRecorder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessHistoryRecorder, nullptr, "GetLastHistoryItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics::ChineseChessHistoryRecorder_eventGetLastHistoryItem_Parms), Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLength_Statics
	{
		struct ChineseChessHistoryRecorder_eventGetLength_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessHistoryRecorder_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLength_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x8e\x86\xe5\x8f\xb2\xe9\x95\xbf\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessHistoryRecorder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessHistoryRecorder, nullptr, "GetLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLength_Statics::ChineseChessHistoryRecorder_eventGetLength_Parms), Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChineseChessHistoryRecorder);
	UClass* Z_Construct_UClass_UChineseChessHistoryRecorder_NoRegister()
	{
		return UChineseChessHistoryRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UChineseChessHistoryRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChineseChessHistoryRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardGameDerived,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChineseChessHistoryRecorder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChineseChessHistoryRecorder_GetHistoryItem, "GetHistoryItem" }, // 3298973926
		{ &Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLastHistoryItem, "GetLastHistoryItem" }, // 989051732
		{ &Z_Construct_UFunction_UChineseChessHistoryRecorder_GetLength, "GetLength" }, // 2759637250
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChineseChessHistoryRecorder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe5\x8f\xb2\xe5\xae\x98\n */" },
		{ "IncludePath", "ChineseChess/Helper/ChineseChessHistoryRecorder.h" },
		{ "ModuleRelativePath", "Public/ChineseChess/Helper/ChineseChessHistoryRecorder.h" },
		{ "ToolTip", "\xe5\x8f\xb2\xe5\xae\x98" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChineseChessHistoryRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChineseChessHistoryRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChineseChessHistoryRecorder_Statics::ClassParams = {
		&UChineseChessHistoryRecorder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChineseChessHistoryRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChineseChessHistoryRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChineseChessHistoryRecorder()
	{
		if (!Z_Registration_Info_UClass_UChineseChessHistoryRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChineseChessHistoryRecorder.OuterSingleton, Z_Construct_UClass_UChineseChessHistoryRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChineseChessHistoryRecorder.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UClass* StaticClass<UChineseChessHistoryRecorder>()
	{
		return UChineseChessHistoryRecorder::StaticClass();
	}
	UChineseChessHistoryRecorder::UChineseChessHistoryRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChineseChessHistoryRecorder);
	UChineseChessHistoryRecorder::~UChineseChessHistoryRecorder() {}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessHistoryRecorder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessHistoryRecorder_h_Statics::ScriptStructInfo[] = {
		{ FChineseChessHistoryItem::StaticStruct, Z_Construct_UScriptStruct_FChineseChessHistoryItem_Statics::NewStructOps, TEXT("ChineseChessHistoryItem"), &Z_Registration_Info_UScriptStruct_ChineseChessHistoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChineseChessHistoryItem), 2170907368U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessHistoryRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChineseChessHistoryRecorder, UChineseChessHistoryRecorder::StaticClass, TEXT("UChineseChessHistoryRecorder"), &Z_Registration_Info_UClass_UChineseChessHistoryRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChineseChessHistoryRecorder), 272934913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessHistoryRecorder_h_1618460124(TEXT("/Script/BoardGameDerived"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessHistoryRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessHistoryRecorder_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessHistoryRecorder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessHistoryRecorder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
