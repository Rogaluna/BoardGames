// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardGameDerived/Public/ChineseChess/ChineseChessBoardSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChineseChessBoardSlot() {}
// Cross Module References
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_UChineseChessBoardSlot();
	BOARDGAMEDERIVED_API UClass* Z_Construct_UClass_UChineseChessBoardSlot_NoRegister();
	BOARDGAMEDERIVED_API UEnum* Z_Construct_UEnum_BoardGameDerived_EHeightLightType();
	BOARDGAMES_API UClass* Z_Construct_UClass_UGameBaseBoardSlot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BoardGameDerived();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHeightLightType;
	static UEnum* EHeightLightType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHeightLightType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHeightLightType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BoardGameDerived_EHeightLightType, (UObject*)Z_Construct_UPackage__Script_BoardGameDerived(), TEXT("EHeightLightType"));
		}
		return Z_Registration_Info_UEnum_EHeightLightType.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EHeightLightType>()
	{
		return EHeightLightType_StaticEnum();
	}
	struct Z_Construct_UEnum_BoardGameDerived_EHeightLightType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BoardGameDerived_EHeightLightType_Statics::Enumerators[] = {
		{ "EHeightLightType::None", (int64)EHeightLightType::None },
		{ "EHeightLightType::SelectedPreMove", (int64)EHeightLightType::SelectedPreMove },
		{ "EHeightLightType::SelectedUnableMove", (int64)EHeightLightType::SelectedUnableMove },
		{ "EHeightLightType::MovablePos", (int64)EHeightLightType::MovablePos },
		{ "EHeightLightType::Dangerous", (int64)EHeightLightType::Dangerous },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BoardGameDerived_EHeightLightType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dangerous.DisplayName", "\xe5\x8d\xb1\xe9\x99\xa9\xe9\xab\x98\xe5\x85\x89" },
		{ "Dangerous.Name", "EHeightLightType::Dangerous" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoardSlot.h" },
		{ "MovablePos.DisplayName", "\xe5\x8f\xaf\xe7\xa7\xbb\xe5\x8a\xa8\xe4\xbd\x8d\xe7\xbd\xae\xe9\xab\x98\xe5\x85\x89" },
		{ "MovablePos.Name", "EHeightLightType::MovablePos" },
		{ "None.DisplayName", "\xe6\x97\xa0\xe9\xab\x98\xe5\x85\x89" },
		{ "None.Name", "EHeightLightType::None" },
		{ "SelectedPreMove.DisplayName", "\xe9\x80\x89\xe4\xb8\xad\xe9\xa2\x84\xe7\xa7\xbb\xe5\x8a\xa8\xe9\xab\x98\xe5\x85\x89" },
		{ "SelectedPreMove.Name", "EHeightLightType::SelectedPreMove" },
		{ "SelectedUnableMove.DisplayName", "\xe9\x80\x89\xe4\xb8\xad\xe6\x97\xa0\xe6\xb3\x95\xe7\xa7\xbb\xe5\x8a\xa8\xe9\xab\x98\xe5\x85\x89" },
		{ "SelectedUnableMove.Name", "EHeightLightType::SelectedUnableMove" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BoardGameDerived_EHeightLightType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BoardGameDerived,
		nullptr,
		"EHeightLightType",
		"EHeightLightType",
		Z_Construct_UEnum_BoardGameDerived_EHeightLightType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EHeightLightType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BoardGameDerived_EHeightLightType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGameDerived_EHeightLightType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BoardGameDerived_EHeightLightType()
	{
		if (!Z_Registration_Info_UEnum_EHeightLightType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHeightLightType.InnerSingleton, Z_Construct_UEnum_BoardGameDerived_EHeightLightType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHeightLightType.InnerSingleton;
	}
	DEFINE_FUNCTION(UChineseChessBoardSlot::execGetSlotPos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetSlotPos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChineseChessBoardSlot::execSetHeightLight)
	{
		P_GET_ENUM(EHeightLightType,Z_Param_NewHeightLight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeightLight(EHeightLightType(Z_Param_NewHeightLight));
		P_NATIVE_END;
	}
	void UChineseChessBoardSlot::StaticRegisterNativesUChineseChessBoardSlot()
	{
		UClass* Class = UChineseChessBoardSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSlotPos", &UChineseChessBoardSlot::execGetSlotPos },
			{ "SetHeightLight", &UChineseChessBoardSlot::execSetHeightLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChineseChessBoardSlot_GetSlotPos_Statics
	{
		struct ChineseChessBoardSlot_eventGetSlotPos_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChineseChessBoardSlot_GetSlotPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessBoardSlot_eventGetSlotPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessBoardSlot_GetSlotPos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessBoardSlot_GetSlotPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessBoardSlot_GetSlotPos_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\xa7\xbd\xe4\xbd\x8d\xe5\x9d\x90\xe6\xa0\x87" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoardSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessBoardSlot_GetSlotPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessBoardSlot, nullptr, "GetSlotPos", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessBoardSlot_GetSlotPos_Statics::ChineseChessBoardSlot_eventGetSlotPos_Parms), Z_Construct_UFunction_UChineseChessBoardSlot_GetSlotPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessBoardSlot_GetSlotPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessBoardSlot_GetSlotPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessBoardSlot_GetSlotPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessBoardSlot_GetSlotPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessBoardSlot_GetSlotPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight_Statics
	{
		struct ChineseChessBoardSlot_eventSetHeightLight_Parms
		{
			EHeightLightType NewHeightLight;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewHeightLight_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewHeightLight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight_Statics::NewProp_NewHeightLight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight_Statics::NewProp_NewHeightLight = { "NewHeightLight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChineseChessBoardSlot_eventSetHeightLight_Parms, NewHeightLight), Z_Construct_UEnum_BoardGameDerived_EHeightLightType, METADATA_PARAMS(nullptr, 0) }; // 4276614378
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight_Statics::NewProp_NewHeightLight_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight_Statics::NewProp_NewHeightLight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xae\xe9\xab\x98\xe4\xba\xae" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoardSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChineseChessBoardSlot, nullptr, "SetHeightLight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight_Statics::ChineseChessBoardSlot_eventSetHeightLight_Parms), Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChineseChessBoardSlot);
	UClass* Z_Construct_UClass_UChineseChessBoardSlot_NoRegister()
	{
		return UChineseChessBoardSlot::StaticClass();
	}
	struct Z_Construct_UClass_UChineseChessBoardSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightLightComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightLightComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPreMoveEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedPreMoveEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedUnableMoveEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedUnableMoveEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovableEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovableEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DangerousEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DangerousEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChineseChessBoardSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameBaseBoardSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardGameDerived,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChineseChessBoardSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChineseChessBoardSlot_GetSlotPos, "GetSlotPos" }, // 94961109
		{ &Z_Construct_UFunction_UChineseChessBoardSlot_SetHeightLight, "SetHeightLight" }, // 1144925475
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChineseChessBoardSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "ChineseChess/ChineseChessBoardSlot.h" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoardSlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_HeightLightComponent_MetaData[] = {
		{ "Category", "\xe5\xb1\x9e\xe6\x80\xa7" },
		{ "DisplayName", "\xe9\xab\x98\xe4\xba\xae\xe7\xbb\x84\xe4\xbb\xb6" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoardSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_HeightLightComponent = { "HeightLightComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChineseChessBoardSlot, HeightLightComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_HeightLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_HeightLightComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_FadeOutDuration_MetaData[] = {
		{ "Category", "\xe5\xb1\x9e\xe6\x80\xa7|\xe7\x89\xb9\xe6\x95\x88" },
		{ "DisplayName", "\xe7\xb2\x92\xe5\xad\x90\xe7\x89\xb9\xe6\x95\x88[\xe6\xb6\x88\xe5\xa4\xb1]\xe6\xb8\x90\xe5\x8f\x98\xe6\x97\xb6\xe9\x97\xb4" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoardSlot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChineseChessBoardSlot, FadeOutDuration), METADATA_PARAMS(Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_FadeOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_FadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_TransitionDuration_MetaData[] = {
		{ "Category", "\xe5\xb1\x9e\xe6\x80\xa7|\xe7\x89\xb9\xe6\x95\x88" },
		{ "DisplayName", "\xe7\xb2\x92\xe5\xad\x90\xe7\x89\xb9\xe6\x95\x88[\xe5\x8f\x98\xe6\x9b\xb4]\xe6\xb8\x90\xe5\x8f\x98\xe6\x97\xb6\xe9\x97\xb4" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoardSlot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_TransitionDuration = { "TransitionDuration", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChineseChessBoardSlot, TransitionDuration), METADATA_PARAMS(Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_TransitionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_TransitionDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_SelectedPreMoveEffect_MetaData[] = {
		{ "Category", "\xe5\xb1\x9e\xe6\x80\xa7|\xe7\x89\xb9\xe6\x95\x88" },
		{ "DisplayName", "\xe9\x80\x89\xe4\xb8\xad\xe9\xa2\x84\xe7\xa7\xbb\xe5\x8a\xa8\xe7\x89\xb9\xe6\x95\x88" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoardSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_SelectedPreMoveEffect = { "SelectedPreMoveEffect", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChineseChessBoardSlot, SelectedPreMoveEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_SelectedPreMoveEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_SelectedPreMoveEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_SelectedUnableMoveEffect_MetaData[] = {
		{ "Category", "\xe5\xb1\x9e\xe6\x80\xa7|\xe7\x89\xb9\xe6\x95\x88" },
		{ "DisplayName", "\xe9\x80\x89\xe4\xb8\xad\xe6\x97\xa0\xe6\xb3\x95\xe7\xa7\xbb\xe5\x8a\xa8\xe7\x89\xb9\xe6\x95\x88" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoardSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_SelectedUnableMoveEffect = { "SelectedUnableMoveEffect", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChineseChessBoardSlot, SelectedUnableMoveEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_SelectedUnableMoveEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_SelectedUnableMoveEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_MovableEffect_MetaData[] = {
		{ "Category", "\xe5\xb1\x9e\xe6\x80\xa7|\xe7\x89\xb9\xe6\x95\x88" },
		{ "DisplayName", "\xe5\x8f\xaf\xe7\xa7\xbb\xe5\x8a\xa8\xe7\x89\xb9\xe6\x95\x88" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoardSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_MovableEffect = { "MovableEffect", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChineseChessBoardSlot, MovableEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_MovableEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_MovableEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_DangerousEffect_MetaData[] = {
		{ "Category", "\xe5\xb1\x9e\xe6\x80\xa7|\xe7\x89\xb9\xe6\x95\x88" },
		{ "DisplayName", "\xe5\x8d\xb1\xe9\x99\xa9\xe7\x89\xb9\xe6\x95\x88" },
		{ "ModuleRelativePath", "Public/ChineseChess/ChineseChessBoardSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_DangerousEffect = { "DangerousEffect", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChineseChessBoardSlot, DangerousEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_DangerousEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_DangerousEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChineseChessBoardSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_HeightLightComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_FadeOutDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_TransitionDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_SelectedPreMoveEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_SelectedUnableMoveEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_MovableEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChineseChessBoardSlot_Statics::NewProp_DangerousEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChineseChessBoardSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChineseChessBoardSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChineseChessBoardSlot_Statics::ClassParams = {
		&UChineseChessBoardSlot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChineseChessBoardSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChineseChessBoardSlot_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChineseChessBoardSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChineseChessBoardSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChineseChessBoardSlot()
	{
		if (!Z_Registration_Info_UClass_UChineseChessBoardSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChineseChessBoardSlot.OuterSingleton, Z_Construct_UClass_UChineseChessBoardSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChineseChessBoardSlot.OuterSingleton;
	}
	template<> BOARDGAMEDERIVED_API UClass* StaticClass<UChineseChessBoardSlot>()
	{
		return UChineseChessBoardSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChineseChessBoardSlot);
	UChineseChessBoardSlot::~UChineseChessBoardSlot() {}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_Statics::EnumInfo[] = {
		{ EHeightLightType_StaticEnum, TEXT("EHeightLightType"), &Z_Registration_Info_UEnum_EHeightLightType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4276614378U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChineseChessBoardSlot, UChineseChessBoardSlot::StaticClass, TEXT("UChineseChessBoardSlot"), &Z_Registration_Info_UClass_UChineseChessBoardSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChineseChessBoardSlot), 1434212364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_812035038(TEXT("/Script/BoardGameDerived"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
