// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/LyraGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class ULyraPawnData;
#ifdef SKYSHOOTERGAME_LyraGameMode_generated_h
#error "LyraGameMode.generated.h already included, missing '#pragma once' in LyraGameMode.h"
#endif
#define SKYSHOOTERGAME_LyraGameMode_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestPlayerRestartNextFrame); \
	DECLARE_FUNCTION(execGetPawnDataForController);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestPlayerRestartNextFrame); \
	DECLARE_FUNCTION(execGetPawnDataForController);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraGameMode(); \
	friend struct Z_Construct_UClass_ALyraGameMode_Statics; \
public: \
	DECLARE_CLASS(ALyraGameMode, AModularGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraGameMode)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_INCLASS \
private: \
	static void StaticRegisterNativesALyraGameMode(); \
	friend struct Z_Construct_UClass_ALyraGameMode_Statics; \
public: \
	DECLARE_CLASS(ALyraGameMode, AModularGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraGameMode)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALyraGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraGameMode(ALyraGameMode&&); \
	NO_API ALyraGameMode(const ALyraGameMode&); \
public: \
	NO_API virtual ~ALyraGameMode();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraGameMode(ALyraGameMode&&); \
	NO_API ALyraGameMode(const ALyraGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraGameMode) \
	NO_API virtual ~ALyraGameMode();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_38_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ALyraGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
