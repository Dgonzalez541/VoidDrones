// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/LyraHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraHUD_generated_h
#error "LyraHUD.generated.h already included, missing '#pragma once' in LyraHUD.h"
#endif
#define LYRAGAME_LyraHUD_generated_h

#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_SPARSE_DATA
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_RPC_WRAPPERS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_ACCESSORS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraHUD(); \
	friend struct Z_Construct_UClass_ALyraHUD_Statics; \
public: \
	DECLARE_CLASS(ALyraHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraHUD)


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_INCLASS \
private: \
	static void StaticRegisterNativesALyraHUD(); \
	friend struct Z_Construct_UClass_ALyraHUD_Statics; \
public: \
	DECLARE_CLASS(ALyraHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraHUD)


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALyraHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraHUD(ALyraHUD&&); \
	NO_API ALyraHUD(const ALyraHUD&); \
public: \
	NO_API virtual ~ALyraHUD();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraHUD(ALyraHUD&&); \
	NO_API ALyraHUD(const ALyraHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraHUD) \
	NO_API virtual ~ALyraHUD();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_23_PROLOG
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_RPC_WRAPPERS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_INCLASS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_INCLASS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
