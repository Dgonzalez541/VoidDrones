// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SingleLineTrace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitForInteractableTargets_SingleLineTrace;
class UGameplayAbility;
struct FCollisionProfileName;
struct FGameplayAbilityTargetingLocationInfo;
struct FInteractionQuery;
#ifdef SKYSHOOTERGAME_AbilityTask_WaitForInteractableTargets_SingleLineTrace_generated_h
#error "AbilityTask_WaitForInteractableTargets_SingleLineTrace.generated.h already included, missing '#pragma once' in AbilityTask_WaitForInteractableTargets_SingleLineTrace.h"
#endif
#define SKYSHOOTERGAME_AbilityTask_WaitForInteractableTargets_SingleLineTrace_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitForInteractableTargets_SingleLineTrace);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaitForInteractableTargets_SingleLineTrace);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitForInteractableTargets_SingleLineTrace(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitForInteractableTargets_SingleLineTrace, UAbilityTask_WaitForInteractableTargets, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitForInteractableTargets_SingleLineTrace)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitForInteractableTargets_SingleLineTrace(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitForInteractableTargets_SingleLineTrace, UAbilityTask_WaitForInteractableTargets, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitForInteractableTargets_SingleLineTrace)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitForInteractableTargets_SingleLineTrace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitForInteractableTargets_SingleLineTrace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitForInteractableTargets_SingleLineTrace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitForInteractableTargets_SingleLineTrace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitForInteractableTargets_SingleLineTrace(UAbilityTask_WaitForInteractableTargets_SingleLineTrace&&); \
	NO_API UAbilityTask_WaitForInteractableTargets_SingleLineTrace(const UAbilityTask_WaitForInteractableTargets_SingleLineTrace&); \
public: \
	NO_API virtual ~UAbilityTask_WaitForInteractableTargets_SingleLineTrace();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitForInteractableTargets_SingleLineTrace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitForInteractableTargets_SingleLineTrace(UAbilityTask_WaitForInteractableTargets_SingleLineTrace&&); \
	NO_API UAbilityTask_WaitForInteractableTargets_SingleLineTrace(const UAbilityTask_WaitForInteractableTargets_SingleLineTrace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitForInteractableTargets_SingleLineTrace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitForInteractableTargets_SingleLineTrace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitForInteractableTargets_SingleLineTrace) \
	NO_API virtual ~UAbilityTask_WaitForInteractableTargets_SingleLineTrace();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_17_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_WaitForInteractableTargets_SingleLineTrace."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class UAbilityTask_WaitForInteractableTargets_SingleLineTrace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
