// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teams/LyraTeamSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraTeamDisplayAsset;
class UObject;
enum class ELyraTeamComparison : uint8;
struct FGameplayTag;
#ifdef SKYSHOOTERGAME_LyraTeamSubsystem_generated_h
#error "LyraTeamSubsystem.generated.h already included, missing '#pragma once' in LyraTeamSubsystem.h"
#endif
#define SKYSHOOTERGAME_LyraTeamSubsystem_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_28_DELEGATE \
struct _Script_SkyShooterGame_eventOnLyraTeamDisplayAssetChangedDelegate_Parms \
{ \
	const ULyraTeamDisplayAsset* DisplayAsset; \
}; \
static inline void FOnLyraTeamDisplayAssetChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLyraTeamDisplayAssetChangedDelegate, const ULyraTeamDisplayAsset* DisplayAsset) \
{ \
	_Script_SkyShooterGame_eventOnLyraTeamDisplayAssetChangedDelegate_Parms Parms; \
	Parms.DisplayAsset=DisplayAsset; \
	OnLyraTeamDisplayAssetChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FLyraTeamTrackingInfo>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTeamIDs); \
	DECLARE_FUNCTION(execGetEffectiveTeamDisplayAsset); \
	DECLARE_FUNCTION(execGetTeamDisplayAsset); \
	DECLARE_FUNCTION(execDoesTeamExist); \
	DECLARE_FUNCTION(execTeamHasTag); \
	DECLARE_FUNCTION(execGetTeamTagStackCount); \
	DECLARE_FUNCTION(execRemoveTeamTagStack); \
	DECLARE_FUNCTION(execAddTeamTagStack); \
	DECLARE_FUNCTION(execCompareTeams); \
	DECLARE_FUNCTION(execFindTeamFromActor);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTeamIDs); \
	DECLARE_FUNCTION(execGetEffectiveTeamDisplayAsset); \
	DECLARE_FUNCTION(execGetTeamDisplayAsset); \
	DECLARE_FUNCTION(execDoesTeamExist); \
	DECLARE_FUNCTION(execTeamHasTag); \
	DECLARE_FUNCTION(execGetTeamTagStackCount); \
	DECLARE_FUNCTION(execRemoveTeamTagStack); \
	DECLARE_FUNCTION(execAddTeamTagStack); \
	DECLARE_FUNCTION(execCompareTeams); \
	DECLARE_FUNCTION(execFindTeamFromActor);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraTeamSubsystem(); \
	friend struct Z_Construct_UClass_ULyraTeamSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraTeamSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraTeamSubsystem)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_INCLASS \
private: \
	static void StaticRegisterNativesULyraTeamSubsystem(); \
	friend struct Z_Construct_UClass_ULyraTeamSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraTeamSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraTeamSubsystem)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTeamSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTeamSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTeamSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTeamSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraTeamSubsystem(ULyraTeamSubsystem&&); \
	NO_API ULyraTeamSubsystem(const ULyraTeamSubsystem&); \
public: \
	NO_API virtual ~ULyraTeamSubsystem();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraTeamSubsystem(ULyraTeamSubsystem&&); \
	NO_API ULyraTeamSubsystem(const ULyraTeamSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTeamSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTeamSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraTeamSubsystem) \
	NO_API virtual ~ULyraTeamSubsystem();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_68_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraTeamSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamSubsystem_h


#define FOREACH_ENUM_ELYRATEAMCOMPARISON(op) \
	op(ELyraTeamComparison::OnSameTeam) \
	op(ELyraTeamComparison::DifferentTeams) \
	op(ELyraTeamComparison::InvalidArgument) 

enum class ELyraTeamComparison : uint8;
template<> struct TIsUEnumClass<ELyraTeamComparison> { enum { Value = true }; };
template<> SKYSHOOTERGAME_API UEnum* StaticEnum<ELyraTeamComparison>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
