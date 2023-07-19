// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Tasks/AbilityTask_WaitForTargetLoop.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitForTargetLoop;
class UGameplayAbility;
#ifdef SKYSHOOTER_AbilityTask_WaitForTargetLoop_generated_h
#error "AbilityTask_WaitForTargetLoop.generated.h already included, missing '#pragma once' in AbilityTask_WaitForTargetLoop.h"
#endif
#define SKYSHOOTER_AbilityTask_WaitForTargetLoop_generated_h

#define FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_9_DELEGATE \
struct _Script_SkyShooter_eventPawnsOverlappedChangedEvent_Parms \
{ \
	TArray<AActor*> OverlappedActors; \
}; \
static inline void FPawnsOverlappedChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& PawnsOverlappedChangedEvent, TArray<AActor*> const& OverlappedActors) \
{ \
	_Script_SkyShooter_eventPawnsOverlappedChangedEvent_Parms Parms; \
	Parms.OverlappedActors=OverlappedActors; \
	PawnsOverlappedChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_SPARSE_DATA
#define FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitForTargets_SphereOverlapPawn);


#define FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaitForTargets_SphereOverlapPawn);


#define FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_ACCESSORS
#define FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitForTargetLoop(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitForTargetLoop, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooter"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitForTargetLoop)


#define FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitForTargetLoop(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitForTargetLoop, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooter"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitForTargetLoop)


#define FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitForTargetLoop(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitForTargetLoop) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitForTargetLoop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitForTargetLoop); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitForTargetLoop(UAbilityTask_WaitForTargetLoop&&); \
	NO_API UAbilityTask_WaitForTargetLoop(const UAbilityTask_WaitForTargetLoop&); \
public: \
	NO_API virtual ~UAbilityTask_WaitForTargetLoop();


#define FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitForTargetLoop(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitForTargetLoop(UAbilityTask_WaitForTargetLoop&&); \
	NO_API UAbilityTask_WaitForTargetLoop(const UAbilityTask_WaitForTargetLoop&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitForTargetLoop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitForTargetLoop); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitForTargetLoop) \
	NO_API virtual ~UAbilityTask_WaitForTargetLoop();


#define FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_11_PROLOG
#define FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_SPARSE_DATA \
	FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_RPC_WRAPPERS \
	FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_ACCESSORS \
	FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_INCLASS \
	FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_SPARSE_DATA \
	FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_ACCESSORS \
	FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTER_API UClass* StaticClass<class UAbilityTask_WaitForTargetLoop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_VoidDrones_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
