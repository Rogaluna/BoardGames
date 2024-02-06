// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardGames/Public/GameBaseBoardSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameBaseBoardSlot() {}
// Cross Module References
	BOARDGAMES_API UClass* Z_Construct_UClass_AGameBasePawn_NoRegister();
	BOARDGAMES_API UClass* Z_Construct_UClass_UGameBaseBoardSlot();
	BOARDGAMES_API UClass* Z_Construct_UClass_UGameBaseBoardSlot_NoRegister();
	BOARDGAMES_API UEnum* Z_Construct_UEnum_BoardGames_EColliderMaterialType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_BoardGames();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColliderMaterialType;
	static UEnum* EColliderMaterialType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EColliderMaterialType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EColliderMaterialType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BoardGames_EColliderMaterialType, (UObject*)Z_Construct_UPackage__Script_BoardGames(), TEXT("EColliderMaterialType"));
		}
		return Z_Registration_Info_UEnum_EColliderMaterialType.OuterSingleton;
	}
	template<> BOARDGAMES_API UEnum* StaticEnum<EColliderMaterialType>()
	{
		return EColliderMaterialType_StaticEnum();
	}
	struct Z_Construct_UEnum_BoardGames_EColliderMaterialType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BoardGames_EColliderMaterialType_Statics::Enumerators[] = {
		{ "EColliderMaterialType::Default", (int64)EColliderMaterialType::Default },
		{ "EColliderMaterialType::Normal", (int64)EColliderMaterialType::Normal },
		{ "EColliderMaterialType::Hover", (int64)EColliderMaterialType::Hover },
		{ "EColliderMaterialType::Press", (int64)EColliderMaterialType::Press },
		{ "EColliderMaterialType::Customized_0", (int64)EColliderMaterialType::Customized_0 },
		{ "EColliderMaterialType::Customized_1", (int64)EColliderMaterialType::Customized_1 },
		{ "EColliderMaterialType::Customized_2", (int64)EColliderMaterialType::Customized_2 },
		{ "EColliderMaterialType::Customized_3", (int64)EColliderMaterialType::Customized_3 },
		{ "EColliderMaterialType::Customized_4", (int64)EColliderMaterialType::Customized_4 },
		{ "EColliderMaterialType::Customized_5", (int64)EColliderMaterialType::Customized_5 },
		{ "EColliderMaterialType::Customized_6", (int64)EColliderMaterialType::Customized_6 },
		{ "EColliderMaterialType::Customized_7", (int64)EColliderMaterialType::Customized_7 },
		{ "EColliderMaterialType::Customized_8", (int64)EColliderMaterialType::Customized_8 },
		{ "EColliderMaterialType::Customized_9", (int64)EColliderMaterialType::Customized_9 },
		{ "EColliderMaterialType::Customized_10", (int64)EColliderMaterialType::Customized_10 },
		{ "EColliderMaterialType::Customized_11", (int64)EColliderMaterialType::Customized_11 },
		{ "EColliderMaterialType::Customized_12", (int64)EColliderMaterialType::Customized_12 },
		{ "EColliderMaterialType::Customized_13", (int64)EColliderMaterialType::Customized_13 },
		{ "EColliderMaterialType::Customized_14", (int64)EColliderMaterialType::Customized_14 },
		{ "EColliderMaterialType::Customized_15", (int64)EColliderMaterialType::Customized_15 },
		{ "EColliderMaterialType::None", (int64)EColliderMaterialType::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BoardGames_EColliderMaterialType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Customized_0.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_0" },
		{ "Customized_0.Name", "EColliderMaterialType::Customized_0" },
		{ "Customized_1.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_1" },
		{ "Customized_1.Name", "EColliderMaterialType::Customized_1" },
		{ "Customized_10.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_10" },
		{ "Customized_10.Name", "EColliderMaterialType::Customized_10" },
		{ "Customized_11.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_11" },
		{ "Customized_11.Name", "EColliderMaterialType::Customized_11" },
		{ "Customized_12.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_12" },
		{ "Customized_12.Name", "EColliderMaterialType::Customized_12" },
		{ "Customized_13.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_13" },
		{ "Customized_13.Name", "EColliderMaterialType::Customized_13" },
		{ "Customized_14.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_14" },
		{ "Customized_14.Name", "EColliderMaterialType::Customized_14" },
		{ "Customized_15.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_15" },
		{ "Customized_15.Name", "EColliderMaterialType::Customized_15" },
		{ "Customized_2.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_2" },
		{ "Customized_2.Name", "EColliderMaterialType::Customized_2" },
		{ "Customized_3.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_3" },
		{ "Customized_3.Name", "EColliderMaterialType::Customized_3" },
		{ "Customized_4.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_4" },
		{ "Customized_4.Name", "EColliderMaterialType::Customized_4" },
		{ "Customized_5.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_5" },
		{ "Customized_5.Name", "EColliderMaterialType::Customized_5" },
		{ "Customized_6.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_6" },
		{ "Customized_6.Name", "EColliderMaterialType::Customized_6" },
		{ "Customized_7.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_7" },
		{ "Customized_7.Name", "EColliderMaterialType::Customized_7" },
		{ "Customized_8.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_8" },
		{ "Customized_8.Name", "EColliderMaterialType::Customized_8" },
		{ "Customized_9.DisplayName", "\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b_9" },
		{ "Customized_9.Name", "EColliderMaterialType::Customized_9" },
		{ "Default.DisplayName", "\xe9\xbb\x98\xe8\xae\xa4" },
		{ "Default.Name", "EColliderMaterialType::Default" },
		{ "Hover.DisplayName", "\xe6\x82\xac\xe5\x81\x9c" },
		{ "Hover.Name", "EColliderMaterialType::Hover" },
		{ "ModuleRelativePath", "Public/GameBaseBoardSlot.h" },
		{ "None.DisplayName", "\xe9\x9a\x90\xe8\x97\x8f" },
		{ "None.Name", "EColliderMaterialType::None" },
		{ "Normal.Comment", "// \xe9\xbb\x98\xe8\xae\xa4\xe6\x9d\x90\xe8\xb4\xa8\xe4\xbb\x85\xe5\x9c\xa8\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86\xe6\x9c\xaa\xe8\xb5\x8b\xe5\x80\xbc\xe7\x9a\x84\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x97\xb6\xe8\xa2\xab\xe4\xbd\xbf\xe7\x94\xa8\n" },
		{ "Normal.DisplayName", "\xe4\xb8\x80\xe8\x88\xac" },
		{ "Normal.Name", "EColliderMaterialType::Normal" },
		{ "Normal.ToolTip", "\xe9\xbb\x98\xe8\xae\xa4\xe6\x9d\x90\xe8\xb4\xa8\xe4\xbb\x85\xe5\x9c\xa8\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86\xe6\x9c\xaa\xe8\xb5\x8b\xe5\x80\xbc\xe7\x9a\x84\xe5\xae\xa2\xe5\x88\xb6\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x97\xb6\xe8\xa2\xab\xe4\xbd\xbf\xe7\x94\xa8" },
		{ "Press.DisplayName", "\xe6\x8c\x89\xe4\xb8\x8b" },
		{ "Press.Name", "EColliderMaterialType::Press" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BoardGames_EColliderMaterialType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BoardGames,
		nullptr,
		"EColliderMaterialType",
		"EColliderMaterialType",
		Z_Construct_UEnum_BoardGames_EColliderMaterialType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGames_EColliderMaterialType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BoardGames_EColliderMaterialType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BoardGames_EColliderMaterialType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BoardGames_EColliderMaterialType()
	{
		if (!Z_Registration_Info_UEnum_EColliderMaterialType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColliderMaterialType.InnerSingleton, Z_Construct_UEnum_BoardGames_EColliderMaterialType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EColliderMaterialType.InnerSingleton;
	}
	DEFINE_FUNCTION(UGameBaseBoardSlot::execIsOccupied)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOccupied();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameBaseBoardSlot::execSetColliderMaterialType)
	{
		P_GET_ENUM(EColliderMaterialType,Z_Param_ColliderMaterialType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColliderMaterialType(EColliderMaterialType(Z_Param_ColliderMaterialType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameBaseBoardSlot::execGetOccupyingPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameBasePawn**)Z_Param__Result=P_THIS->GetOccupyingPawn();
		P_NATIVE_END;
	}
	void UGameBaseBoardSlot::StaticRegisterNativesUGameBaseBoardSlot()
	{
		UClass* Class = UGameBaseBoardSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOccupyingPawn", &UGameBaseBoardSlot::execGetOccupyingPawn },
			{ "IsOccupied", &UGameBaseBoardSlot::execIsOccupied },
			{ "SetColliderMaterialType", &UGameBaseBoardSlot::execSetColliderMaterialType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameBaseBoardSlot_GetOccupyingPawn_Statics
	{
		struct GameBaseBoardSlot_eventGetOccupyingPawn_Parms
		{
			AGameBasePawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameBaseBoardSlot_GetOccupyingPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameBaseBoardSlot_eventGetOccupyingPawn_Parms, ReturnValue), Z_Construct_UClass_AGameBasePawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameBaseBoardSlot_GetOccupyingPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameBaseBoardSlot_GetOccupyingPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameBaseBoardSlot_GetOccupyingPawn_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x8d\xa0\xe6\x8d\xae\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90" },
		{ "ModuleRelativePath", "Public/GameBaseBoardSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameBaseBoardSlot_GetOccupyingPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameBaseBoardSlot, nullptr, "GetOccupyingPawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameBaseBoardSlot_GetOccupyingPawn_Statics::GameBaseBoardSlot_eventGetOccupyingPawn_Parms), Z_Construct_UFunction_UGameBaseBoardSlot_GetOccupyingPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameBaseBoardSlot_GetOccupyingPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameBaseBoardSlot_GetOccupyingPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameBaseBoardSlot_GetOccupyingPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameBaseBoardSlot_GetOccupyingPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameBaseBoardSlot_GetOccupyingPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied_Statics
	{
		struct GameBaseBoardSlot_eventIsOccupied_Parms
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
	void Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameBaseBoardSlot_eventIsOccupied_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameBaseBoardSlot_eventIsOccupied_Parms), &Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe6\xa3\x8b\xe5\xad\x90\xe5\x8d\xa0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/GameBaseBoardSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameBaseBoardSlot, nullptr, "IsOccupied", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied_Statics::GameBaseBoardSlot_eventIsOccupied_Parms), Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType_Statics
	{
		struct GameBaseBoardSlot_eventSetColliderMaterialType_Parms
		{
			EColliderMaterialType ColliderMaterialType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColliderMaterialType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColliderMaterialType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType_Statics::NewProp_ColliderMaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType_Statics::NewProp_ColliderMaterialType = { "ColliderMaterialType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameBaseBoardSlot_eventSetColliderMaterialType_Parms, ColliderMaterialType), Z_Construct_UEnum_BoardGames_EColliderMaterialType, METADATA_PARAMS(nullptr, 0) }; // 1533810519
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType_Statics::NewProp_ColliderMaterialType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType_Statics::NewProp_ColliderMaterialType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xae\xe6\xa7\xbd\xe4\xbd\x8d\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\xe6\x9d\x90\xe8\xb4\xa8\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/GameBaseBoardSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameBaseBoardSlot, nullptr, "SetColliderMaterialType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType_Statics::GameBaseBoardSlot_eventSetColliderMaterialType_Parms), Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameBaseBoardSlot);
	UClass* Z_Construct_UClass_UGameBaseBoardSlot_NoRegister()
	{
		return UGameBaseBoardSlot::StaticClass();
	}
	struct Z_Construct_UClass_UGameBaseBoardSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collider;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameBaseBoardSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardGames,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameBaseBoardSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameBaseBoardSlot_GetOccupyingPawn, "GetOccupyingPawn" }, // 3832247160
		{ &Z_Construct_UFunction_UGameBaseBoardSlot_IsOccupied, "IsOccupied" }, // 2897893757
		{ &Z_Construct_UFunction_UGameBaseBoardSlot_SetColliderMaterialType, "SetColliderMaterialType" }, // 3170154559
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameBaseBoardSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe6\xa3\x8b\xe7\x9b\x98\xe6\xa7\xbd\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe8\xa7\x84\xe5\xae\x9a\xe6\xa3\x8b\xe5\xad\x90\xe8\x83\xbd\xe6\x94\xbe\xe7\xbd\xae\xe7\x9a\x84\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xef\xbc\x8c\n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "GameBaseBoardSlot.h" },
		{ "ModuleRelativePath", "Public/GameBaseBoardSlot.h" },
		{ "ToolTip", "\xe6\xa3\x8b\xe7\x9b\x98\xe6\xa7\xbd\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe8\xa7\x84\xe5\xae\x9a\xe6\xa3\x8b\xe5\xad\x90\xe8\x83\xbd\xe6\x94\xbe\xe7\xbd\xae\xe7\x9a\x84\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xef\xbc\x8c" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_Collider_MetaData[] = {
		{ "Category", "\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93" },
		{ "Comment", "/** \xe6\x8b\xa5\xe6\x9c\x89\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\xe4\xbb\xa5\xe6\x94\xaf\xe6\x8c\x81\xe7\x82\xb9\xe5\x87\xbb\xe4\xba\xa4\xe4\xba\x92 */" },
		{ "DisplayName", "\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93" },
		{ "ModuleRelativePath", "Public/GameBaseBoardSlot.h" },
		{ "ToolTip", "\xe6\x8b\xa5\xe6\x9c\x89\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\xe4\xbb\xa5\xe6\x94\xaf\xe6\x8c\x81\xe7\x82\xb9\xe5\x87\xbb\xe4\xba\xa4\xe4\xba\x92" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameBaseBoardSlot, Collider), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_Collider_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_MaterialMap_ValueProp = { "MaterialMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_MaterialMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_MaterialMap_Key_KeyProp = { "MaterialMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_BoardGames_EColliderMaterialType, METADATA_PARAMS(nullptr, 0) }; // 1533810519
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_MaterialMap_MetaData[] = {
		{ "Category", "\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93" },
		{ "DisplayName", "\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\xe6\x9d\x90\xe8\xb4\xa8\xe8\xa1\xa8" },
		{ "ModuleRelativePath", "Public/GameBaseBoardSlot.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_MaterialMap = { "MaterialMap", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameBaseBoardSlot, MaterialMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_MaterialMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_MaterialMap_MetaData)) }; // 1533810519
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameBaseBoardSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_Collider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_MaterialMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_MaterialMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_MaterialMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameBaseBoardSlot_Statics::NewProp_MaterialMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameBaseBoardSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameBaseBoardSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameBaseBoardSlot_Statics::ClassParams = {
		&UGameBaseBoardSlot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameBaseBoardSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameBaseBoardSlot_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameBaseBoardSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameBaseBoardSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameBaseBoardSlot()
	{
		if (!Z_Registration_Info_UClass_UGameBaseBoardSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameBaseBoardSlot.OuterSingleton, Z_Construct_UClass_UGameBaseBoardSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameBaseBoardSlot.OuterSingleton;
	}
	template<> BOARDGAMES_API UClass* StaticClass<UGameBaseBoardSlot>()
	{
		return UGameBaseBoardSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameBaseBoardSlot);
	UGameBaseBoardSlot::~UGameBaseBoardSlot() {}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBaseBoardSlot_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBaseBoardSlot_h_Statics::EnumInfo[] = {
		{ EColliderMaterialType_StaticEnum, TEXT("EColliderMaterialType"), &Z_Registration_Info_UEnum_EColliderMaterialType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1533810519U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBaseBoardSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameBaseBoardSlot, UGameBaseBoardSlot::StaticClass, TEXT("UGameBaseBoardSlot"), &Z_Registration_Info_UClass_UGameBaseBoardSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameBaseBoardSlot), 2226368356U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBaseBoardSlot_h_28240149(TEXT("/Script/BoardGames"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBaseBoardSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBaseBoardSlot_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBaseBoardSlot_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBaseBoardSlot_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
