// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helper/BoardGameInteract.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
#ifdef BOARDGAMES_BoardGameInteract_generated_h
#error "BoardGameInteract.generated.h already included, missing '#pragma once' in BoardGameInteract.h"
#endif
#define BOARDGAMES_BoardGameInteract_generated_h

#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_SPARSE_DATA
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_RPC_WRAPPERS \
	virtual void OnMouseLeave_Implementation(APlayerState* PlayerState) {}; \
	virtual void OnMouseEnter_Implementation(APlayerState* PlayerState) {}; \
	virtual void OnMouseClicked_Implementation(APlayerState* PlayerState) {}; \
 \
	DECLARE_FUNCTION(execOnMouseLeave); \
	DECLARE_FUNCTION(execOnMouseEnter); \
	DECLARE_FUNCTION(execOnMouseClicked);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnMouseLeave_Implementation(APlayerState* PlayerState) {}; \
	virtual void OnMouseEnter_Implementation(APlayerState* PlayerState) {}; \
	virtual void OnMouseClicked_Implementation(APlayerState* PlayerState) {}; \
 \
	DECLARE_FUNCTION(execOnMouseLeave); \
	DECLARE_FUNCTION(execOnMouseEnter); \
	DECLARE_FUNCTION(execOnMouseClicked);


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_ACCESSORS
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_CALLBACK_WRAPPERS
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOARDGAMES_API UBoardGameInteract(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoardGameInteract) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOARDGAMES_API, UBoardGameInteract); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoardGameInteract); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BOARDGAMES_API UBoardGameInteract(UBoardGameInteract&&); \
	BOARDGAMES_API UBoardGameInteract(const UBoardGameInteract&); \
public: \
	BOARDGAMES_API virtual ~UBoardGameInteract();


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOARDGAMES_API UBoardGameInteract(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BOARDGAMES_API UBoardGameInteract(UBoardGameInteract&&); \
	BOARDGAMES_API UBoardGameInteract(const UBoardGameInteract&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOARDGAMES_API, UBoardGameInteract); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoardGameInteract); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoardGameInteract) \
	BOARDGAMES_API virtual ~UBoardGameInteract();


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBoardGameInteract(); \
	friend struct Z_Construct_UClass_UBoardGameInteract_Statics; \
public: \
	DECLARE_CLASS(UBoardGameInteract, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BoardGames"), BOARDGAMES_API) \
	DECLARE_SERIALIZER(UBoardGameInteract)


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_GENERATED_UINTERFACE_BODY() \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_GENERATED_UINTERFACE_BODY() \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBoardGameInteract() {} \
public: \
	typedef UBoardGameInteract UClassType; \
	typedef IBoardGameInteract ThisClass; \
	static void Execute_OnMouseClicked(UObject* O, APlayerState* PlayerState); \
	static void Execute_OnMouseEnter(UObject* O, APlayerState* PlayerState); \
	static void Execute_OnMouseLeave(UObject* O, APlayerState* PlayerState); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IBoardGameInteract() {} \
public: \
	typedef UBoardGameInteract UClassType; \
	typedef IBoardGameInteract ThisClass; \
	static void Execute_OnMouseClicked(UObject* O, APlayerState* PlayerState); \
	static void Execute_OnMouseEnter(UObject* O, APlayerState* PlayerState); \
	static void Execute_OnMouseLeave(UObject* O, APlayerState* PlayerState); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_10_PROLOG
#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_SPARSE_DATA \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_RPC_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_ACCESSORS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_CALLBACK_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_SPARSE_DATA \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_ACCESSORS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_CALLBACK_WRAPPERS \
	FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOARDGAMES_API UClass* StaticClass<class UBoardGameInteract>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_BoardGames_Source_BoardGames_Public_Helper_BoardGameInteract_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
