// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/LyraGameplayAbility_RangedWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraRangedWeaponInstance;
struct FGameplayAbilityTargetDataHandle;
#ifdef SKYSHOOTERGAME_LyraGameplayAbility_RangedWeapon_generated_h
#error "LyraGameplayAbility_RangedWeapon.generated.h already included, missing '#pragma once' in LyraGameplayAbility_RangedWeapon.h"
#endif
#define SKYSHOOTERGAME_LyraGameplayAbility_RangedWeapon_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartRangedWeaponTargeting); \
	DECLARE_FUNCTION(execGetWeaponInstance);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartRangedWeaponTargeting); \
	DECLARE_FUNCTION(execGetWeaponInstance);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_CALLBACK_WRAPPERS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraGameplayAbility_RangedWeapon(); \
	friend struct Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon_Statics; \
public: \
	DECLARE_CLASS(ULyraGameplayAbility_RangedWeapon, ULyraGameplayAbility_FromEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGameplayAbility_RangedWeapon)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_INCLASS \
private: \
	static void StaticRegisterNativesULyraGameplayAbility_RangedWeapon(); \
	friend struct Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon_Statics; \
public: \
	DECLARE_CLASS(ULyraGameplayAbility_RangedWeapon, ULyraGameplayAbility_FromEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGameplayAbility_RangedWeapon)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraGameplayAbility_RangedWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraGameplayAbility_RangedWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGameplayAbility_RangedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGameplayAbility_RangedWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraGameplayAbility_RangedWeapon(ULyraGameplayAbility_RangedWeapon&&); \
	NO_API ULyraGameplayAbility_RangedWeapon(const ULyraGameplayAbility_RangedWeapon&); \
public: \
	NO_API virtual ~ULyraGameplayAbility_RangedWeapon();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraGameplayAbility_RangedWeapon(ULyraGameplayAbility_RangedWeapon&&); \
	NO_API ULyraGameplayAbility_RangedWeapon(const ULyraGameplayAbility_RangedWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGameplayAbility_RangedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGameplayAbility_RangedWeapon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraGameplayAbility_RangedWeapon) \
	NO_API virtual ~ULyraGameplayAbility_RangedWeapon();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_54_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_CALLBACK_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_CALLBACK_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraGameplayAbility_RangedWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Weapons_LyraGameplayAbility_RangedWeapon_h


#define FOREACH_ENUM_ELYRAABILITYTARGETINGSOURCE(op) \
	op(ELyraAbilityTargetingSource::CameraTowardsFocus) \
	op(ELyraAbilityTargetingSource::PawnForward) \
	op(ELyraAbilityTargetingSource::PawnTowardsFocus) \
	op(ELyraAbilityTargetingSource::WeaponForward) \
	op(ELyraAbilityTargetingSource::WeaponTowardsFocus) \
	op(ELyraAbilityTargetingSource::Custom) 

enum class ELyraAbilityTargetingSource : uint8;
template<> struct TIsUEnumClass<ELyraAbilityTargetingSource> { enum { Value = true }; };
template<> SKYSHOOTERGAME_API UEnum* StaticEnum<ELyraAbilityTargetingSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS