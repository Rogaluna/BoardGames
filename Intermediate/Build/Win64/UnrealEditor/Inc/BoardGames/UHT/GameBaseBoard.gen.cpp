// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardGames/Public/GameBaseBoard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameBaseBoard() {}
// Cross Module References
	BOARDGAMES_API UClass* Z_Construct_UClass_AGameBaseBoard();
	BOARDGAMES_API UClass* Z_Construct_UClass_AGameBaseBoard_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BoardGames();
// End Cross Module References
	void AGameBaseBoard::StaticRegisterNativesAGameBaseBoard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameBaseBoard);
	UClass* Z_Construct_UClass_AGameBaseBoard_NoRegister()
	{
		return AGameBaseBoard::StaticClass();
	}
	struct Z_Construct_UClass_AGameBaseBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChessBoardMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChessBoardMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameBaseBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardGames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameBaseBoard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe5\x9f\xba\xe7\xa1\x80\xe7\x9a\x84\xe6\xa3\x8b\xe7\x9b\x98\xe5\xba\x94\xe8\xaf\xa5\xe5\x8f\xaa\xe6\x98\xaf\xe5\x95\xa5\xe4\xb9\x9f\xe6\xb2\xa1\xe6\x9c\x89\xe7\x9a\x84\xe4\xb8\x80\xe5\x9d\x97\xe6\x9d\xbf\xe5\xad\x90\xe3\x80\x82\n * \xe6\xb2\xa1\xe6\x9c\x89\xe8\xa7\x84\xe5\x88\x92\xef\xbc\x8c\xe8\x87\xaa\xe7\x84\xb6\xe4\xb9\x9f\xe5\xb0\xb1\xe4\xb8\x8d\xe4\xbc\x9a\xe6\x9c\x89\xe6\xa3\x8b\xe5\xad\x90\xe6\xa7\xbd\xe4\xbd\x8d\xe3\x80\x81\xe6\xa3\x8b\xe7\x9b\x98\xe5\xa4\xa7\xe5\xb0\x8f\xe8\xbf\x99\xe4\xba\x9b\xe7\x9c\x8b\xe4\xb8\x8a\xe5\x8e\xbb\xe5\xba\x94\xe8\xaf\xa5\xe5\xa4\x84\xe4\xba\x8e\xe6\xa3\x8b\xe7\x9b\x98\xe9\xa1\xb6\xe7\xba\xa7\xe7\x88\xb6\xe7\xb1\xbb\xe4\xb8\xad\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\n */" },
		{ "IncludePath", "GameBaseBoard.h" },
		{ "ModuleRelativePath", "Public/GameBaseBoard.h" },
		{ "ToolTip", "\xe5\x9f\xba\xe7\xa1\x80\xe7\x9a\x84\xe6\xa3\x8b\xe7\x9b\x98\xe5\xba\x94\xe8\xaf\xa5\xe5\x8f\xaa\xe6\x98\xaf\xe5\x95\xa5\xe4\xb9\x9f\xe6\xb2\xa1\xe6\x9c\x89\xe7\x9a\x84\xe4\xb8\x80\xe5\x9d\x97\xe6\x9d\xbf\xe5\xad\x90\xe3\x80\x82\n\xe6\xb2\xa1\xe6\x9c\x89\xe8\xa7\x84\xe5\x88\x92\xef\xbc\x8c\xe8\x87\xaa\xe7\x84\xb6\xe4\xb9\x9f\xe5\xb0\xb1\xe4\xb8\x8d\xe4\xbc\x9a\xe6\x9c\x89\xe6\xa3\x8b\xe5\xad\x90\xe6\xa7\xbd\xe4\xbd\x8d\xe3\x80\x81\xe6\xa3\x8b\xe7\x9b\x98\xe5\xa4\xa7\xe5\xb0\x8f\xe8\xbf\x99\xe4\xba\x9b\xe7\x9c\x8b\xe4\xb8\x8a\xe5\x8e\xbb\xe5\xba\x94\xe8\xaf\xa5\xe5\xa4\x84\xe4\xba\x8e\xe6\xa3\x8b\xe7\x9b\x98\xe9\xa1\xb6\xe7\xba\xa7\xe7\x88\xb6\xe7\xb1\xbb\xe4\xb8\xad\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameBaseBoard_Statics::NewProp_ChessBoardMesh_MetaData[] = {
		{ "Category", "\xe5\xb1\x9e\xe6\x80\xa7" },
		{ "DisplayName", "\xe6\xa3\x8b\xe7\x9b\x98\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameBaseBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameBaseBoard_Statics::NewProp_ChessBoardMesh = { "ChessBoardMesh", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameBaseBoard, ChessBoardMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameBaseBoard_Statics::NewProp_ChessBoardMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameBaseBoard_Statics::NewProp_ChessBoardMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameBaseBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameBaseBoard_Statics::NewProp_ChessBoardMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameBaseBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameBaseBoard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameBaseBoard_Statics::ClassParams = {
		&AGameBaseBoard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameBaseBoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameBaseBoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameBaseBoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameBaseBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameBaseBoard()
	{
		if (!Z_Registration_Info_UClass_AGameBaseBoard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameBaseBoard.OuterSingleton, Z_Construct_UClass_AGameBaseBoard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameBaseBoard.OuterSingleton;
	}
	template<> BOARDGAMES_API UClass* StaticClass<AGameBaseBoard>()
	{
		return AGameBaseBoard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameBaseBoard);
	AGameBaseBoard::~AGameBaseBoard() {}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBaseBoard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBaseBoard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameBaseBoard, AGameBaseBoard::StaticClass, TEXT("AGameBaseBoard"), &Z_Registration_Info_UClass_AGameBaseBoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameBaseBoard), 2071995884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBaseBoard_h_2548356904(TEXT("/Script/BoardGames"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBaseBoard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBaseBoard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
