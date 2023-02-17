// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Tasks/AbilityTask_EventTick.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_EventTick;
class UGameplayAbility;
#ifdef SKYSHOOTER_AbilityTask_EventTick_generated_h
#error "AbilityTask_EventTick.generated.h already included, missing '#pragma once' in AbilityTask_EventTick.h"
#endif
#define SKYSHOOTER_AbilityTask_EventTick_generated_h

#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_8_DELEGATE \
struct _Script_SkyShooter_eventOnTickTaskDelegate_Parms \
{ \
	float DeltaTime; \
}; \
static inline void FOnTickTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTickTaskDelegate, float DeltaTime) \
{ \
	_Script_SkyShooter_eventOnTickTaskDelegate_Parms Parms; \
	Parms.DeltaTime=DeltaTime; \
	OnTickTaskDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_SPARSE_DATA
#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAbilityTaskOnTick);


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAbilityTaskOnTick);


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_ACCESSORS
#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_EventTick(); \
	friend struct Z_Construct_UClass_UAbilityTask_EventTick_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_EventTick, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooter"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_EventTick)


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_EventTick(); \
	friend struct Z_Construct_UClass_UAbilityTask_EventTick_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_EventTick, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooter"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_EventTick)


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_EventTick(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_EventTick) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_EventTick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_EventTick); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_EventTick(UAbilityTask_EventTick&&); \
	NO_API UAbilityTask_EventTick(const UAbilityTask_EventTick&); \
public: \
	NO_API virtual ~UAbilityTask_EventTick();


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_EventTick(UAbilityTask_EventTick&&); \
	NO_API UAbilityTask_EventTick(const UAbilityTask_EventTick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_EventTick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_EventTick); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_EventTick) \
	NO_API virtual ~UAbilityTask_EventTick();


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_11_PROLOG
#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_SPARSE_DATA \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_RPC_WRAPPERS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_ACCESSORS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_INCLASS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_SPARSE_DATA \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_ACCESSORS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTER_API UClass* StaticClass<class UAbilityTask_EventTick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
