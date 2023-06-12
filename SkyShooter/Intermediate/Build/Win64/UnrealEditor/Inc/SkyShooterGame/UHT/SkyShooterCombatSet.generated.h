// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkyShooterCombatSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef SKYSHOOTERGAME_SkyShooterCombatSet_generated_h
#error "SkyShooterCombatSet.generated.h already included, missing '#pragma once' in SkyShooterCombatSet.h"
#endif
#define SKYSHOOTERGAME_SkyShooterCombatSet_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MaxCharges); \
	DECLARE_FUNCTION(execOnRep_Charge); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxCharges); \
	DECLARE_FUNCTION(execOnRep_Charge); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkyShooterCombatSet(); \
	friend struct Z_Construct_UClass_USkyShooterCombatSet_Statics; \
public: \
	DECLARE_CLASS(USkyShooterCombatSet, ULyraCombatSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(USkyShooterCombatSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Mana=NETFIELD_REP_START, \
		MaxMana, \
		Charge, \
		MaxCharges, \
		NETFIELD_REP_END=MaxCharges	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSkyShooterCombatSet(); \
	friend struct Z_Construct_UClass_USkyShooterCombatSet_Statics; \
public: \
	DECLARE_CLASS(USkyShooterCombatSet, ULyraCombatSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(USkyShooterCombatSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Mana=NETFIELD_REP_START, \
		MaxMana, \
		Charge, \
		MaxCharges, \
		NETFIELD_REP_END=MaxCharges	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyShooterCombatSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyShooterCombatSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyShooterCombatSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyShooterCombatSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyShooterCombatSet(USkyShooterCombatSet&&); \
	NO_API USkyShooterCombatSet(const USkyShooterCombatSet&); \
public: \
	NO_API virtual ~USkyShooterCombatSet();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyShooterCombatSet(USkyShooterCombatSet&&); \
	NO_API USkyShooterCombatSet(const USkyShooterCombatSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyShooterCombatSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyShooterCombatSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkyShooterCombatSet) \
	NO_API virtual ~USkyShooterCombatSet();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_12_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class USkyShooterCombatSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
