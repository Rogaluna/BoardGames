// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChineseChess/Helper/ChineseChessManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AChineseChessPawn;
class APlayerState;
class UChineseChessHistoryRecorder;
enum class EChineseChessPlayer : uint8;
enum class EChineseChessPlayerSeated : uint8;
enum class EChineseChessRoundState : uint8;
#ifdef BOARDGAMEDERIVED_ChineseChessManager_generated_h
#error "ChineseChessManager.generated.h already included, missing '#pragma once' in ChineseChessManager.h"
#endif
#define BOARDGAMEDERIVED_ChineseChessManager_generated_h

#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_SPARSE_DATA
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_RPC_WRAPPERS \
	virtual void Multicast_OnPlayerLeave_Implementation(APlayerState* Player, EChineseChessPlayer Type); \
	virtual void Multicast_OnPlayerSeated_Implementation(APlayerState* Player, EChineseChessPlayer Type); \
 \
	DECLARE_FUNCTION(execSerializeBoard); \
	DECLARE_FUNCTION(execOnPawnDead); \
	DECLARE_FUNCTION(execOnPawnMoved); \
	DECLARE_FUNCTION(execSwitchCamp); \
	DECLARE_FUNCTION(execGiveUp); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execGameStart); \
	DECLARE_FUNCTION(execIsSeating); \
	DECLARE_FUNCTION(execGetPlayerCamp); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execPlayerLeave); \
	DECLARE_FUNCTION(execPlayerSeated); \
	DECLARE_FUNCTION(execGetRemainPlayer); \
	DECLARE_FUNCTION(execGetHistoryRecorder); \
	DECLARE_FUNCTION(execMulticast_OnPlayerLeave); \
	DECLARE_FUNCTION(execMulticast_OnPlayerSeated);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnPlayerLeave_Implementation(APlayerState* Player, EChineseChessPlayer Type); \
	virtual void Multicast_OnPlayerSeated_Implementation(APlayerState* Player, EChineseChessPlayer Type); \
 \
	DECLARE_FUNCTION(execSerializeBoard); \
	DECLARE_FUNCTION(execOnPawnDead); \
	DECLARE_FUNCTION(execOnPawnMoved); \
	DECLARE_FUNCTION(execSwitchCamp); \
	DECLARE_FUNCTION(execGiveUp); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execGameStart); \
	DECLARE_FUNCTION(execIsSeating); \
	DECLARE_FUNCTION(execGetPlayerCamp); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execPlayerLeave); \
	DECLARE_FUNCTION(execPlayerSeated); \
	DECLARE_FUNCTION(execGetRemainPlayer); \
	DECLARE_FUNCTION(execGetHistoryRecorder); \
	DECLARE_FUNCTION(execMulticast_OnPlayerLeave); \
	DECLARE_FUNCTION(execMulticast_OnPlayerSeated);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_ACCESSORS
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_CALLBACK_WRAPPERS
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChineseChessManager(); \
	friend struct Z_Construct_UClass_AChineseChessManager_Statics; \
public: \
	DECLARE_CLASS(AChineseChessManager, ABoardGameManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoardGameDerived"), NO_API) \
	DECLARE_SERIALIZER(AChineseChessManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RoundState=NETFIELD_REP_START, \
		SelectedPawn, \
		Chu, \
		Han, \
		NETFIELD_REP_END=Han	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_INCLASS \
private: \
	static void StaticRegisterNativesAChineseChessManager(); \
	friend struct Z_Construct_UClass_AChineseChessManager_Statics; \
public: \
	DECLARE_CLASS(AChineseChessManager, ABoardGameManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoardGameDerived"), NO_API) \
	DECLARE_SERIALIZER(AChineseChessManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RoundState=NETFIELD_REP_START, \
		SelectedPawn, \
		Chu, \
		Han, \
		NETFIELD_REP_END=Han	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChineseChessManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChineseChessManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChineseChessManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChineseChessManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChineseChessManager(AChineseChessManager&&); \
	NO_API AChineseChessManager(const AChineseChessManager&); \
public: \
	NO_API virtual ~AChineseChessManager();


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChineseChessManager(AChineseChessManager&&); \
	NO_API AChineseChessManager(const AChineseChessManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChineseChessManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChineseChessManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChineseChessManager) \
	NO_API virtual ~AChineseChessManager();


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_51_PROLOG
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_SPARSE_DATA \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_RPC_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_ACCESSORS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_CALLBACK_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_INCLASS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_SPARSE_DATA \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_ACCESSORS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_CALLBACK_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_INCLASS_NO_PURE_DECLS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOARDGAMEDERIVED_API UClass* StaticClass<class AChineseChessManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h


#define FOREACH_ENUM_ECHINESECHESSPLAYERSEATED(op) \
	op(EChineseChessPlayerSeated::Filled) \
	op(EChineseChessPlayerSeated::RemainBothSide) \
	op(EChineseChessPlayerSeated::RemainChu) \
	op(EChineseChessPlayerSeated::RemainHan) 

enum class EChineseChessPlayerSeated : uint8;
template<> struct TIsUEnumClass<EChineseChessPlayerSeated> { enum { Value = true }; };
template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessPlayerSeated>();

#define FOREACH_ENUM_ECHINESECHESSPLAYER(op) \
	op(EChineseChessPlayer::Chu) \
	op(EChineseChessPlayer::Han) 

enum class EChineseChessPlayer : uint8;
template<> struct TIsUEnumClass<EChineseChessPlayer> { enum { Value = true }; };
template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessPlayer>();

#define FOREACH_ENUM_ECHINESECHESSROUNDSTATE(op) \
	op(EChineseChessRoundState::None) \
	op(EChineseChessRoundState::RoundChu) \
	op(EChineseChessRoundState::RoundHan) 

enum class EChineseChessRoundState : uint8;
template<> struct TIsUEnumClass<EChineseChessRoundState> { enum { Value = true }; };
template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessRoundState>();

#define FOREACH_ENUM_ECHINESECHESSCHECKSTATE(op) \
	op(EChineseChessCheckState::None) \
	op(EChineseChessCheckState::Check) \
	op(EChineseChessCheckState::CheckMate) \
	op(EChineseChessCheckState::Illegal) 

enum class EChineseChessCheckState : uint8;
template<> struct TIsUEnumClass<EChineseChessCheckState> { enum { Value = true }; };
template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessCheckState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
