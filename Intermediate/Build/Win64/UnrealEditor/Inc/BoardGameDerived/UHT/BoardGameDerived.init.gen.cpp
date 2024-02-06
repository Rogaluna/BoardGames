// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardGameDerived_init() {}
	BOARDGAMEDERIVED_API UFunction* Z_Construct_UDelegateFunction_AChineseChessBoard_PlayerEnterDelegate__DelegateSignature();
	BOARDGAMEDERIVED_API UFunction* Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BoardGameDerived;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BoardGameDerived()
	{
		if (!Z_Registration_Info_UPackage__Script_BoardGameDerived.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AChineseChessBoard_PlayerEnterDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AChineseChessBoard_SlotClickedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BoardGameDerived",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x79C848DE,
				0x70683EF1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BoardGameDerived.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BoardGameDerived.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BoardGameDerived(Z_Construct_UPackage__Script_BoardGameDerived, TEXT("/Script/BoardGameDerived"), Z_Registration_Info_UPackage__Script_BoardGameDerived, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x79C848DE, 0x70683EF1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
