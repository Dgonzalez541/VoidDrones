// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/LyraCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ALyraPlayerController;
class ALyraPlayerState;
class ULyraAbilitySystemComponent;
class UObject;
struct FGenericTeamId;
#ifdef SKYSHOOTERGAME_LyraCharacter_generated_h
#error "LyraCharacter.generated.h already included, missing '#pragma once' in LyraCharacter.h"
#endif
#define SKYSHOOTERGAME_LyraCharacter_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FLyraReplicatedAcceleration>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MyTeamID); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAcceleration); \
	DECLARE_FUNCTION(execOnControllerChangedTeam); \
	DECLARE_FUNCTION(execOnDeathFinished); \
	DECLARE_FUNCTION(execOnDeathStarted); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLyraPlayerState); \
	DECLARE_FUNCTION(execGetLyraPlayerController);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MyTeamID); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAcceleration); \
	DECLARE_FUNCTION(execOnControllerChangedTeam); \
	DECLARE_FUNCTION(execOnDeathFinished); \
	DECLARE_FUNCTION(execOnDeathStarted); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLyraPlayerState); \
	DECLARE_FUNCTION(execGetLyraPlayerController);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_CALLBACK_WRAPPERS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraCharacter(); \
	friend struct Z_Construct_UClass_ALyraCharacter_Statics; \
public: \
	DECLARE_CLASS(ALyraCharacter, AModularCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedAcceleration=NETFIELD_REP_START, \
		MyTeamID, \
		NETFIELD_REP_END=MyTeamID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_INCLASS \
private: \
	static void StaticRegisterNativesALyraCharacter(); \
	friend struct Z_Construct_UClass_ALyraCharacter_Statics; \
public: \
	DECLARE_CLASS(ALyraCharacter, AModularCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedAcceleration=NETFIELD_REP_START, \
		MyTeamID, \
		NETFIELD_REP_END=MyTeamID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALyraCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraCharacter(ALyraCharacter&&); \
	NO_API ALyraCharacter(const ALyraCharacter&); \
public: \
	NO_API virtual ~ALyraCharacter();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraCharacter(ALyraCharacter&&); \
	NO_API ALyraCharacter(const ALyraCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraCharacter) \
	NO_API virtual ~ALyraCharacter();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_64_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_CALLBACK_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_CALLBACK_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ALyraCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Character_LyraCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
