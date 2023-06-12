// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Feedback/ContextEffects/LyraContextEffectComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class ULyraContextEffectsLibrary;
class USceneComponent;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FHitResult;
#ifdef SKYSHOOTERGAME_LyraContextEffectComponent_generated_h
#error "LyraContextEffectComponent.generated.h already included, missing '#pragma once' in LyraContextEffectComponent.h"
#endif
#define SKYSHOOTERGAME_LyraContextEffectComponent_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateLibraries); \
	DECLARE_FUNCTION(execUpdateEffectContexts); \
	DECLARE_FUNCTION(execAnimMotionEffect_Implementation);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateLibraries); \
	DECLARE_FUNCTION(execUpdateEffectContexts); \
	DECLARE_FUNCTION(execAnimMotionEffect_Implementation);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraContextEffectComponent(); \
	friend struct Z_Construct_UClass_ULyraContextEffectComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraContextEffectComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraContextEffectComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULyraContextEffectComponent*>(this); }


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesULyraContextEffectComponent(); \
	friend struct Z_Construct_UClass_ULyraContextEffectComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraContextEffectComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraContextEffectComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULyraContextEffectComponent*>(this); }


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraContextEffectComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraContextEffectComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraContextEffectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraContextEffectComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraContextEffectComponent(ULyraContextEffectComponent&&); \
	NO_API ULyraContextEffectComponent(const ULyraContextEffectComponent&); \
public: \
	NO_API virtual ~ULyraContextEffectComponent();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraContextEffectComponent(ULyraContextEffectComponent&&); \
	NO_API ULyraContextEffectComponent(const ULyraContextEffectComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraContextEffectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraContextEffectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraContextEffectComponent) \
	NO_API virtual ~ULyraContextEffectComponent();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_29_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraContextEffectComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
