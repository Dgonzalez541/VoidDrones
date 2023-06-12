// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Frontend/LyraFrontendStateComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonUserInfo;
enum class ECommonUserOnlineContext : uint8;
enum class ECommonUserPrivilege : uint8;
#ifdef SKYSHOOTERGAME_LyraFrontendStateComponent_generated_h
#error "LyraFrontendStateComponent.generated.h already included, missing '#pragma once' in LyraFrontendStateComponent.h"
#endif
#define SKYSHOOTERGAME_LyraFrontendStateComponent_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnUserInitialized);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnUserInitialized);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraFrontendStateComponent(); \
	friend struct Z_Construct_UClass_ULyraFrontendStateComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraFrontendStateComponent, UGameStateComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraFrontendStateComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULyraFrontendStateComponent*>(this); }


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesULyraFrontendStateComponent(); \
	friend struct Z_Construct_UClass_ULyraFrontendStateComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraFrontendStateComponent, UGameStateComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraFrontendStateComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULyraFrontendStateComponent*>(this); }


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraFrontendStateComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraFrontendStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraFrontendStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraFrontendStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraFrontendStateComponent(ULyraFrontendStateComponent&&); \
	NO_API ULyraFrontendStateComponent(const ULyraFrontendStateComponent&); \
public: \
	NO_API virtual ~ULyraFrontendStateComponent();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraFrontendStateComponent(ULyraFrontendStateComponent&&); \
	NO_API ULyraFrontendStateComponent(const ULyraFrontendStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraFrontendStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraFrontendStateComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraFrontendStateComponent) \
	NO_API virtual ~ULyraFrontendStateComponent();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_28_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraFrontendStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Frontend_LyraFrontendStateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
