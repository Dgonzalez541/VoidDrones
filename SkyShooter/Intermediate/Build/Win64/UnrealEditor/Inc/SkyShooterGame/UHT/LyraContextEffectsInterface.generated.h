// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Feedback/ContextEffects/LyraContextEffectsInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class USceneComponent;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FHitResult;
#ifdef SKYSHOOTERGAME_LyraContextEffectsInterface_generated_h
#error "LyraContextEffectsInterface.generated.h already included, missing '#pragma once' in LyraContextEffectsInterface.h"
#endif
#define SKYSHOOTERGAME_LyraContextEffectsInterface_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_RPC_WRAPPERS \
	virtual void AnimMotionEffect_Implementation(const FName Bone, const FGameplayTag MotionEffect, USceneComponent* StaticMeshComponent, const FVector LocationOffset, const FRotator RotationOffset, const UAnimSequenceBase* AnimationSequence, bool bHitSuccess, const FHitResult HitResult, FGameplayTagContainer Contexts, FVector VFXScale, float AudioVolume, float AudioPitch) {}; \
 \
	DECLARE_FUNCTION(execAnimMotionEffect);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AnimMotionEffect_Implementation(const FName Bone, const FGameplayTag MotionEffect, USceneComponent* StaticMeshComponent, const FVector LocationOffset, const FRotator RotationOffset, const UAnimSequenceBase* AnimationSequence, bool bHitSuccess, const FHitResult HitResult, FGameplayTagContainer Contexts, FVector VFXScale, float AudioVolume, float AudioPitch) {}; \
 \
	DECLARE_FUNCTION(execAnimMotionEffect);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_CALLBACK_WRAPPERS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraContextEffectsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraContextEffectsInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraContextEffectsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraContextEffectsInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraContextEffectsInterface(ULyraContextEffectsInterface&&); \
	NO_API ULyraContextEffectsInterface(const ULyraContextEffectsInterface&); \
public: \
	NO_API virtual ~ULyraContextEffectsInterface();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraContextEffectsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraContextEffectsInterface(ULyraContextEffectsInterface&&); \
	NO_API ULyraContextEffectsInterface(const ULyraContextEffectsInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraContextEffectsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraContextEffectsInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraContextEffectsInterface) \
	NO_API virtual ~ULyraContextEffectsInterface();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULyraContextEffectsInterface(); \
	friend struct Z_Construct_UClass_ULyraContextEffectsInterface_Statics; \
public: \
	DECLARE_CLASS(ULyraContextEffectsInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraContextEffectsInterface)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILyraContextEffectsInterface() {} \
public: \
	typedef ULyraContextEffectsInterface UClassType; \
	typedef ILyraContextEffectsInterface ThisClass; \
	static void Execute_AnimMotionEffect(UObject* O, const FName Bone, const FGameplayTag MotionEffect, USceneComponent* StaticMeshComponent, const FVector LocationOffset, const FRotator RotationOffset, const UAnimSequenceBase* AnimationSequence, bool bHitSuccess, const FHitResult HitResult, FGameplayTagContainer Contexts, FVector VFXScale, float AudioVolume, float AudioPitch); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_INCLASS_IINTERFACE \
protected: \
	virtual ~ILyraContextEffectsInterface() {} \
public: \
	typedef ULyraContextEffectsInterface UClassType; \
	typedef ILyraContextEffectsInterface ThisClass; \
	static void Execute_AnimMotionEffect(UObject* O, const FName Bone, const FGameplayTag MotionEffect, USceneComponent* StaticMeshComponent, const FVector LocationOffset, const FRotator RotationOffset, const UAnimSequenceBase* AnimationSequence, bool bHitSuccess, const FHitResult HitResult, FGameplayTagContainer Contexts, FVector VFXScale, float AudioVolume, float AudioPitch); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_34_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_CALLBACK_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_CALLBACK_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraContextEffectsInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_ContextEffects_LyraContextEffectsInterface_h


#define FOREACH_ENUM_EEFFECTSCONTEXTMATCHTYPE(op) \
	op(ExactMatch) \
	op(BestMatch) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
