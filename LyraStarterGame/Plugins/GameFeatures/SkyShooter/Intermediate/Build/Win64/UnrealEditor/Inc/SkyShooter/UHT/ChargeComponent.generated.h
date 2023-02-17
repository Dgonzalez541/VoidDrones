// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChargeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UChargeComponent;
class ULyraAbilitySystemComponent;
#ifdef SKYSHOOTER_ChargeComponent_generated_h
#error "ChargeComponent.generated.h already included, missing '#pragma once' in ChargeComponent.h"
#endif
#define SKYSHOOTER_ChargeComponent_generated_h

#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_13_DELEGATE \
struct _Script_SkyShooter_eventCharge_AttributeChanged_Parms \
{ \
	UChargeComponent* ChargeComponent; \
	float OldValue; \
	float NewValue; \
}; \
static inline void FCharge_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& Charge_AttributeChanged, UChargeComponent* ChargeComponent, float OldValue, float NewValue) \
{ \
	_Script_SkyShooter_eventCharge_AttributeChanged_Parms Parms; \
	Parms.ChargeComponent=ChargeComponent; \
	Parms.OldValue=OldValue; \
	Parms.NewValue=NewValue; \
	Charge_AttributeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_SPARSE_DATA
#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChargeNormalized); \
	DECLARE_FUNCTION(execGetMaxCharges); \
	DECLARE_FUNCTION(execGetCharge); \
	DECLARE_FUNCTION(execUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execFindChargeComponent);


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChargeNormalized); \
	DECLARE_FUNCTION(execGetMaxCharges); \
	DECLARE_FUNCTION(execGetCharge); \
	DECLARE_FUNCTION(execUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execFindChargeComponent);


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_ACCESSORS
#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChargeComponent(); \
	friend struct Z_Construct_UClass_UChargeComponent_Statics; \
public: \
	DECLARE_CLASS(UChargeComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooter"), NO_API) \
	DECLARE_SERIALIZER(UChargeComponent)


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUChargeComponent(); \
	friend struct Z_Construct_UClass_UChargeComponent_Statics; \
public: \
	DECLARE_CLASS(UChargeComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooter"), NO_API) \
	DECLARE_SERIALIZER(UChargeComponent)


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChargeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChargeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChargeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChargeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChargeComponent(UChargeComponent&&); \
	NO_API UChargeComponent(const UChargeComponent&); \
public: \
	NO_API virtual ~UChargeComponent();


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChargeComponent(UChargeComponent&&); \
	NO_API UChargeComponent(const UChargeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChargeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChargeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChargeComponent) \
	NO_API virtual ~UChargeComponent();


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_17_PROLOG
#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_SPARSE_DATA \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_RPC_WRAPPERS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_ACCESSORS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_INCLASS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_SPARSE_DATA \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_ACCESSORS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTER_API UClass* StaticClass<class UChargeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ChargeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
