// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardGames/Public/GameBasePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameBasePawn() {}
// Cross Module References
	BOARDGAMES_API UClass* Z_Construct_UClass_AGameBasePawn();
	BOARDGAMES_API UClass* Z_Construct_UClass_AGameBasePawn_NoRegister();
	BOARDGAMES_API UClass* Z_Construct_UClass_UBoardGameInteract_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionResponse();
	UPackage* Z_Construct_UPackage__Script_BoardGames();
// End Cross Module References
	DEFINE_FUNCTION(AGameBasePawn::execSetChannelEffect)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Channel);
		P_GET_PROPERTY(FByteProperty,Z_Param_ECR);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChannelEffect(ECollisionChannel(Z_Param_Channel),ECollisionResponse(Z_Param_ECR));
		P_NATIVE_END;
	}
	void AGameBasePawn::StaticRegisterNativesAGameBasePawn()
	{
		UClass* Class = AGameBasePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetChannelEffect", &AGameBasePawn::execSetChannelEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameBasePawn_SetChannelEffect_Statics
	{
		struct GameBasePawn_eventSetChannelEffect_Parms
		{
			TEnumAsByte<ECollisionChannel> Channel;
			TEnumAsByte<ECollisionResponse> ECR;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ECR;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGameBasePawn_SetChannelEffect_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameBasePawn_eventSetChannelEffect_Parms, Channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) }; // 727872708
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGameBasePawn_SetChannelEffect_Statics::NewProp_ECR = { "ECR", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameBasePawn_eventSetChannelEffect_Parms, ECR), Z_Construct_UEnum_Engine_ECollisionResponse, METADATA_PARAMS(nullptr, 0) }; // 892948784
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameBasePawn_SetChannelEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameBasePawn_SetChannelEffect_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameBasePawn_SetChannelEffect_Statics::NewProp_ECR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameBasePawn_SetChannelEffect_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xae\xe9\x80\x9a\xe9\x81\x93\xe5\x8f\xaf\xe8\xa2\xab\xe6\xa3\x80\xe6\xb5\x8b\xe6\x80\xa7" },
		{ "ModuleRelativePath", "Public/GameBasePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameBasePawn_SetChannelEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameBasePawn, nullptr, "SetChannelEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameBasePawn_SetChannelEffect_Statics::GameBasePawn_eventSetChannelEffect_Parms), Z_Construct_UFunction_AGameBasePawn_SetChannelEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameBasePawn_SetChannelEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameBasePawn_SetChannelEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameBasePawn_SetChannelEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameBasePawn_SetChannelEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameBasePawn_SetChannelEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameBasePawn);
	UClass* Z_Construct_UClass_AGameBasePawn_NoRegister()
	{
		return AGameBasePawn::StaticClass();
	}
	struct Z_Construct_UClass_AGameBasePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChessPawnMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChessPawnMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameBasePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardGames,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameBasePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameBasePawn_SetChannelEffect, "SetChannelEffect" }, // 3145422105
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameBasePawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe6\x9c\x80\xe5\x9f\xba\xe7\xa1\x80\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xef\xbc\x8c\xe5\xb9\xb6\xe4\xb8\x8d\xe4\xbc\x9a\xe6\x9c\x89\xe6\xa3\x8b\xe7\x9b\x98\xe7\x9a\x84\xe5\xbc\x95\xe7\x94\xa8\xef\xbc\x8c\n * \xe8\xbf\x99\xe4\xb8\xaa\xe6\xa3\x8b\xe5\xad\x90\xe5\x9f\xba\xe7\xb1\xbb\xe4\xbb\x85\xe4\xbb\x85\xe6\x98\xaf\xe4\xb8\x80\xe5\xb0\x8f\xe5\x9d\x97\xe6\x9c\xa8\xe5\x9d\x97\xef\xbc\x8c\xe5\xb9\xb6\xe6\xb2\xa1\xe6\x9c\x89\xe6\x8c\x87\xe5\xae\x9a\xe5\xae\x83\xe5\xba\x94\xe8\xaf\xa5\xe6\x98\xaf\xe5\x93\xaa\xe7\xa7\x8d\xe6\xa3\x8b\xe7\x9b\x98\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xef\xbc\x8c\n * \xe5\x9b\xa0\xe6\xad\xa4\xef\xbc\x8c\xe4\xbb\x85\xe5\x9c\xa8\xe6\xad\xa4\xe5\xae\x9a\xe4\xb9\x89\xe6\x9c\xaa\xe5\x89\x8a\xe5\x88\x87\xe6\x88\x90\xe6\xa3\x8b\xe5\xad\x90\xe7\x9a\x84\xe6\x9c\xa8\xe5\x9d\x97\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe5\x92\x8c\xe6\x96\xb9\xe6\xb3\x95\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameBasePawn.h" },
		{ "ModuleRelativePath", "Public/GameBasePawn.h" },
		{ "ToolTip", "\xe6\x9c\x80\xe5\x9f\xba\xe7\xa1\x80\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xef\xbc\x8c\xe5\xb9\xb6\xe4\xb8\x8d\xe4\xbc\x9a\xe6\x9c\x89\xe6\xa3\x8b\xe7\x9b\x98\xe7\x9a\x84\xe5\xbc\x95\xe7\x94\xa8\xef\xbc\x8c\n\xe8\xbf\x99\xe4\xb8\xaa\xe6\xa3\x8b\xe5\xad\x90\xe5\x9f\xba\xe7\xb1\xbb\xe4\xbb\x85\xe4\xbb\x85\xe6\x98\xaf\xe4\xb8\x80\xe5\xb0\x8f\xe5\x9d\x97\xe6\x9c\xa8\xe5\x9d\x97\xef\xbc\x8c\xe5\xb9\xb6\xe6\xb2\xa1\xe6\x9c\x89\xe6\x8c\x87\xe5\xae\x9a\xe5\xae\x83\xe5\xba\x94\xe8\xaf\xa5\xe6\x98\xaf\xe5\x93\xaa\xe7\xa7\x8d\xe6\xa3\x8b\xe7\x9b\x98\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xef\xbc\x8c\n\xe5\x9b\xa0\xe6\xad\xa4\xef\xbc\x8c\xe4\xbb\x85\xe5\x9c\xa8\xe6\xad\xa4\xe5\xae\x9a\xe4\xb9\x89\xe6\x9c\xaa\xe5\x89\x8a\xe5\x88\x87\xe6\x88\x90\xe6\xa3\x8b\xe5\xad\x90\xe7\x9a\x84\xe6\x9c\xa8\xe5\x9d\x97\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe5\x92\x8c\xe6\x96\xb9\xe6\xb3\x95" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameBasePawn_Statics::NewProp_ChessPawnMesh_MetaData[] = {
		{ "Category", "\xe5\xb1\x9e\xe6\x80\xa7" },
		{ "Comment", "/** \xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\xbb\x84\xe4\xbb\xb6 */" },
		{ "DisplayName", "\xe6\xa3\x8b\xe5\xad\x90\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameBasePawn.h" },
		{ "ToolTip", "\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameBasePawn_Statics::NewProp_ChessPawnMesh = { "ChessPawnMesh", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameBasePawn, ChessPawnMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameBasePawn_Statics::NewProp_ChessPawnMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameBasePawn_Statics::NewProp_ChessPawnMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameBasePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameBasePawn_Statics::NewProp_ChessPawnMesh,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGameBasePawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBoardGameInteract_NoRegister, (int32)VTABLE_OFFSET(AGameBasePawn, IBoardGameInteract), false },  // 3636419268
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameBasePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameBasePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameBasePawn_Statics::ClassParams = {
		&AGameBasePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameBasePawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameBasePawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameBasePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameBasePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameBasePawn()
	{
		if (!Z_Registration_Info_UClass_AGameBasePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameBasePawn.OuterSingleton, Z_Construct_UClass_AGameBasePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameBasePawn.OuterSingleton;
	}
	template<> BOARDGAMES_API UClass* StaticClass<AGameBasePawn>()
	{
		return AGameBasePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameBasePawn);
	AGameBasePawn::~AGameBasePawn() {}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBasePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBasePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameBasePawn, AGameBasePawn::StaticClass, TEXT("AGameBasePawn"), &Z_Registration_Info_UClass_AGameBasePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameBasePawn), 3755032085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBasePawn_h_1346295393(TEXT("/Script/BoardGames"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBasePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_GameBasePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
