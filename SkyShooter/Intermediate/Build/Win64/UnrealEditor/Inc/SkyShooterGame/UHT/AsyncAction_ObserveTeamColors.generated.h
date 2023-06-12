// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teams/AsyncAction_ObserveTeamColors.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncAction_ObserveTeamColors;
class ULyraTeamDisplayAsset;
class UObject;
#ifdef SKYSHOOTERGAME_AsyncAction_ObserveTeamColors_generated_h
#error "AsyncAction_ObserveTeamColors.generated.h already included, missing '#pragma once' in AsyncAction_ObserveTeamColors.h"
#endif
#define SKYSHOOTERGAME_AsyncAction_ObserveTeamColors_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_20_DELEGATE \
struct _Script_SkyShooterGame_eventTeamColorObservedAsyncDelegate_Parms \
{ \
	bool bTeamSet; \
	int32 TeamId; \
	const ULyraTeamDisplayAsset* DisplayAsset; \
}; \
static inline void FTeamColorObservedAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& TeamColorObservedAsyncDelegate, bool bTeamSet, int32 TeamId, const ULyraTeamDisplayAsset* DisplayAsset) \
{ \
	_Script_SkyShooterGame_eventTeamColorObservedAsyncDelegate_Parms Parms; \
	Parms.bTeamSet=bTeamSet ? true : false; \
	Parms.TeamId=TeamId; \
	Parms.DisplayAsset=DisplayAsset; \
	TeamColorObservedAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDisplayAssetChanged); \
	DECLARE_FUNCTION(execOnWatchedAgentChangedTeam); \
	DECLARE_FUNCTION(execObserveTeamColors);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDisplayAssetChanged); \
	DECLARE_FUNCTION(execOnWatchedAgentChangedTeam); \
	DECLARE_FUNCTION(execObserveTeamColors);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_ObserveTeamColors(); \
	friend struct Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_ObserveTeamColors, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_ObserveTeamColors)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncAction_ObserveTeamColors(); \
	friend struct Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_ObserveTeamColors, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_ObserveTeamColors)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_ObserveTeamColors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_ObserveTeamColors) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_ObserveTeamColors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_ObserveTeamColors); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncAction_ObserveTeamColors(UAsyncAction_ObserveTeamColors&&); \
	NO_API UAsyncAction_ObserveTeamColors(const UAsyncAction_ObserveTeamColors&); \
public: \
	NO_API virtual ~UAsyncAction_ObserveTeamColors();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_ObserveTeamColors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncAction_ObserveTeamColors(UAsyncAction_ObserveTeamColors&&); \
	NO_API UAsyncAction_ObserveTeamColors(const UAsyncAction_ObserveTeamColors&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_ObserveTeamColors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_ObserveTeamColors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_ObserveTeamColors) \
	NO_API virtual ~UAsyncAction_ObserveTeamColors();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_25_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AsyncAction_ObserveTeamColors."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class UAsyncAction_ObserveTeamColors>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_AsyncAction_ObserveTeamColors_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
