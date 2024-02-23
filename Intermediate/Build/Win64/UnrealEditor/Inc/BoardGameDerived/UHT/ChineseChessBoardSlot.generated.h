// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChineseChess/ChineseChessBoardSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
enum class EHeightLightType : uint8;
struct FKey;
#ifdef BOARDGAMEDERIVED_ChineseChessBoardSlot_generated_h
#error "ChineseChessBoardSlot.generated.h already included, missing '#pragma once' in ChineseChessBoardSlot.h"
#endif
#define BOARDGAMEDERIVED_ChineseChessBoardSlot_generated_h

#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_SPARSE_DATA
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMeshComponentClicked); \
	DECLARE_FUNCTION(execGetSlotPos); \
	DECLARE_FUNCTION(execSetHeightLight);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMeshComponentClicked); \
	DECLARE_FUNCTION(execGetSlotPos); \
	DECLARE_FUNCTION(execSetHeightLight);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_ACCESSORS
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChineseChessBoardSlot(); \
	friend struct Z_Construct_UClass_UChineseChessBoardSlot_Statics; \
public: \
	DECLARE_CLASS(UChineseChessBoardSlot, UGameBaseBoardSlot, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoardGameDerived"), NO_API) \
	DECLARE_SERIALIZER(UChineseChessBoardSlot)


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUChineseChessBoardSlot(); \
	friend struct Z_Construct_UClass_UChineseChessBoardSlot_Statics; \
public: \
	DECLARE_CLASS(UChineseChessBoardSlot, UGameBaseBoardSlot, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoardGameDerived"), NO_API) \
	DECLARE_SERIALIZER(UChineseChessBoardSlot)


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChineseChessBoardSlot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChineseChessBoardSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChineseChessBoardSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChineseChessBoardSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChineseChessBoardSlot(UChineseChessBoardSlot&&); \
	NO_API UChineseChessBoardSlot(const UChineseChessBoardSlot&); \
public: \
	NO_API virtual ~UChineseChessBoardSlot();


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChineseChessBoardSlot(UChineseChessBoardSlot&&); \
	NO_API UChineseChessBoardSlot(const UChineseChessBoardSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChineseChessBoardSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChineseChessBoardSlot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChineseChessBoardSlot) \
	NO_API virtual ~UChineseChessBoardSlot();


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_25_PROLOG
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_SPARSE_DATA \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_RPC_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_ACCESSORS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_INCLASS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_SPARSE_DATA \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_ACCESSORS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_INCLASS_NO_PURE_DECLS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOARDGAMEDERIVED_API UClass* StaticClass<class UChineseChessBoardSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoardSlot_h


#define FOREACH_ENUM_EHEIGHTLIGHTTYPE(op) \
	op(EHeightLightType::None) \
	op(EHeightLightType::SelectedPreMove) \
	op(EHeightLightType::SelectedUnableMove) \
	op(EHeightLightType::MovablePos) \
	op(EHeightLightType::Dangerous) 

enum class EHeightLightType : uint8;
template<> struct TIsUEnumClass<EHeightLightType> { enum { Value = true }; };
template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EHeightLightType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
