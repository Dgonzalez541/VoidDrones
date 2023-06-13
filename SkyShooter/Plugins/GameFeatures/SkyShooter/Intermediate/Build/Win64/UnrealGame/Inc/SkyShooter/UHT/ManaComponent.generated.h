// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManaComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULyraAbilitySystemComponent;
class UManaComponent;
#ifdef SKYSHOOTER_ManaComponent_generated_h
#error "ManaComponent.generated.h already included, missing '#pragma once' in ManaComponent.h"
#endif
#define SKYSHOOTER_ManaComponent_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_13_DELEGATE \
struct _Script_SkyShooter_eventMana_AttributeChanged_Parms \
{ \
	UManaComponent* ManaComponent; \
	float OldValue; \
	float NewValue; \
}; \
static inline void FMana_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& Mana_AttributeChanged, UManaComponent* ManaComponent, float OldValue, float NewValue) \
{ \
	_Script_SkyShooter_eventMana_AttributeChanged_Parms Parms; \
	Parms.ManaComponent=ManaComponent; \
	Parms.OldValue=OldValue; \
	Parms.NewValue=NewValue; \
	Mana_AttributeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetManaNormalized); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execFindManaComponent);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetManaNormalized); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execFindManaComponent);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaComponent(); \
	friend struct Z_Construct_UClass_UManaComponent_Statics; \
public: \
	DECLARE_CLASS(UManaComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooter"), NO_API) \
	DECLARE_SERIALIZER(UManaComponent)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUManaComponent(); \
	friend struct Z_Construct_UClass_UManaComponent_Statics; \
public: \
	DECLARE_CLASS(UManaComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooter"), NO_API) \
	DECLARE_SERIALIZER(UManaComponent)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManaComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaComponent(UManaComponent&&); \
	NO_API UManaComponent(const UManaComponent&); \
public: \
	NO_API virtual ~UManaComponent();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaComponent(UManaComponent&&); \
	NO_API UManaComponent(const UManaComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaComponent) \
	NO_API virtual ~UManaComponent();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_19_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTER_API UClass* StaticClass<class UManaComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
