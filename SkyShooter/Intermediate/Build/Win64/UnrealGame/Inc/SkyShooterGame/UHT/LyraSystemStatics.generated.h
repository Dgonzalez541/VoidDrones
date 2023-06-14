// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/LyraSystemStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UObject;
struct FLinearColor;
struct FPrimaryAssetId;
#ifdef SKYSHOOTERGAME_LyraSystemStatics_generated_h
#error "LyraSystemStatics.generated.h already included, missing '#pragma once' in LyraSystemStatics.h"
#endif
#define SKYSHOOTERGAME_LyraSystemStatics_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindComponentsByClass); \
	DECLARE_FUNCTION(execSetColorParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execSetVectorParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execSetScalarParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execPlayNextGame); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromUserFacingExperienceName); \
	DECLARE_FUNCTION(execGetTypedSoftObjectReferenceFromPrimaryAssetId);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindComponentsByClass); \
	DECLARE_FUNCTION(execSetColorParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execSetVectorParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execSetScalarParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execPlayNextGame); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromUserFacingExperienceName); \
	DECLARE_FUNCTION(execGetTypedSoftObjectReferenceFromPrimaryAssetId);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraSystemStatics(); \
	friend struct Z_Construct_UClass_ULyraSystemStatics_Statics; \
public: \
	DECLARE_CLASS(ULyraSystemStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraSystemStatics)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULyraSystemStatics(); \
	friend struct Z_Construct_UClass_ULyraSystemStatics_Statics; \
public: \
	DECLARE_CLASS(ULyraSystemStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraSystemStatics)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraSystemStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraSystemStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraSystemStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraSystemStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraSystemStatics(ULyraSystemStatics&&); \
	NO_API ULyraSystemStatics(const ULyraSystemStatics&); \
public: \
	NO_API virtual ~ULyraSystemStatics();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraSystemStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraSystemStatics(ULyraSystemStatics&&); \
	NO_API ULyraSystemStatics(const ULyraSystemStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraSystemStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraSystemStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraSystemStatics) \
	NO_API virtual ~ULyraSystemStatics();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_23_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraSystemStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_System_LyraSystemStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS