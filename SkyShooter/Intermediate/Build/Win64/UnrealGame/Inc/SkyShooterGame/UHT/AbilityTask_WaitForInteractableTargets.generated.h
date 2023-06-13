// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Tasks/AbilityTask_WaitForInteractableTargets.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInteractionOption;
#ifdef SKYSHOOTERGAME_AbilityTask_WaitForInteractableTargets_generated_h
#error "AbilityTask_WaitForInteractableTargets.generated.h already included, missing '#pragma once' in AbilityTask_WaitForInteractableTargets.h"
#endif
#define SKYSHOOTERGAME_AbilityTask_WaitForInteractableTargets_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_24_DELEGATE \
struct _Script_SkyShooterGame_eventInteractableObjectsChangedEvent_Parms \
{ \
	TArray<FInteractionOption> InteractableOptions; \
}; \
static inline void FInteractableObjectsChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& InteractableObjectsChangedEvent, TArray<FInteractionOption> const& InteractableOptions) \
{ \
	_Script_SkyShooterGame_eventInteractableObjectsChangedEvent_Parms Parms; \
	Parms.InteractableOptions=InteractableOptions; \
	InteractableObjectsChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_RPC_WRAPPERS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitForInteractableTargets(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitForInteractableTargets, UAbilityTask, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitForInteractableTargets)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitForInteractableTargets(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitForInteractableTargets, UAbilityTask, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitForInteractableTargets)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitForInteractableTargets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitForInteractableTargets) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitForInteractableTargets); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitForInteractableTargets); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitForInteractableTargets(UAbilityTask_WaitForInteractableTargets&&); \
	NO_API UAbilityTask_WaitForInteractableTargets(const UAbilityTask_WaitForInteractableTargets&); \
public: \
	NO_API virtual ~UAbilityTask_WaitForInteractableTargets();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitForInteractableTargets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitForInteractableTargets(UAbilityTask_WaitForInteractableTargets&&); \
	NO_API UAbilityTask_WaitForInteractableTargets(const UAbilityTask_WaitForInteractableTargets&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitForInteractableTargets); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitForInteractableTargets); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitForInteractableTargets) \
	NO_API virtual ~UAbilityTask_WaitForInteractableTargets();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_26_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_WaitForInteractableTargets."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class UAbilityTask_WaitForInteractableTargets>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
