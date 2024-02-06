// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardGames/Public/Helper/BoardGameSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardGameSet() {}
// Cross Module References
	BOARDGAMES_API UClass* Z_Construct_UClass_UBoardGameSet();
	BOARDGAMES_API UClass* Z_Construct_UClass_UBoardGameSet_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BoardGames();
// End Cross Module References
	void UBoardGameSet::StaticRegisterNativesUBoardGameSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoardGameSet);
	UClass* Z_Construct_UClass_UBoardGameSet_NoRegister()
	{
		return UBoardGameSet::StaticClass();
	}
	struct Z_Construct_UClass_UBoardGameSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoardGameSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardGames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardGameSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \xe4\xb8\xbb\xe8\xa6\x81\xe6\x98\xaf\xe7\x94\xa8\xe4\xba\x8e\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\xa3\x8b\xe7\x9b\x98\xe6\xa3\x8b\xe5\xad\x90\xe4\xbd\x8d\xe7\xbd\xae\xef\xbc\x8c\n */" },
		{ "IncludePath", "Helper/BoardGameSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Helper/BoardGameSet.h" },
		{ "ToolTip", "\xe4\xb8\xbb\xe8\xa6\x81\xe6\x98\xaf\xe7\x94\xa8\xe4\xba\x8e\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\xa3\x8b\xe7\x9b\x98\xe6\xa3\x8b\xe5\xad\x90\xe4\xbd\x8d\xe7\xbd\xae\xef\xbc\x8c" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoardGameSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoardGameSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoardGameSet_Statics::ClassParams = {
		&UBoardGameSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBoardGameSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardGameSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoardGameSet()
	{
		if (!Z_Registration_Info_UClass_UBoardGameSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoardGameSet.OuterSingleton, Z_Construct_UClass_UBoardGameSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoardGameSet.OuterSingleton;
	}
	template<> BOARDGAMES_API UClass* StaticClass<UBoardGameSet>()
	{
		return UBoardGameSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoardGameSet);
	UBoardGameSet::~UBoardGameSet() {}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoardGameSet, UBoardGameSet::StaticClass, TEXT("UBoardGameSet"), &Z_Registration_Info_UClass_UBoardGameSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoardGameSet), 653287071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameSet_h_799997632(TEXT("/Script/BoardGames"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
