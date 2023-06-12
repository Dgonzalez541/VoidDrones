// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Foundation/LyraLoadingScreenSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef SKYSHOOTERGAME_LyraLoadingScreenSubsystem_generated_h
#error "LyraLoadingScreenSubsystem.generated.h already included, missing '#pragma once' in LyraLoadingScreenSubsystem.h"
#endif
#define SKYSHOOTERGAME_LyraLoadingScreenSubsystem_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_16_DELEGATE \
struct _Script_SkyShooterGame_eventLoadingScreenWidgetChangedDelegate_Parms \
{ \
	TSubclassOf<UUserWidget>  NewWidgetClass; \
}; \
static inline void FLoadingScreenWidgetChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadingScreenWidgetChangedDelegate, TSubclassOf<UUserWidget>  NewWidgetClass) \
{ \
	_Script_SkyShooterGame_eventLoadingScreenWidgetChangedDelegate_Parms Parms; \
	Parms.NewWidgetClass=NewWidgetClass; \
	LoadingScreenWidgetChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLoadingScreenContentWidget); \
	DECLARE_FUNCTION(execSetLoadingScreenContentWidget);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLoadingScreenContentWidget); \
	DECLARE_FUNCTION(execSetLoadingScreenContentWidget);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraLoadingScreenSubsystem(); \
	friend struct Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraLoadingScreenSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraLoadingScreenSubsystem)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_INCLASS \
private: \
	static void StaticRegisterNativesULyraLoadingScreenSubsystem(); \
	friend struct Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraLoadingScreenSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraLoadingScreenSubsystem)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraLoadingScreenSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraLoadingScreenSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraLoadingScreenSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraLoadingScreenSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraLoadingScreenSubsystem(ULyraLoadingScreenSubsystem&&); \
	NO_API ULyraLoadingScreenSubsystem(const ULyraLoadingScreenSubsystem&); \
public: \
	NO_API virtual ~ULyraLoadingScreenSubsystem();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraLoadingScreenSubsystem(ULyraLoadingScreenSubsystem&&); \
	NO_API ULyraLoadingScreenSubsystem(const ULyraLoadingScreenSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraLoadingScreenSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraLoadingScreenSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraLoadingScreenSubsystem) \
	NO_API virtual ~ULyraLoadingScreenSubsystem();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_22_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraLoadingScreenSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Foundation_LyraLoadingScreenSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
