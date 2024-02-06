// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChineseChess/ChineseChessBoard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AChineseChessManager;
class APlayerState;
class UChineseChessBoardSlot;
class UGameBaseBoardSlot;
class UPrimitiveComponent;
enum class EChineseChessPlayer : uint8;
struct FKey;
#ifdef BOARDGAMEDERIVED_ChineseChessBoard_generated_h
#error "ChineseChessBoard.generated.h already included, missing '#pragma once' in ChineseChessBoard.h"
#endif
#define BOARDGAMEDERIVED_ChineseChessBoard_generated_h

#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_25_DELEGATE \
static void FSlotClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SlotClickedDelegate, UChineseChessBoardSlot* Slot);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_26_DELEGATE \
static void FPlayerEnterDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerEnterDelegate, EChineseChessPlayer PlayerCamp);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_SPARSE_DATA
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMeshComponentClicked); \
	DECLARE_FUNCTION(execHandleSlotClicked); \
	DECLARE_FUNCTION(execCheckPositionInBoard); \
	DECLARE_FUNCTION(execGetBoardSize); \
	DECLARE_FUNCTION(execGetSlots); \
	DECLARE_FUNCTION(execGetSlot); \
	DECLARE_FUNCTION(execGetGameManager); \
	DECLARE_FUNCTION(execOnRep_GameManager);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMeshComponentClicked); \
	DECLARE_FUNCTION(execHandleSlotClicked); \
	DECLARE_FUNCTION(execCheckPositionInBoard); \
	DECLARE_FUNCTION(execGetBoardSize); \
	DECLARE_FUNCTION(execGetSlots); \
	DECLARE_FUNCTION(execGetSlot); \
	DECLARE_FUNCTION(execGetGameManager); \
	DECLARE_FUNCTION(execOnRep_GameManager);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_ACCESSORS
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_CALLBACK_WRAPPERS
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChineseChessBoard(); \
	friend struct Z_Construct_UClass_AChineseChessBoard_Statics; \
public: \
	DECLARE_CLASS(AChineseChessBoard, AGameBaseBoard, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoardGameDerived"), NO_API) \
	DECLARE_SERIALIZER(AChineseChessBoard) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameManager=NETFIELD_REP_START, \
		NETFIELD_REP_END=GameManager	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAChineseChessBoard(); \
	friend struct Z_Construct_UClass_AChineseChessBoard_Statics; \
public: \
	DECLARE_CLASS(AChineseChessBoard, AGameBaseBoard, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoardGameDerived"), NO_API) \
	DECLARE_SERIALIZER(AChineseChessBoard) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameManager=NETFIELD_REP_START, \
		NETFIELD_REP_END=GameManager	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChineseChessBoard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChineseChessBoard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChineseChessBoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChineseChessBoard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChineseChessBoard(AChineseChessBoard&&); \
	NO_API AChineseChessBoard(const AChineseChessBoard&); \
public: \
	NO_API virtual ~AChineseChessBoard();


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChineseChessBoard(AChineseChessBoard&&); \
	NO_API AChineseChessBoard(const AChineseChessBoard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChineseChessBoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChineseChessBoard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChineseChessBoard) \
	NO_API virtual ~AChineseChessBoard();


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_18_PROLOG
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_SPARSE_DATA \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_RPC_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_ACCESSORS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_CALLBACK_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_INCLASS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_SPARSE_DATA \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_ACCESSORS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_CALLBACK_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_INCLASS_NO_PURE_DECLS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOARDGAMEDERIVED_API UClass* StaticClass<class AChineseChessBoard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGameDerived_Public_ChineseChess_ChineseChessBoard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
