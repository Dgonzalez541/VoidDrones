// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/IPickupable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IPickupable;
class ULyraInventoryManagerComponent;
struct FInventoryPickup;
#ifdef SKYSHOOTERGAME_IPickupable_generated_h
#error "IPickupable.generated.h already included, missing '#pragma once' in IPickupable.h"
#endif
#define SKYSHOOTERGAME_IPickupable_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPickupTemplate_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FPickupTemplate>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPickupInstance_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FPickupInstance>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryPickup_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FInventoryPickup>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPickupInventory);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPickupInventory);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SKYSHOOTERGAME_API UPickupable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SKYSHOOTERGAME_API, UPickupable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SKYSHOOTERGAME_API UPickupable(UPickupable&&); \
	SKYSHOOTERGAME_API UPickupable(const UPickupable&); \
public: \
	SKYSHOOTERGAME_API virtual ~UPickupable();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SKYSHOOTERGAME_API UPickupable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SKYSHOOTERGAME_API UPickupable(UPickupable&&); \
	SKYSHOOTERGAME_API UPickupable(const UPickupable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SKYSHOOTERGAME_API, UPickupable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupable) \
	SKYSHOOTERGAME_API virtual ~UPickupable();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPickupable(); \
	friend struct Z_Construct_UClass_UPickupable_Statics; \
public: \
	DECLARE_CLASS(UPickupable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), SKYSHOOTERGAME_API) \
	DECLARE_SERIALIZER(UPickupable)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPickupable() {} \
public: \
	typedef UPickupable UClassType; \
	typedef IPickupable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_INCLASS_IINTERFACE \
protected: \
	virtual ~IPickupable() {} \
public: \
	typedef UPickupable UClassType; \
	typedef IPickupable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_59_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_62_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class UPickupable>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddPickupToInventory); \
	DECLARE_FUNCTION(execGetFirstPickupableFromActor);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddPickupToInventory); \
	DECLARE_FUNCTION(execGetFirstPickupableFromActor);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPickupableStatics(); \
	friend struct Z_Construct_UClass_UPickupableStatics_Statics; \
public: \
	DECLARE_CLASS(UPickupableStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UPickupableStatics)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_INCLASS \
private: \
	static void StaticRegisterNativesUPickupableStatics(); \
	friend struct Z_Construct_UClass_UPickupableStatics_Statics; \
public: \
	DECLARE_CLASS(UPickupableStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UPickupableStatics)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPickupableStatics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupableStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPickupableStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupableStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPickupableStatics(UPickupableStatics&&); \
	NO_API UPickupableStatics(const UPickupableStatics&); \
public: \
	NO_API virtual ~UPickupableStatics();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPickupableStatics(UPickupableStatics&&); \
	NO_API UPickupableStatics(const UPickupableStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPickupableStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupableStatics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPickupableStatics) \
	NO_API virtual ~UPickupableStatics();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_76_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class UPickupableStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Inventory_IPickupable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
