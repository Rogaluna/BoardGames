// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardGames/Public/Helper/BoardGameInteract.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardGameInteract() {}
// Cross Module References
	BOARDGAMES_API UClass* Z_Construct_UClass_UBoardGameInteract();
	BOARDGAMES_API UClass* Z_Construct_UClass_UBoardGameInteract_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BoardGames();
// End Cross Module References
	DEFINE_FUNCTION(IBoardGameInteract::execOnMouseLeave)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseLeave_Implementation(Z_Param_PlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBoardGameInteract::execOnMouseEnter)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseEnter_Implementation(Z_Param_PlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBoardGameInteract::execOnMouseClicked)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseClicked_Implementation(Z_Param_PlayerState);
		P_NATIVE_END;
	}
	struct BoardGameInteract_eventOnMouseClicked_Parms
	{
		APlayerState* PlayerState;
	};
	struct BoardGameInteract_eventOnMouseEnter_Parms
	{
		APlayerState* PlayerState;
	};
	struct BoardGameInteract_eventOnMouseLeave_Parms
	{
		APlayerState* PlayerState;
	};
	void IBoardGameInteract::OnMouseClicked(APlayerState* PlayerState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnMouseClicked instead.");
	}
	void IBoardGameInteract::OnMouseEnter(APlayerState* PlayerState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnMouseEnter instead.");
	}
	void IBoardGameInteract::OnMouseLeave(APlayerState* PlayerState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnMouseLeave instead.");
	}
	void UBoardGameInteract::StaticRegisterNativesUBoardGameInteract()
	{
		UClass* Class = UBoardGameInteract::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMouseClicked", &IBoardGameInteract::execOnMouseClicked },
			{ "OnMouseEnter", &IBoardGameInteract::execOnMouseEnter },
			{ "OnMouseLeave", &IBoardGameInteract::execOnMouseLeave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoardGameInteract_OnMouseClicked_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoardGameInteract_OnMouseClicked_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BoardGameInteract_eventOnMouseClicked_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoardGameInteract_OnMouseClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoardGameInteract_OnMouseClicked_Statics::NewProp_PlayerState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoardGameInteract_OnMouseClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Helper/BoardGameInteract.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoardGameInteract_OnMouseClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoardGameInteract, nullptr, "OnMouseClicked", nullptr, nullptr, sizeof(BoardGameInteract_eventOnMouseClicked_Parms), Z_Construct_UFunction_UBoardGameInteract_OnMouseClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoardGameInteract_OnMouseClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoardGameInteract_OnMouseClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoardGameInteract_OnMouseClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoardGameInteract_OnMouseClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoardGameInteract_OnMouseClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoardGameInteract_OnMouseEnter_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoardGameInteract_OnMouseEnter_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BoardGameInteract_eventOnMouseEnter_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoardGameInteract_OnMouseEnter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoardGameInteract_OnMouseEnter_Statics::NewProp_PlayerState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoardGameInteract_OnMouseEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Helper/BoardGameInteract.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoardGameInteract_OnMouseEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoardGameInteract, nullptr, "OnMouseEnter", nullptr, nullptr, sizeof(BoardGameInteract_eventOnMouseEnter_Parms), Z_Construct_UFunction_UBoardGameInteract_OnMouseEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoardGameInteract_OnMouseEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoardGameInteract_OnMouseEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoardGameInteract_OnMouseEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoardGameInteract_OnMouseEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoardGameInteract_OnMouseEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoardGameInteract_OnMouseLeave_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoardGameInteract_OnMouseLeave_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BoardGameInteract_eventOnMouseLeave_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoardGameInteract_OnMouseLeave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoardGameInteract_OnMouseLeave_Statics::NewProp_PlayerState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoardGameInteract_OnMouseLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Helper/BoardGameInteract.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoardGameInteract_OnMouseLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoardGameInteract, nullptr, "OnMouseLeave", nullptr, nullptr, sizeof(BoardGameInteract_eventOnMouseLeave_Parms), Z_Construct_UFunction_UBoardGameInteract_OnMouseLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoardGameInteract_OnMouseLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoardGameInteract_OnMouseLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoardGameInteract_OnMouseLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoardGameInteract_OnMouseLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoardGameInteract_OnMouseLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoardGameInteract);
	UClass* Z_Construct_UClass_UBoardGameInteract_NoRegister()
	{
		return UBoardGameInteract::StaticClass();
	}
	struct Z_Construct_UClass_UBoardGameInteract_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoardGameInteract_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardGames,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoardGameInteract_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoardGameInteract_OnMouseClicked, "OnMouseClicked" }, // 2415441785
		{ &Z_Construct_UFunction_UBoardGameInteract_OnMouseEnter, "OnMouseEnter" }, // 3302710294
		{ &Z_Construct_UFunction_UBoardGameInteract_OnMouseLeave, "OnMouseLeave" }, // 2161023948
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardGameInteract_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Helper/BoardGameInteract.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoardGameInteract_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBoardGameInteract>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoardGameInteract_Statics::ClassParams = {
		&UBoardGameInteract::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBoardGameInteract_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardGameInteract_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoardGameInteract()
	{
		if (!Z_Registration_Info_UClass_UBoardGameInteract.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoardGameInteract.OuterSingleton, Z_Construct_UClass_UBoardGameInteract_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoardGameInteract.OuterSingleton;
	}
	template<> BOARDGAMES_API UClass* StaticClass<UBoardGameInteract>()
	{
		return UBoardGameInteract::StaticClass();
	}
	UBoardGameInteract::UBoardGameInteract(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoardGameInteract);
	UBoardGameInteract::~UBoardGameInteract() {}
	static FName NAME_UBoardGameInteract_OnMouseClicked = FName(TEXT("OnMouseClicked"));
	void IBoardGameInteract::Execute_OnMouseClicked(UObject* O, APlayerState* PlayerState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBoardGameInteract::StaticClass()));
		BoardGameInteract_eventOnMouseClicked_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBoardGameInteract_OnMouseClicked);
		if (Func)
		{
			Parms.PlayerState=PlayerState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBoardGameInteract*)(O->GetNativeInterfaceAddress(UBoardGameInteract::StaticClass())))
		{
			I->OnMouseClicked_Implementation(PlayerState);
		}
	}
	static FName NAME_UBoardGameInteract_OnMouseEnter = FName(TEXT("OnMouseEnter"));
	void IBoardGameInteract::Execute_OnMouseEnter(UObject* O, APlayerState* PlayerState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBoardGameInteract::StaticClass()));
		BoardGameInteract_eventOnMouseEnter_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBoardGameInteract_OnMouseEnter);
		if (Func)
		{
			Parms.PlayerState=PlayerState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBoardGameInteract*)(O->GetNativeInterfaceAddress(UBoardGameInteract::StaticClass())))
		{
			I->OnMouseEnter_Implementation(PlayerState);
		}
	}
	static FName NAME_UBoardGameInteract_OnMouseLeave = FName(TEXT("OnMouseLeave"));
	void IBoardGameInteract::Execute_OnMouseLeave(UObject* O, APlayerState* PlayerState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBoardGameInteract::StaticClass()));
		BoardGameInteract_eventOnMouseLeave_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBoardGameInteract_OnMouseLeave);
		if (Func)
		{
			Parms.PlayerState=PlayerState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBoardGameInteract*)(O->GetNativeInterfaceAddress(UBoardGameInteract::StaticClass())))
		{
			I->OnMouseLeave_Implementation(PlayerState);
		}
	}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoardGameInteract, UBoardGameInteract::StaticClass, TEXT("UBoardGameInteract"), &Z_Registration_Info_UClass_UBoardGameInteract, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoardGameInteract), 3636419268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_108458887(TEXT("/Script/BoardGames"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
