// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Phases/LyraGamePhaseSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraGamePhaseAbility;
enum class EPhaseTagMatchType : uint8;
struct FGameplayTag;
#ifdef SKYSHOOTERGAME_LyraGamePhaseSubsystem_generated_h
#error "LyraGamePhaseSubsystem.generated.h already included, missing '#pragma once' in LyraGamePhaseSubsystem.h"
#endif
#define SKYSHOOTERGAME_LyraGamePhaseSubsystem_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_24_DELEGATE \
struct _Script_SkyShooterGame_eventLyraGamePhaseDynamicDelegate_Parms \
{ \
	const ULyraGamePhaseAbility* Phase; \
}; \
static inline void FLyraGamePhaseDynamicDelegate_DelegateWrapper(const FScriptDelegate& LyraGamePhaseDynamicDelegate, const ULyraGamePhaseAbility* Phase) \
{ \
	_Script_SkyShooterGame_eventLyraGamePhaseDynamicDelegate_Parms Parms; \
	Parms.Phase=Phase; \
	LyraGamePhaseDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_27_DELEGATE \
struct _Script_SkyShooterGame_eventLyraGamePhaseTagDynamicDelegate_Parms \
{ \
	FGameplayTag PhaseTag; \
}; \
static inline void FLyraGamePhaseTagDynamicDelegate_DelegateWrapper(const FScriptDelegate& LyraGamePhaseTagDynamicDelegate, FGameplayTag const& PhaseTag) \
{ \
	_Script_SkyShooterGame_eventLyraGamePhaseTagDynamicDelegate_Parms Parms; \
	Parms.PhaseTag=PhaseTag; \
	LyraGamePhaseTagDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_WhenPhaseEnds); \
	DECLARE_FUNCTION(execK2_WhenPhaseStartsOrIsActive); \
	DECLARE_FUNCTION(execK2_StartPhase); \
	DECLARE_FUNCTION(execIsPhaseActive);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_WhenPhaseEnds); \
	DECLARE_FUNCTION(execK2_WhenPhaseStartsOrIsActive); \
	DECLARE_FUNCTION(execK2_StartPhase); \
	DECLARE_FUNCTION(execIsPhaseActive);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraGamePhaseSubsystem(); \
	friend struct Z_Construct_UClass_ULyraGamePhaseSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraGamePhaseSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGamePhaseSubsystem)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_INCLASS \
private: \
	static void StaticRegisterNativesULyraGamePhaseSubsystem(); \
	friend struct Z_Construct_UClass_ULyraGamePhaseSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraGamePhaseSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGamePhaseSubsystem)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraGamePhaseSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraGamePhaseSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGamePhaseSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGamePhaseSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraGamePhaseSubsystem(ULyraGamePhaseSubsystem&&); \
	NO_API ULyraGamePhaseSubsystem(const ULyraGamePhaseSubsystem&); \
public: \
	NO_API virtual ~ULyraGamePhaseSubsystem();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraGamePhaseSubsystem(ULyraGamePhaseSubsystem&&); \
	NO_API ULyraGamePhaseSubsystem(const ULyraGamePhaseSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGamePhaseSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGamePhaseSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraGamePhaseSubsystem) \
	NO_API virtual ~ULyraGamePhaseSubsystem();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_51_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraGamePhaseSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h


#define FOREACH_ENUM_EPHASETAGMATCHTYPE(op) \
	op(EPhaseTagMatchType::ExactMatch) \
	op(EPhaseTagMatchType::PartialMatch) 

enum class EPhaseTagMatchType : uint8;
template<> struct TIsUEnumClass<EPhaseTagMatchType> { enum { Value = true }; };
template<> SKYSHOOTERGAME_API UEnum* StaticEnum<EPhaseTagMatchType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
