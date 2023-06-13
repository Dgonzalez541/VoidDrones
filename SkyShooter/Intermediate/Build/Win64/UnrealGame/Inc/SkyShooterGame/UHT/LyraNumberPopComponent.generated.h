// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Feedback/NumberPops/LyraNumberPopComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLyraNumberPopRequest;
#ifdef SKYSHOOTERGAME_LyraNumberPopComponent_generated_h
#error "LyraNumberPopComponent.generated.h already included, missing '#pragma once' in LyraNumberPopComponent.h"
#endif
#define SKYSHOOTERGAME_LyraNumberPopComponent_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FLyraNumberPopRequest>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddNumberPop);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddNumberPop);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraNumberPopComponent(); \
	friend struct Z_Construct_UClass_ULyraNumberPopComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraNumberPopComponent, UControllerComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraNumberPopComponent)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_INCLASS \
private: \
	static void StaticRegisterNativesULyraNumberPopComponent(); \
	friend struct Z_Construct_UClass_ULyraNumberPopComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraNumberPopComponent, UControllerComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraNumberPopComponent)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraNumberPopComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraNumberPopComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraNumberPopComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraNumberPopComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraNumberPopComponent(ULyraNumberPopComponent&&); \
	NO_API ULyraNumberPopComponent(const ULyraNumberPopComponent&); \
public: \
	NO_API virtual ~ULyraNumberPopComponent();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraNumberPopComponent(ULyraNumberPopComponent&&); \
	NO_API ULyraNumberPopComponent(const ULyraNumberPopComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraNumberPopComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraNumberPopComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraNumberPopComponent) \
	NO_API virtual ~ULyraNumberPopComponent();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_48_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraNumberPopComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Feedback_NumberPops_LyraNumberPopComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
