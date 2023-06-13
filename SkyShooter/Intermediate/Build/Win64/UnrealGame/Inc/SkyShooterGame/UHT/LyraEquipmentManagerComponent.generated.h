// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipment/LyraEquipmentManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraEquipmentDefinition;
class ULyraEquipmentInstance;
#ifdef SKYSHOOTERGAME_LyraEquipmentManagerComponent_generated_h
#error "LyraEquipmentManagerComponent.generated.h already included, missing '#pragma once' in LyraEquipmentManagerComponent.h"
#endif
#define SKYSHOOTERGAME_LyraEquipmentManagerComponent_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FLyraAppliedEquipmentEntry>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraEquipmentList_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FLyraEquipmentList, Entries, SKYSHOOTERGAME_API );


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FLyraEquipmentList>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEquipmentInstancesOfType); \
	DECLARE_FUNCTION(execGetFirstInstanceOfType); \
	DECLARE_FUNCTION(execUnequipItem); \
	DECLARE_FUNCTION(execEquipItem);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEquipmentInstancesOfType); \
	DECLARE_FUNCTION(execGetFirstInstanceOfType); \
	DECLARE_FUNCTION(execUnequipItem); \
	DECLARE_FUNCTION(execEquipItem);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraEquipmentManagerComponent(); \
	friend struct Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraEquipmentManagerComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraEquipmentManagerComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquipmentList=NETFIELD_REP_START, \
		NETFIELD_REP_END=EquipmentList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_INCLASS \
private: \
	static void StaticRegisterNativesULyraEquipmentManagerComponent(); \
	friend struct Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraEquipmentManagerComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraEquipmentManagerComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquipmentList=NETFIELD_REP_START, \
		NETFIELD_REP_END=EquipmentList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraEquipmentManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraEquipmentManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraEquipmentManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraEquipmentManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraEquipmentManagerComponent(ULyraEquipmentManagerComponent&&); \
	NO_API ULyraEquipmentManagerComponent(const ULyraEquipmentManagerComponent&); \
public: \
	NO_API virtual ~ULyraEquipmentManagerComponent();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraEquipmentManagerComponent(ULyraEquipmentManagerComponent&&); \
	NO_API ULyraEquipmentManagerComponent(const ULyraEquipmentManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraEquipmentManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraEquipmentManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraEquipmentManagerComponent) \
	NO_API virtual ~ULyraEquipmentManagerComponent();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_123_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraEquipmentManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraEquipmentManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
