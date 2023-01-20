// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Attributes/LyraCombatSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef LYRAGAME_LyraCombatSet_generated_h
#error "LyraCombatSet.generated.h already included, missing '#pragma once' in LyraCombatSet.h"
#endif
#define LYRAGAME_LyraCombatSet_generated_h

#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_SPARSE_DATA
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_BaseHeal); \
	DECLARE_FUNCTION(execOnRep_BaseDamage);


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_BaseHeal); \
	DECLARE_FUNCTION(execOnRep_BaseDamage);


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_ACCESSORS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraCombatSet(); \
	friend struct Z_Construct_UClass_ULyraCombatSet_Statics; \
public: \
	DECLARE_CLASS(ULyraCombatSet, ULyraAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraCombatSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BaseDamage=NETFIELD_REP_START, \
		BaseHeal, \
		NETFIELD_REP_END=BaseHeal	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(ULyraCombatSet) \
public:


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_INCLASS \
private: \
	static void StaticRegisterNativesULyraCombatSet(); \
	friend struct Z_Construct_UClass_ULyraCombatSet_Statics; \
public: \
	DECLARE_CLASS(ULyraCombatSet, ULyraAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraCombatSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BaseDamage=NETFIELD_REP_START, \
		BaseHeal, \
		NETFIELD_REP_END=BaseHeal	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(ULyraCombatSet) \
public:


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraCombatSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraCombatSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraCombatSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraCombatSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraCombatSet(ULyraCombatSet&&); \
	NO_API ULyraCombatSet(const ULyraCombatSet&); \
public: \
	NO_API virtual ~ULyraCombatSet();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraCombatSet(ULyraCombatSet&&); \
	NO_API ULyraCombatSet(const ULyraCombatSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraCombatSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraCombatSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraCombatSet) \
	NO_API virtual ~ULyraCombatSet();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_24_PROLOG
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_RPC_WRAPPERS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_INCLASS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_INCLASS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraCombatSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
