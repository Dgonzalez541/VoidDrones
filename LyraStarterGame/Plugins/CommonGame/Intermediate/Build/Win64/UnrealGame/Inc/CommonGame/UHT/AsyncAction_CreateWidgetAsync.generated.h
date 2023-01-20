// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/AsyncAction_CreateWidgetAsync.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UAsyncAction_CreateWidgetAsync;
class UObject;
class UUserWidget;
#ifdef COMMONGAME_AsyncAction_CreateWidgetAsync_generated_h
#error "AsyncAction_CreateWidgetAsync.generated.h already included, missing '#pragma once' in AsyncAction_CreateWidgetAsync.h"
#endif
#define COMMONGAME_AsyncAction_CreateWidgetAsync_generated_h

#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_23_DELEGATE \
struct _Script_CommonGame_eventCreateWidgetAsyncDelegate_Parms \
{ \
	UUserWidget* UserWidget; \
}; \
static inline void FCreateWidgetAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& CreateWidgetAsyncDelegate, UUserWidget* UserWidget) \
{ \
	_Script_CommonGame_eventCreateWidgetAsyncDelegate_Parms Parms; \
	Parms.UserWidget=UserWidget; \
	CreateWidgetAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_SPARSE_DATA
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateWidgetAsync);


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateWidgetAsync);


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_ACCESSORS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_CreateWidgetAsync(); \
	friend struct Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_CreateWidgetAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_CreateWidgetAsync)


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncAction_CreateWidgetAsync(); \
	friend struct Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_CreateWidgetAsync, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_CreateWidgetAsync)


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_CreateWidgetAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_CreateWidgetAsync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_CreateWidgetAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_CreateWidgetAsync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncAction_CreateWidgetAsync(UAsyncAction_CreateWidgetAsync&&); \
	NO_API UAsyncAction_CreateWidgetAsync(const UAsyncAction_CreateWidgetAsync&); \
public: \
	NO_API virtual ~UAsyncAction_CreateWidgetAsync();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_CreateWidgetAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncAction_CreateWidgetAsync(UAsyncAction_CreateWidgetAsync&&); \
	NO_API UAsyncAction_CreateWidgetAsync(const UAsyncAction_CreateWidgetAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_CreateWidgetAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_CreateWidgetAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_CreateWidgetAsync) \
	NO_API virtual ~UAsyncAction_CreateWidgetAsync();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_28_PROLOG
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_RPC_WRAPPERS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_INCLASS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_INCLASS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AsyncAction_CreateWidgetAsync."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONGAME_API UClass* StaticClass<class UAsyncAction_CreateWidgetAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_CommonGame_Source_Public_Actions_AsyncAction_CreateWidgetAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
