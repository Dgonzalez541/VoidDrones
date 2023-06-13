// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/LyraPlayerBotController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIPerceptionComponent;
class UObject;
#ifdef SKYSHOOTERGAME_LyraPlayerBotController_generated_h
#error "LyraPlayerBotController.generated.h already included, missing '#pragma once' in LyraPlayerBotController.h"
#endif
#define SKYSHOOTERGAME_LyraPlayerBotController_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerStateChangedTeam); \
	DECLARE_FUNCTION(execUpdateTeamAttitude);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerStateChangedTeam); \
	DECLARE_FUNCTION(execUpdateTeamAttitude);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraPlayerBotController(); \
	friend struct Z_Construct_UClass_ALyraPlayerBotController_Statics; \
public: \
	DECLARE_CLASS(ALyraPlayerBotController, AModularAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraPlayerBotController) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraPlayerBotController*>(this); }


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_INCLASS \
private: \
	static void StaticRegisterNativesALyraPlayerBotController(); \
	friend struct Z_Construct_UClass_ALyraPlayerBotController_Statics; \
public: \
	DECLARE_CLASS(ALyraPlayerBotController, AModularAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraPlayerBotController) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraPlayerBotController*>(this); }


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALyraPlayerBotController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraPlayerBotController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraPlayerBotController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraPlayerBotController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraPlayerBotController(ALyraPlayerBotController&&); \
	NO_API ALyraPlayerBotController(const ALyraPlayerBotController&); \
public: \
	NO_API virtual ~ALyraPlayerBotController();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraPlayerBotController(ALyraPlayerBotController&&); \
	NO_API ALyraPlayerBotController(const ALyraPlayerBotController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraPlayerBotController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraPlayerBotController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraPlayerBotController) \
	NO_API virtual ~ALyraPlayerBotController();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_24_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ALyraPlayerBotController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Player_LyraPlayerBotController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
