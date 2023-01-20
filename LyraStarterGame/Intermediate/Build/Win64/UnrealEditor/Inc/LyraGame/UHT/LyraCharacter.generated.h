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
#ifdef LYRAGAME_LyraCharacter_generated_h
#error "LyraCharacter.generated.h already included, missing '#pragma once' in LyraCharacter.h"
#endif
#define LYRAGAME_LyraCharacter_generated_h

#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraReplicatedAcceleration>();

#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_SPARSE_DATA
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MyTeamID); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAcceleration); \
	DECLARE_FUNCTION(execOnControllerChangedTeam); \
	DECLARE_FUNCTION(execOnDeathFinished); \
	DECLARE_FUNCTION(execOnDeathStarted); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLyraPlayerState); \
	DECLARE_FUNCTION(execGetLyraPlayerController);


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MyTeamID); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAcceleration); \
	DECLARE_FUNCTION(execOnControllerChangedTeam); \
	DECLARE_FUNCTION(execOnDeathFinished); \
	DECLARE_FUNCTION(execOnDeathStarted); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLyraPlayerState); \
	DECLARE_FUNCTION(execGetLyraPlayerController);


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_ACCESSORS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_CALLBACK_WRAPPERS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraCharacter(); \
	friend struct Z_Construct_UClass_ALyraCharacter_Statics; \
public: \
	DECLARE_CLASS(ALyraCharacter, AModularCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedAcceleration=NETFIELD_REP_START, \
		MyTeamID, \
		NETFIELD_REP_END=MyTeamID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_INCLASS \
private: \
	static void StaticRegisterNativesALyraCharacter(); \
	friend struct Z_Construct_UClass_ALyraCharacter_Statics; \
public: \
	DECLARE_CLASS(ALyraCharacter, AModularCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedAcceleration=NETFIELD_REP_START, \
		MyTeamID, \
		NETFIELD_REP_END=MyTeamID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_STANDARD_CONSTRUCTORS \
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


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraCharacter(ALyraCharacter&&); \
	NO_API ALyraCharacter(const ALyraCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraCharacter) \
	NO_API virtual ~ALyraCharacter();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_62_PROLOG
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_RPC_WRAPPERS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_CALLBACK_WRAPPERS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_INCLASS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_CALLBACK_WRAPPERS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_INCLASS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
