// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChineseChess/Helper/ChineseChessBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AChineseChessManager;
class APlayerState;
enum class EChineseChessPlayer : uint8;
#ifdef BOARDGAMEDERIVED_ChineseChessBlueprintFunctionLibrary_generated_h
#error "ChineseChessBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in ChineseChessBlueprintFunctionLibrary.h"
#endif
#define BOARDGAMEDERIVED_ChineseChessBlueprintFunctionLibrary_generated_h

#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_SPARSE_DATA
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAssessControl); \
	DECLARE_FUNCTION(execIsBelongTo_Han); \
	DECLARE_FUNCTION(execIsBelongTo_Chu); \
	DECLARE_FUNCTION(execDecode); \
	DECLARE_FUNCTION(execEncode);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAssessControl); \
	DECLARE_FUNCTION(execIsBelongTo_Han); \
	DECLARE_FUNCTION(execIsBelongTo_Chu); \
	DECLARE_FUNCTION(execDecode); \
	DECLARE_FUNCTION(execEncode);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_ACCESSORS
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChineseChessSetFunctionLibrary(); \
	friend struct Z_Construct_UClass_UChineseChessSetFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UChineseChessSetFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BoardGameDerived"), NO_API) \
	DECLARE_SERIALIZER(UChineseChessSetFunctionLibrary)


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUChineseChessSetFunctionLibrary(); \
	friend struct Z_Construct_UClass_UChineseChessSetFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UChineseChessSetFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BoardGameDerived"), NO_API) \
	DECLARE_SERIALIZER(UChineseChessSetFunctionLibrary)


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChineseChessSetFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChineseChessSetFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChineseChessSetFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChineseChessSetFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChineseChessSetFunctionLibrary(UChineseChessSetFunctionLibrary&&); \
	NO_API UChineseChessSetFunctionLibrary(const UChineseChessSetFunctionLibrary&); \
public: \
	NO_API virtual ~UChineseChessSetFunctionLibrary();


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChineseChessSetFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChineseChessSetFunctionLibrary(UChineseChessSetFunctionLibrary&&); \
	NO_API UChineseChessSetFunctionLibrary(const UChineseChessSetFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChineseChessSetFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChineseChessSetFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChineseChessSetFunctionLibrary) \
	NO_API virtual ~UChineseChessSetFunctionLibrary();


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_8_PROLOG
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_SPARSE_DATA \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_RPC_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_ACCESSORS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_INCLASS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_SPARSE_DATA \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_ACCESSORS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOARDGAMEDERIVED_API UClass* StaticClass<class UChineseChessSetFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
