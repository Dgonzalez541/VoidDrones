// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teams/LyraTeamAgentInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef SKYSHOOTERGAME_LyraTeamAgentInterface_generated_h
#error "LyraTeamAgentInterface.generated.h already included, missing '#pragma once' in LyraTeamAgentInterface.h"
#endif
#define SKYSHOOTERGAME_LyraTeamAgentInterface_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_15_DELEGATE \
struct _Script_SkyShooterGame_eventOnLyraTeamIndexChangedDelegate_Parms \
{ \
	UObject* ObjectChangingTeam; \
	int32 OldTeamID; \
	int32 NewTeamID; \
}; \
static inline void FOnLyraTeamIndexChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLyraTeamIndexChangedDelegate, UObject* ObjectChangingTeam, int32 OldTeamID, int32 NewTeamID) \
{ \
	_Script_SkyShooterGame_eventOnLyraTeamIndexChangedDelegate_Parms Parms; \
	Parms.ObjectChangingTeam=ObjectChangingTeam; \
	Parms.OldTeamID=OldTeamID; \
	Parms.NewTeamID=NewTeamID; \
	OnLyraTeamIndexChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_RPC_WRAPPERS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTeamAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTeamAgentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTeamAgentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTeamAgentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraTeamAgentInterface(ULyraTeamAgentInterface&&); \
	NO_API ULyraTeamAgentInterface(const ULyraTeamAgentInterface&); \
public: \
	NO_API virtual ~ULyraTeamAgentInterface();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTeamAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraTeamAgentInterface(ULyraTeamAgentInterface&&); \
	NO_API ULyraTeamAgentInterface(const ULyraTeamAgentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTeamAgentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTeamAgentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTeamAgentInterface) \
	NO_API virtual ~ULyraTeamAgentInterface();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULyraTeamAgentInterface(); \
	friend struct Z_Construct_UClass_ULyraTeamAgentInterface_Statics; \
public: \
	DECLARE_CLASS(ULyraTeamAgentInterface, UGenericTeamAgentInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraTeamAgentInterface)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILyraTeamAgentInterface() {} \
public: \
	typedef ULyraTeamAgentInterface UClassType; \
	typedef ILyraTeamAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_INCLASS_IINTERFACE \
protected: \
	virtual ~ILyraTeamAgentInterface() {} \
public: \
	typedef ULyraTeamAgentInterface UClassType; \
	typedef ILyraTeamAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_28_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraTeamAgentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Teams_LyraTeamAgentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
