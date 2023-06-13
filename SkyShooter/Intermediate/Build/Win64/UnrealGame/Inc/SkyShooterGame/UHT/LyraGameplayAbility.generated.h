// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/LyraGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class ALyraCharacter;
class ALyraPlayerController;
class ULyraAbilitySystemComponent;
class ULyraCameraMode;
class ULyraHeroComponent;
enum class ELyraAbilityActivationGroup : uint8;
struct FGameplayTagContainer;
#ifdef SKYSHOOTERGAME_LyraGameplayAbility_generated_h
#error "LyraGameplayAbility.generated.h already included, missing '#pragma once' in LyraGameplayAbility.h"
#endif
#define SKYSHOOTERGAME_LyraGameplayAbility_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FLyraAbilityMontageFailureMessage>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCameraMode); \
	DECLARE_FUNCTION(execSetCameraMode); \
	DECLARE_FUNCTION(execChangeActivationGroup); \
	DECLARE_FUNCTION(execCanChangeActivationGroup); \
	DECLARE_FUNCTION(execGetHeroComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetLyraCharacterFromActorInfo); \
	DECLARE_FUNCTION(execGetControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetLyraPlayerControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponentFromActorInfo);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCameraMode); \
	DECLARE_FUNCTION(execSetCameraMode); \
	DECLARE_FUNCTION(execChangeActivationGroup); \
	DECLARE_FUNCTION(execCanChangeActivationGroup); \
	DECLARE_FUNCTION(execGetHeroComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetLyraCharacterFromActorInfo); \
	DECLARE_FUNCTION(execGetControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetLyraPlayerControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponentFromActorInfo);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_CALLBACK_WRAPPERS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraGameplayAbility(); \
	friend struct Z_Construct_UClass_ULyraGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(ULyraGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGameplayAbility)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_INCLASS \
private: \
	static void StaticRegisterNativesULyraGameplayAbility(); \
	friend struct Z_Construct_UClass_ULyraGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(ULyraGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGameplayAbility)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraGameplayAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGameplayAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraGameplayAbility(ULyraGameplayAbility&&); \
	NO_API ULyraGameplayAbility(const ULyraGameplayAbility&); \
public: \
	NO_API virtual ~ULyraGameplayAbility();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraGameplayAbility(ULyraGameplayAbility&&); \
	NO_API ULyraGameplayAbility(const ULyraGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGameplayAbility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraGameplayAbility) \
	NO_API virtual ~ULyraGameplayAbility();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_99_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_CALLBACK_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_CALLBACK_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Abilities_LyraGameplayAbility_h


#define FOREACH_ENUM_ELYRAABILITYACTIVATIONPOLICY(op) \
	op(ELyraAbilityActivationPolicy::OnInputTriggered) \
	op(ELyraAbilityActivationPolicy::WhileInputActive) \
	op(ELyraAbilityActivationPolicy::OnSpawn) 

enum class ELyraAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<ELyraAbilityActivationPolicy> { enum { Value = true }; };
template<> SKYSHOOTERGAME_API UEnum* StaticEnum<ELyraAbilityActivationPolicy>();

#define FOREACH_ENUM_ELYRAABILITYACTIVATIONGROUP(op) \
	op(ELyraAbilityActivationGroup::Independent) \
	op(ELyraAbilityActivationGroup::Exclusive_Replaceable) \
	op(ELyraAbilityActivationGroup::Exclusive_Blocking) 

enum class ELyraAbilityActivationGroup : uint8;
template<> struct TIsUEnumClass<ELyraAbilityActivationGroup> { enum { Value = true }; };
template<> SKYSHOOTERGAME_API UEnum* StaticEnum<ELyraAbilityActivationGroup>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
