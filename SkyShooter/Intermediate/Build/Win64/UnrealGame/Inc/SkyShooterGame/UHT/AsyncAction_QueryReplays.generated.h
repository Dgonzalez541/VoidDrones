// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replays/AsyncAction_QueryReplays.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UAsyncAction_QueryReplays;
class ULyraReplayList;
#ifdef SKYSHOOTERGAME_AsyncAction_QueryReplays_generated_h
#error "AsyncAction_QueryReplays.generated.h already included, missing '#pragma once' in AsyncAction_QueryReplays.h"
#endif
#define SKYSHOOTERGAME_AsyncAction_QueryReplays_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_20_DELEGATE \
struct _Script_SkyShooterGame_eventQueryReplayAsyncDelegate_Parms \
{ \
	ULyraReplayList* Results; \
}; \
static inline void FQueryReplayAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& QueryReplayAsyncDelegate, ULyraReplayList* Results) \
{ \
	_Script_SkyShooterGame_eventQueryReplayAsyncDelegate_Parms Parms; \
	Parms.Results=Results; \
	QueryReplayAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQueryReplays);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQueryReplays);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_QueryReplays(); \
	friend struct Z_Construct_UClass_UAsyncAction_QueryReplays_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_QueryReplays, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_QueryReplays)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncAction_QueryReplays(); \
	friend struct Z_Construct_UClass_UAsyncAction_QueryReplays_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_QueryReplays, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_QueryReplays)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_QueryReplays(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_QueryReplays) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_QueryReplays); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_QueryReplays); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncAction_QueryReplays(UAsyncAction_QueryReplays&&); \
	NO_API UAsyncAction_QueryReplays(const UAsyncAction_QueryReplays&); \
public: \
	NO_API virtual ~UAsyncAction_QueryReplays();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncAction_QueryReplays(UAsyncAction_QueryReplays&&); \
	NO_API UAsyncAction_QueryReplays(const UAsyncAction_QueryReplays&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_QueryReplays); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_QueryReplays); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_QueryReplays) \
	NO_API virtual ~UAsyncAction_QueryReplays();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_25_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class UAsyncAction_QueryReplays>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Replays_AsyncAction_QueryReplays_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
