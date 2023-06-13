// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/LyraInventoryManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraInventoryItemDefinition;
class ULyraInventoryItemInstance;
#ifdef SKYSHOOTERGAME_LyraInventoryManagerComponent_generated_h
#error "LyraInventoryManagerComponent.generated.h already included, missing '#pragma once' in LyraInventoryManagerComponent.h"
#endif
#define SKYSHOOTERGAME_LyraInventoryManagerComponent_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FLyraInventoryChangeMessage>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FLyraInventoryEntry>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraInventoryList_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FLyraInventoryList, Entries, SKYSHOOTERGAME_API );


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FLyraInventoryList>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindFirstItemStackByDefinition); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execRemoveItemInstance); \
	DECLARE_FUNCTION(execAddItemInstance); \
	DECLARE_FUNCTION(execAddItemDefinition); \
	DECLARE_FUNCTION(execCanAddItemDefinition);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindFirstItemStackByDefinition); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execRemoveItemInstance); \
	DECLARE_FUNCTION(execAddItemInstance); \
	DECLARE_FUNCTION(execAddItemDefinition); \
	DECLARE_FUNCTION(execCanAddItemDefinition);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraInventoryManagerComponent(); \
	friend struct Z_Construct_UClass_ULyraInventoryManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraInventoryManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraInventoryManagerComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InventoryList=NETFIELD_REP_START, \
		NETFIELD_REP_END=InventoryList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_INCLASS \
private: \
	static void StaticRegisterNativesULyraInventoryManagerComponent(); \
	friend struct Z_Construct_UClass_ULyraInventoryManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraInventoryManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraInventoryManagerComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InventoryList=NETFIELD_REP_START, \
		NETFIELD_REP_END=InventoryList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraInventoryManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraInventoryManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraInventoryManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraInventoryManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraInventoryManagerComponent(ULyraInventoryManagerComponent&&); \
	NO_API ULyraInventoryManagerComponent(const ULyraInventoryManagerComponent&); \
public: \
	NO_API virtual ~ULyraInventoryManagerComponent();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraInventoryManagerComponent(ULyraInventoryManagerComponent&&); \
	NO_API ULyraInventoryManagerComponent(const ULyraInventoryManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraInventoryManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraInventoryManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraInventoryManagerComponent) \
	NO_API virtual ~ULyraInventoryManagerComponent();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_143_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraInventoryManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_LyraInventoryManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
