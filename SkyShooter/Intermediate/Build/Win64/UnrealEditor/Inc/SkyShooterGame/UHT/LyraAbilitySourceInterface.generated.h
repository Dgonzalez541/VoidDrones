// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/LyraAbilitySourceInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SKYSHOOTERGAME_LyraAbilitySourceInterface_generated_h
#error "LyraAbilitySourceInterface.generated.h already included, missing '#pragma once' in LyraAbilitySourceInterface.h"
#endif
#define SKYSHOOTERGAME_LyraAbilitySourceInterface_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_RPC_WRAPPERS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraAbilitySourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraAbilitySourceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraAbilitySourceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraAbilitySourceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraAbilitySourceInterface(ULyraAbilitySourceInterface&&); \
	NO_API ULyraAbilitySourceInterface(const ULyraAbilitySourceInterface&); \
public: \
	NO_API virtual ~ULyraAbilitySourceInterface();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraAbilitySourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraAbilitySourceInterface(ULyraAbilitySourceInterface&&); \
	NO_API ULyraAbilitySourceInterface(const ULyraAbilitySourceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraAbilitySourceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraAbilitySourceInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraAbilitySourceInterface) \
	NO_API virtual ~ULyraAbilitySourceInterface();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULyraAbilitySourceInterface(); \
	friend struct Z_Construct_UClass_ULyraAbilitySourceInterface_Statics; \
public: \
	DECLARE_CLASS(ULyraAbilitySourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraAbilitySourceInterface)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILyraAbilitySourceInterface() {} \
public: \
	typedef ULyraAbilitySourceInterface UClassType; \
	typedef ILyraAbilitySourceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~ILyraAbilitySourceInterface() {} \
public: \
	typedef ULyraAbilitySourceInterface UClassType; \
	typedef ILyraAbilitySourceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_15_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraAbilitySourceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_AbilitySystem_LyraAbilitySourceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
