// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cosmetics/LyraControllerComponent_CharacterParts.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FLyraCharacterPart;
#ifdef SKYSHOOTERGAME_LyraControllerComponent_CharacterParts_generated_h
#error "LyraControllerComponent_CharacterParts.generated.h already included, missing '#pragma once' in LyraControllerComponent_CharacterParts.h"
#endif
#define SKYSHOOTERGAME_LyraControllerComponent_CharacterParts_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FLyraControllerCharacterPartEntry>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPossessedPawnChanged); \
	DECLARE_FUNCTION(execRemoveAllCharacterParts); \
	DECLARE_FUNCTION(execRemoveCharacterPart); \
	DECLARE_FUNCTION(execAddCharacterPart);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPossessedPawnChanged); \
	DECLARE_FUNCTION(execRemoveAllCharacterParts); \
	DECLARE_FUNCTION(execRemoveCharacterPart); \
	DECLARE_FUNCTION(execAddCharacterPart);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraControllerComponent_CharacterParts(); \
	friend struct Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics; \
public: \
	DECLARE_CLASS(ULyraControllerComponent_CharacterParts, UControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraControllerComponent_CharacterParts)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_INCLASS \
private: \
	static void StaticRegisterNativesULyraControllerComponent_CharacterParts(); \
	friend struct Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics; \
public: \
	DECLARE_CLASS(ULyraControllerComponent_CharacterParts, UControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraControllerComponent_CharacterParts)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraControllerComponent_CharacterParts(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraControllerComponent_CharacterParts) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraControllerComponent_CharacterParts); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraControllerComponent_CharacterParts); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraControllerComponent_CharacterParts(ULyraControllerComponent_CharacterParts&&); \
	NO_API ULyraControllerComponent_CharacterParts(const ULyraControllerComponent_CharacterParts&); \
public: \
	NO_API virtual ~ULyraControllerComponent_CharacterParts();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraControllerComponent_CharacterParts(ULyraControllerComponent_CharacterParts&&); \
	NO_API ULyraControllerComponent_CharacterParts(const ULyraControllerComponent_CharacterParts&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraControllerComponent_CharacterParts); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraControllerComponent_CharacterParts); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraControllerComponent_CharacterParts) \
	NO_API virtual ~ULyraControllerComponent_CharacterParts();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_56_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraControllerComponent_CharacterParts>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraControllerComponent_CharacterParts_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
