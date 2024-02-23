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
enum class EChineseChessAwaitState : uint8;
enum class EChineseChessGameState : uint8;
enum class EChineseChessPlayer : uint8;
#ifdef BOARDGAMEDERIVED_ChineseChessManager_generated_h
#error "ChineseChessManager.generated.h already included, missing '#pragma once' in ChineseChessManager.h"
#endif
#define BOARDGAMEDERIVED_ChineseChessManager_generated_h

#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_64_DELEGATE \
static void FPlayerEnteredDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerEnteredDelegate, EChineseChessPlayer PlayerCamp, APlayerState* Player);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_65_DELEGATE \
static void FPlayerLeftDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerLeftDelegate, EChineseChessPlayer PlayerCamp, APlayerState* Player);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_67_DELEGATE \
static void FGameActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameActionDelegate, EChineseChessGameState GameState, APlayerState* Player);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_SPARSE_DATA
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompareFeatureMap); \
	DECLARE_FUNCTION(execGetFeatureMap); \
	DECLARE_FUNCTION(execSwitchCamp); \
	DECLARE_FUNCTION(execGiveUp); \
	DECLARE_FUNCTION(execGameStart); \
	DECLARE_FUNCTION(execIsEntered); \
	DECLARE_FUNCTION(execGetPlayerCamp); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execWaitPlayer); \
	DECLARE_FUNCTION(execGetPawnArray); \
	DECLARE_FUNCTION(execGetIsGameing); \
	DECLARE_FUNCTION(execGetHistoryRecorder); \
	DECLARE_FUNCTION(execOnPlayerLeft); \
	DECLARE_FUNCTION(execOnPlayerEntered);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompareFeatureMap); \
	DECLARE_FUNCTION(execGetFeatureMap); \
	DECLARE_FUNCTION(execSwitchCamp); \
	DECLARE_FUNCTION(execGiveUp); \
	DECLARE_FUNCTION(execGameStart); \
	DECLARE_FUNCTION(execIsEntered); \
	DECLARE_FUNCTION(execGetPlayerCamp); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execWaitPlayer); \
	DECLARE_FUNCTION(execGetPawnArray); \
	DECLARE_FUNCTION(execGetIsGameing); \
	DECLARE_FUNCTION(execGetHistoryRecorder); \
	DECLARE_FUNCTION(execOnPlayerLeft); \
	DECLARE_FUNCTION(execOnPlayerEntered);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_ACCESSORS
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_CALLBACK_WRAPPERS
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_INCLASS_NO_PURE_DECLS \
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
		bIsGaming, \
		SelectedPawn, \
		PlayerContainer, \
		NETFIELD_REP_END=PlayerContainer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_INCLASS \
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
		bIsGaming, \
		SelectedPawn, \
		PlayerContainer, \
		NETFIELD_REP_END=PlayerContainer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_STANDARD_CONSTRUCTORS \
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


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChineseChessManager(AChineseChessManager&&); \
	NO_API AChineseChessManager(const AChineseChessManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChineseChessManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChineseChessManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChineseChessManager) \
	NO_API virtual ~AChineseChessManager();


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_57_PROLOG
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_SPARSE_DATA \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_RPC_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_ACCESSORS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_CALLBACK_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_INCLASS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_SPARSE_DATA \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_ACCESSORS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_CALLBACK_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_INCLASS_NO_PURE_DECLS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOARDGAMEDERIVED_API UClass* StaticClass<class AChineseChessManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_Helper_ChineseChessManager_h


#define FOREACH_ENUM_ECHINESECHESSPLAYER(op) \
	op(EChineseChessPlayer::Chu) \
	op(EChineseChessPlayer::Han) 

enum class EChineseChessPlayer : uint8;
template<> struct TIsUEnumClass<EChineseChessPlayer> { enum { Value = true }; };
template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessPlayer>();

#define FOREACH_ENUM_ECHINESECHESSAWAITSTATE(op) \
	op(EChineseChessAwaitState::Wait_Chu) \
	op(EChineseChessAwaitState::Wait_Han) \
	op(EChineseChessAwaitState::Wait_BothSides) \
	op(EChineseChessAwaitState::Ready) 

enum class EChineseChessAwaitState : uint8;
template<> struct TIsUEnumClass<EChineseChessAwaitState> { enum { Value = true }; };
template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessAwaitState>();

#define FOREACH_ENUM_ECHINESECHESSROUNDSTATE(op) \
	op(EChineseChessRoundState::RoundChu) \
	op(EChineseChessRoundState::RoundHan) \
	op(EChineseChessRoundState::None) 

enum class EChineseChessRoundState : uint8;
template<> struct TIsUEnumClass<EChineseChessRoundState> { enum { Value = true }; };
template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessRoundState>();

#define FOREACH_ENUM_ECHINESECHESSGAMESTATE(op) \
	op(EChineseChessGameState::None) \
	op(EChineseChessGameState::GameStart) \
	op(EChineseChessGameState::GameOver) \
	op(EChineseChessGameState::IllegalMove) \
	op(EChineseChessGameState::Check) \
	op(EChineseChessGameState::CheckMate) \
	op(EChineseChessGameState::GiveUp) \
	op(EChineseChessGameState::RoundSwitch) \
	op(EChineseChessGameState::CampSwitch) 

enum class EChineseChessGameState : uint8;
template<> struct TIsUEnumClass<EChineseChessGameState> { enum { Value = true }; };
template<> BOARDGAMEDERIVED_API UEnum* StaticEnum<EChineseChessGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
