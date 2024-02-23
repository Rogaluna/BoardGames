// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardGameDerived/Public/ChineseChess/ChineseChessBoard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChineseChessBoard() {}
// Cross Module References
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_AChineseChessBoard();
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_AChineseChessBoard_NoRegister();
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_AChineseChessManager_NoRegister();
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_UChineseChessBoardSlot_NoRegister();
	BOARDGAMEDERIVED_API UFunction* Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature();
	BOARDGAMES_API UClass* Z_Construct_UClass_AGameBaseBoard();
	BOARDGAMES_API UClass* Z_Construct_UClass_UGameBaseBoardSlot_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BoardGameDerived();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics
	{
		struct ChineseChessBoard_eventSlotClickedDelegate_Parms
		{
			UChineseChessBoardSlot* Slot;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics::NewProp_Slot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessBoard_eventSlotClickedDelegate_Parms, Slot), Z_Construct_UClass_UChineseChessBoardSlot_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics::NewProp_Slot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessBoard, nullptr, "SlotClickedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics::ChineseChessBoard_eventSlotClickedDelegate_Parms), Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void AChineseChessBoard::FSlotClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SlotClickedDelegate, UChineseChessBoardSlot* Slot)
{
	struct ChineseChessBoard_eventSlotClickedDelegate_Parms
	{
		UChineseChessBoardSlot* Slot;
	};
	ChineseChessBoard_eventSlotClickedDelegate_Parms Parms;
	Parms.Slot=Slot;
	SlotClickedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AChineseChessBoard::execHandleSlotClicked)
	{
		P_GET_OBJECT(UGameBaseBoardSlot,Z_Param_BaseSlot);
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSlotClicked(Z_Param_BaseSlot,Z_Param_PlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessBoard::execGetBoardSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetBoardSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessBoard::execGetSlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UChineseChessBoardSlot*>*)Z_Param__Result=P_THIS->GetSlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessBoard::execGetSlot)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InVec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UChineseChessBoardSlot**)Z_Param__Result=P_THIS->GetSlot(Z_Param_Out_InVec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessBoard::execGetGameManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AChineseChessManager**)Z_Param__Result=P_THIS->GetGameManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChineseChessBoard::execOnRep_GameManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GameManager();
		P_NATIVE_END;
	}
	void AChineseChessBoard::StaticRegisterNativesAChineseChessBoard()
	{
		UClass* Class = AChineseChessBoard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoardSize", &AChineseChessBoard::execGetBoardSize },
			{ "GetGameManager", &AChineseChessBoard::execGetGameManager },
			{ "GetSlot", &AChineseChessBoard::execGetSlot },
			{ "GetSlots", &AChineseChessBoard::execGetSlots },
			{ "HandleSlotClicked", &AChineseChessBoard::execHandleSlotClicked },
			{ "OnRep_GameManager", &AChineseChessBoard::execOnRep_GameManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics
	{
		struct ChineseChessBoard_eventGetBoardSize_Parms
		{
			FVector2D ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessBoard_eventGetBoardSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\xa3\x8b\xe7\x9b\x98\xe5\xb0\xba\xe5\xaf\xb8" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessBoard, nullptr, "GetBoardSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics::ChineseChessBoard_eventGetBoardSize_Parms), Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessBoard_GetBoardSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessBoard_GetBoardSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessBoard_GetGameManager_Statics
	{
		struct ChineseChessBoard_eventGetGameManager_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessBoard_GetGameManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessBoard_eventGetGameManager_Parms, ReturnValue), Z_Construct_UClass_AChineseChessManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessBoard_GetGameManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessBoard_GetGameManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessBoard_GetGameManager_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\xb8\xb8\xe6\x88\x8f\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessBoard_GetGameManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessBoard, nullptr, "GetGameManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessBoard_GetGameManager_Statics::ChineseChessBoard_eventGetGameManager_Parms), Z_Construct_UFunction_AChineseChessBoard_GetGameManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_GetGameManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessBoard_GetGameManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_GetGameManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessBoard_GetGameManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessBoard_GetGameManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics
	{
		struct ChineseChessBoard_eventGetSlot_Parms
		{
			FVector2D InVec;
			UChineseChessBoardSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVec;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::NewProp_InVec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::NewProp_InVec = { "InVec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessBoard_eventGetSlot_Parms, InVec), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::NewProp_InVec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::NewProp_InVec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessBoard_eventGetSlot_Parms, ReturnValue), Z_Construct_UClass_UChineseChessBoardSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::NewProp_InVec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe7\x89\xb9\xe5\xae\x9a\xe4\xbd\x8d\xe7\xbd\xae\xe7\x9a\x84\xe6\xa7\xbd" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessBoard, nullptr, "GetSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::ChineseChessBoard_eventGetSlot_Parms), Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessBoard_GetSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessBoard_GetSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics
	{
		struct ChineseChessBoard_eventGetSlots_Parms
		{
			TArray<UChineseChessBoardSlot*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UChineseChessBoardSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessBoard_eventGetSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8b\xa5\xe6\x9c\x89\xe7\x9a\x84\xe6\xa7\xbd\xe4\xbd\x8d" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessBoard, nullptr, "GetSlots", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::ChineseChessBoard_eventGetSlots_Parms), Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessBoard_GetSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessBoard_GetSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics
	{
		struct ChineseChessBoard_eventHandleSlotClicked_Parms
		{
			UGameBaseBoardSlot* BaseSlot;
			APlayerState* PlayerState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseSlot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::NewProp_BaseSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::NewProp_BaseSlot = { "BaseSlot", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessBoard_eventHandleSlotClicked_Parms, BaseSlot), Z_Construct_UClass_UGameBaseBoardSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::NewProp_BaseSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::NewProp_BaseSlot_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessBoard_eventHandleSlotClicked_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::NewProp_BaseSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::NewProp_PlayerState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe5\xa4\x84\xe7\x90\x86\xe6\xa7\xbd\xe7\x82\xb9\xe5\x87\xbb" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessBoard, nullptr, "HandleSlotClicked", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::ChineseChessBoard_eventHandleSlotClicked_Parms), Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChineseChessBoard_OnRep_GameManager_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChineseChessBoard_OnRep_GameManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChineseChessBoard_OnRep_GameManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChineseChessBoard, nullptr, "OnRep_GameManager", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChineseChessBoard_OnRep_GameManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChineseChessBoard_OnRep_GameManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChineseChessBoard_OnRep_GameManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChineseChessBoard_OnRep_GameManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChineseChessBoard);
	UClass* Z_Construct_UClass_AChineseChessBoard_NoRegister()
	{
		return AChineseChessBoard::StaticClass();
	}
	struct Z_Construct_UClass_AChineseChessBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SlotClicked;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameManagerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameManagerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChineseChessBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameBaseBoard,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardGameDerived,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChineseChessBoard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChineseChessBoard_GetBoardSize, "GetBoardSize" }, // 3125133612
		{ &Z_Construct_UFunction_AChineseChessBoard_GetGameManager, "GetGameManager" }, // 945242990
		{ &Z_Construct_UFunction_AChineseChessBoard_GetSlot, "GetSlot" }, // 1563309207
		{ &Z_Construct_UFunction_AChineseChessBoard_GetSlots, "GetSlots" }, // 675192810
		{ &Z_Construct_UFunction_AChineseChessBoard_HandleSlotClicked, "HandleSlotClicked" }, // 2973187759
		{ &Z_Construct_UFunction_AChineseChessBoard_OnRep_GameManager, "OnRep_GameManager" }, // 3708181890
		{ &Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature, "SlotClickedDelegate__DelegateSignature" }, // 1199110191
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessBoard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe4\xb8\xad\xe5\x9b\xbd\xe8\xb1\xa1\xe6\xa3\x8b\xe7\x9b\x98\xe5\xb0\xb1\xe6\x98\xaf\xe5\xaf\xb9\xe4\xb8\x80\xe6\x97\xa0\xe6\x89\x80\xe6\x9c\x89\xe7\x9a\x84\xe6\x9d\xbf\xe5\xad\x90\xe4\xb8\x8a\xe8\xbf\x9b\xe8\xa1\x8c\xe7\xbb\x98\xe5\x88\xb6\xe6\xa3\x8b\xe7\x9b\x98\xe7\xbd\x91\xe6\xa0\xbc\xef\xbc\x88\xe5\xb0\xba\xe5\xaf\xb8\xe5\x92\x8c\xe6\xa7\xbd\xe4\xbd\x8d\xef\xbc\x89\n * \xe4\xbd\xbf\xe5\xbe\x97\xe6\xa3\x8b\xe5\xad\x90\xe8\x83\xbd\xe5\xa4\x9f\xe5\xa4\x84\xe4\xba\x8e\xe6\xad\xa3\xe7\xa1\xae\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe4\xb8\x8a\xef\xbc\x8c\xe5\xae\x83\xe8\x83\xbd\xe5\xa4\x9f\xe9\x80\x9a\xe8\xbf\x87\xe6\xa3\x8b\xe7\x9b\x98\xe6\xa7\xbd\xef\xbc\x8c\xe5\xaf\xb9\xe6\xa3\x8b\xe5\xad\x90\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe8\xbf\x9b\xe8\xa1\x8c\xe7\xae\xa1\xe7\x90\x86\xef\xbc\x8c\n * \xe5\xb9\xb6\xe5\x86\xb3\xe5\xae\x9a\xe6\xa3\x8b\xe5\xad\x90\xe8\x83\xbd\xe6\x94\xbe\xe7\xbd\xae\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe3\x80\x82\n */" },
		{ "IncludePath", "ChineseChess/ChineseChessBoard.h" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoard.h" },
		{ "ToolTip", "\xe4\xb8\xad\xe5\x9b\xbd\xe8\xb1\xa1\xe6\xa3\x8b\xe7\x9b\x98\xe5\xb0\xb1\xe6\x98\xaf\xe5\xaf\xb9\xe4\xb8\x80\xe6\x97\xa0\xe6\x89\x80\xe6\x9c\x89\xe7\x9a\x84\xe6\x9d\xbf\xe5\xad\x90\xe4\xb8\x8a\xe8\xbf\x9b\xe8\xa1\x8c\xe7\xbb\x98\xe5\x88\xb6\xe6\xa3\x8b\xe7\x9b\x98\xe7\xbd\x91\xe6\xa0\xbc\xef\xbc\x88\xe5\xb0\xba\xe5\xaf\xb8\xe5\x92\x8c\xe6\xa7\xbd\xe4\xbd\x8d\xef\xbc\x89\n\xe4\xbd\xbf\xe5\xbe\x97\xe6\xa3\x8b\xe5\xad\x90\xe8\x83\xbd\xe5\xa4\x9f\xe5\xa4\x84\xe4\xba\x8e\xe6\xad\xa3\xe7\xa1\xae\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe4\xb8\x8a\xef\xbc\x8c\xe5\xae\x83\xe8\x83\xbd\xe5\xa4\x9f\xe9\x80\x9a\xe8\xbf\x87\xe6\xa3\x8b\xe7\x9b\x98\xe6\xa7\xbd\xef\xbc\x8c\xe5\xaf\xb9\xe6\xa3\x8b\xe5\xad\x90\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe8\xbf\x9b\xe8\xa1\x8c\xe7\xae\xa1\xe7\x90\x86\xef\xbc\x8c\n\xe5\xb9\xb6\xe5\x86\xb3\xe5\xae\x9a\xe6\xa3\x8b\xe5\xad\x90\xe8\x83\xbd\xe6\x94\xbe\xe7\xbd\xae\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe3\x80\x82" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_SlotClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoard.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_SlotClicked = { "SlotClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessBoard, SlotClicked), Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_SlotClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_SlotClicked_MetaData)) }; // 1199110191
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UChineseChessBoardSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_Slots_MetaData[] = {
		{ "Category", "\xe5\xb1\x9e\xe6\x80\xa7" },
		{ "DisplayName", "\xe6\xa3\x8b\xe7\x9b\x98\xe6\xa7\xbd" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x002008800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessBoard, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_Slots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_GameManagerClass_MetaData[] = {
		{ "Category", "\xe5\xb1\x9e\xe6\x80\xa7" },
		{ "DisplayName", "\xe6\xb8\xb8\xe6\x88\x8f\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoard.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_GameManagerClass = { "GameManagerClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessBoard, GameManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AChineseChessManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_GameManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_GameManagerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_GameManager_MetaData[] = {
		{ "Category", "\xe5\xb1\x9e\xe6\x80\xa7" },
		{ "DisplayName", "\xe6\xb8\xb8\xe6\x88\x8f\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_GameManager = { "GameManager", "OnRep_GameManager", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChineseChessBoard, GameManager), Z_Construct_UClass_AChineseChessManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_GameManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_GameManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChineseChessBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_SlotClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_Slots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_Slots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_GameManagerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChineseChessBoard_Statics::NewProp_GameManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChineseChessBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChineseChessBoard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChineseChessBoard_Statics::ClassParams = {
		&AChineseChessBoard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChineseChessBoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessBoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChineseChessBoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChineseChessBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChineseChessBoard()
	{
		if (!Z_Registration_Info_UClass_AChineseChessBoard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChineseChessBoard.OuterSingleton, Z_Construct_UClass_AChineseChessBoard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChineseChessBoard.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UClass* StaticClass<AChineseChessBoard>()
	{
		return AChineseChessBoard::StaticClass();
	}

	void AChineseChessBoard::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GameManager(TEXT("GameManager"));

		const bool bIsValid = true
			&& Name_GameManager == ClassReps[(int32)ENetFields_Private::GameManager].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AChineseChessBoard"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChineseChessBoard);
	AChineseChessBoard::~AChineseChessBoard() {}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChineseChessBoard, AChineseChessBoard::StaticClass, TEXT("AChineseChessBoard"), &Z_Registration_Info_UClass_AChineseChessBoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChineseChessBoard), 1286014997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_1760436182(TEXT("/Script/BoardGameDerived"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
