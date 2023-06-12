// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/LyraGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraAbilitySystemComponent;
struct FLyraVerbMessage;
#ifdef SKYSHOOTERGAME_LyraGameState_generated_h
#error "LyraGameState.generated.h already included, missing '#pragma once' in LyraGameState.h"
#endif
#define SKYSHOOTERGAME_LyraGameState_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_RPC_WRAPPERS \
	virtual void MulticastReliableMessageToClients_Implementation(const FLyraVerbMessage Message); \
	virtual void MulticastMessageToClients_Implementation(const FLyraVerbMessage Message); \
 \
	DECLARE_FUNCTION(execMulticastReliableMessageToClients); \
	DECLARE_FUNCTION(execMulticastMessageToClients); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponent);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastReliableMessageToClients_Implementation(const FLyraVerbMessage Message); \
	virtual void MulticastMessageToClients_Implementation(const FLyraVerbMessage Message); \
 \
	DECLARE_FUNCTION(execMulticastReliableMessageToClients); \
	DECLARE_FUNCTION(execMulticastMessageToClients); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponent);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_CALLBACK_WRAPPERS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraGameState(); \
	friend struct Z_Construct_UClass_ALyraGameState_Statics; \
public: \
	DECLARE_CLASS(ALyraGameState, AModularGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraGameState) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraGameState*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerFPS=NETFIELD_REP_START, \
		NETFIELD_REP_END=ServerFPS	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_INCLASS \
private: \
	static void StaticRegisterNativesALyraGameState(); \
	friend struct Z_Construct_UClass_ALyraGameState_Statics; \
public: \
	DECLARE_CLASS(ALyraGameState, AModularGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraGameState) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraGameState*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerFPS=NETFIELD_REP_START, \
		NETFIELD_REP_END=ServerFPS	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALyraGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraGameState(ALyraGameState&&); \
	NO_API ALyraGameState(const ALyraGameState&); \
public: \
	NO_API virtual ~ALyraGameState();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraGameState(ALyraGameState&&); \
	NO_API ALyraGameState(const ALyraGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraGameState) \
	NO_API virtual ~ALyraGameState();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_25_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_CALLBACK_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_CALLBACK_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ALyraGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameModes_LyraGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
