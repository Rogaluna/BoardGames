// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChineseChess/ChineseChessPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AChineseChessManager;
class UChineseChessBoardSlot;
enum class EChineseChessPawnState : uint8;
#ifdef BOARDGAMEDERIVED_ChineseChessPawn_generated_h
#error "ChineseChessPawn.generated.h already included, missing '#pragma once' in ChineseChessPawn.h"
#endif
#define BOARDGAMEDERIVED_ChineseChessPawn_generated_h

#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_SPARSE_DATA
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupSlot); \
	DECLARE_FUNCTION(execGetSlotPos); \
	DECLARE_FUNCTION(execGetSlot); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetGameManagerPtr); \
	DECLARE_FUNCTION(execGetPawnType); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execOnRep_ChangeState);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupSlot); \
	DECLARE_FUNCTION(execGetSlotPos); \
	DECLARE_FUNCTION(execGetSlot); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetGameManagerPtr); \
	DECLARE_FUNCTION(execGetPawnType); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execOnRep_ChangeState);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_ACCESSORS
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_CALLBACK_WRAPPERS
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChineseChessPawn(); \
	friend struct Z_Construct_UClass_AChineseChessPawn_Statics; \
public: \
	DECLARE_CLASS(AChineseChessPawn, AGameBasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoardGameDerived"), NO_API) \
	DECLARE_SERIALIZER(AChineseChessPawn) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		GameManagerPtr, \
		NETFIELD_REP_END=GameManagerPtr	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_INCLASS \
private: \
	static void StaticRegisterNativesAChineseChessPawn(); \
	friend struct Z_Construct_UClass_AChineseChessPawn_Statics; \
public: \
	DECLARE_CLASS(AChineseChessPawn, AGameBasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoardGameDerived"), NO_API) \
	DECLARE_SERIALIZER(AChineseChessPawn) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		GameManagerPtr, \
		NETFIELD_REP_END=GameManagerPtr	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChineseChessPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChineseChessPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChineseChessPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChineseChessPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChineseChessPawn(AChineseChessPawn&&); \
	NO_API AChineseChessPawn(const AChineseChessPawn&); \
public: \
	NO_API virtual ~AChineseChessPawn();


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChineseChessPawn(AChineseChessPawn&&); \
	NO_API AChineseChessPawn(const AChineseChessPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChineseChessPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChineseChessPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChineseChessPawn) \
	NO_API virtual ~AChineseChessPawn();


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_42_PROLOG
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_SPARSE_DATA \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_RPC_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_ACCESSORS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_CALLBACK_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_INCLASS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_SPARSE_DATA \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_ACCESSORS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_CALLBACK_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_INCLASS_NO_PURE_DECLS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOARDGAMEDERIVED_API UClass* StaticClass<class AChineseChessPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessPawn_h


#define FOREACH_ENUM_ECHINESECHESSPAWNSTATE(op) \
	op(EChineseChessPawnState::None) \
	op(EChineseChessPawnState::Absence) \
	op(EChineseChessPawnState::Idle) \
	op(EChineseChessPawnState::Selected) \
	op(EChineseChessPawnState::Dead) 

enum class EChineseChessPawnState : uint8;
template<> struct TIsUEnumClass<EChineseChessPawnState> { enum { Value = true }; };
template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessPawnState>();

#define FOREACH_ENUM_ECHINESECHESSCAMP(op) \
	op(EChineseChessCamp::None) \
	op(EChineseChessCamp::Chu) \
	op(EChineseChessCamp::Han) 

enum class EChineseChessCamp : uint8;
template<> struct TIsUEnumClass<EChineseChessCamp> { enum { Value = true }; };
template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessCamp>();

#define FOREACH_ENUM_ECHINESECHESSCONTROLPOWER(op) \
	op(EChineseChessControlPower::None) \
	op(EChineseChessControlPower::Team) \
	op(EChineseChessControlPower::Enemy) \
	op(EChineseChessControlPower::All) 

enum class EChineseChessControlPower : uint8;
template<> struct TIsUEnumClass<EChineseChessControlPower> { enum { Value = true }; };
template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessControlPower>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
