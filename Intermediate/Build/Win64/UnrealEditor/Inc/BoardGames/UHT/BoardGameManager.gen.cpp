// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardGames/Public/Helper/BoardGameManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardGameManager() {}
// Cross Module References
	BOARDGAMES_API UClass* Z_Construct_UClass_ABoardGameManager();
	BOARDGAMES_API UClass* Z_Construct_UClass_ABoardGameManager_NoRegister();
	BOARDGAMES_API UClass* Z_Construct_UClass_AGameBaseBoard_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BoardGames();
// End Cross Module References
	DEFINE_FUNCTION(ABoardGameManager::execGetBoard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameBaseBoard**)Z_Param__Result=P_THIS->GetBoard();
		P_NATIVE_END;
	}
	void ABoardGameManager::StaticRegisterNativesABoardGameManager()
	{
		UClass* Class = ABoardGameManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoard", &ABoardGameManager::execGetBoard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoardGameManager_GetBoard_Statics
	{
		struct BoardGameManager_eventGetBoard_Parms
		{
			AGameBaseBoard* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoardGameManager_GetBoard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BoardGameManager_eventGetBoard_Parms, ReturnValue), Z_Construct_UClass_AGameBaseBoard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardGameManager_GetBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardGameManager_GetBoard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoardGameManager_GetBoard_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\xa3\x8b\xe7\x9b\x98" },
		{ "ModuleRelativePath", "Public/Helper/BoardGameManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardGameManager_GetBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardGameManager, nullptr, "GetBoard", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABoardGameManager_GetBoard_Statics::BoardGameManager_eventGetBoard_Parms), Z_Construct_UFunction_ABoardGameManager_GetBoard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardGameManager_GetBoard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoardGameManager_GetBoard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardGameManager_GetBoard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoardGameManager_GetBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardGameManager_GetBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoardGameManager);
	UClass* Z_Construct_UClass_ABoardGameManager_NoRegister()
	{
		return ABoardGameManager::StaticClass();
	}
	struct Z_Construct_UClass_ABoardGameManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoardGameManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardGames,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoardGameManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoardGameManager_GetBoard, "GetBoard" }, // 1366098333
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardGameManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Helper/BoardGameManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Helper/BoardGameManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoardGameManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoardGameManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoardGameManager_Statics::ClassParams = {
		&ABoardGameManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoardGameManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoardGameManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoardGameManager()
	{
		if (!Z_Registration_Info_UClass_ABoardGameManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoardGameManager.OuterSingleton, Z_Construct_UClass_ABoardGameManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoardGameManager.OuterSingleton;
	}
	template<> BOARDGAMES_API UClass* StaticClass<ABoardGameManager>()
	{
		return ABoardGameManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoardGameManager);
	ABoardGameManager::~ABoardGameManager() {}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoardGameManager, ABoardGameManager::StaticClass, TEXT("ABoardGameManager"), &Z_Registration_Info_UClass_ABoardGameManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoardGameManager), 774327308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameManager_h_3207925136(TEXT("/Script/BoardGames"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
