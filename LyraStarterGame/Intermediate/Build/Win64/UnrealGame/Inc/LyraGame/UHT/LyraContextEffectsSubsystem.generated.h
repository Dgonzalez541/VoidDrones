// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Feedback/ContextEffects/LyraContextEffectsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAudioComponent;
class ULyraContextEffectsLibrary;
class UNiagaraComponent;
class USceneComponent;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef LYRAGAME_LyraContextEffectsSubsystem_generated_h
#error "LyraContextEffectsSubsystem.generated.h already included, missing '#pragma once' in LyraContextEffectsSubsystem.h"
#endif
#define LYRAGAME_LyraContextEffectsSubsystem_generated_h

#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_SPARSE_DATA
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_RPC_WRAPPERS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_ACCESSORS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraContextEffectsSettings(); \
	friend struct Z_Construct_UClass_ULyraContextEffectsSettings_Statics; \
public: \
	DECLARE_CLASS(ULyraContextEffectsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraContextEffectsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_INCLASS \
private: \
	static void StaticRegisterNativesULyraContextEffectsSettings(); \
	friend struct Z_Construct_UClass_ULyraContextEffectsSettings_Statics; \
public: \
	DECLARE_CLASS(ULyraContextEffectsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraContextEffectsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraContextEffectsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraContextEffectsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraContextEffectsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraContextEffectsSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraContextEffectsSettings(ULyraContextEffectsSettings&&); \
	NO_API ULyraContextEffectsSettings(const ULyraContextEffectsSettings&); \
public: \
	NO_API virtual ~ULyraContextEffectsSettings();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraContextEffectsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraContextEffectsSettings(ULyraContextEffectsSettings&&); \
	NO_API ULyraContextEffectsSettings(const ULyraContextEffectsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraContextEffectsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraContextEffectsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraContextEffectsSettings) \
	NO_API virtual ~ULyraContextEffectsSettings();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_35_PROLOG
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_RPC_WRAPPERS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_INCLASS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_INCLASS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraContextEffectsSettings>();

#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_SPARSE_DATA
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_RPC_WRAPPERS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_ACCESSORS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraContextEffectsSet(); \
	friend struct Z_Construct_UClass_ULyraContextEffectsSet_Statics; \
public: \
	DECLARE_CLASS(ULyraContextEffectsSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraContextEffectsSet)


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_INCLASS \
private: \
	static void StaticRegisterNativesULyraContextEffectsSet(); \
	friend struct Z_Construct_UClass_ULyraContextEffectsSet_Statics; \
public: \
	DECLARE_CLASS(ULyraContextEffectsSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraContextEffectsSet)


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraContextEffectsSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraContextEffectsSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraContextEffectsSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraContextEffectsSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraContextEffectsSet(ULyraContextEffectsSet&&); \
	NO_API ULyraContextEffectsSet(const ULyraContextEffectsSet&); \
public: \
	NO_API virtual ~ULyraContextEffectsSet();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraContextEffectsSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraContextEffectsSet(ULyraContextEffectsSet&&); \
	NO_API ULyraContextEffectsSet(const ULyraContextEffectsSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraContextEffectsSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraContextEffectsSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraContextEffectsSet) \
	NO_API virtual ~ULyraContextEffectsSet();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_49_PROLOG
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_RPC_WRAPPERS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_INCLASS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_INCLASS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraContextEffectsSet>();

#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_SPARSE_DATA
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnloadAndRemoveContextEffectsLibraries); \
	DECLARE_FUNCTION(execLoadAndAddContextEffectsLibraries); \
	DECLARE_FUNCTION(execGetContextFromSurfaceType); \
	DECLARE_FUNCTION(execSpawnContextEffects);


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnloadAndRemoveContextEffectsLibraries); \
	DECLARE_FUNCTION(execLoadAndAddContextEffectsLibraries); \
	DECLARE_FUNCTION(execGetContextFromSurfaceType); \
	DECLARE_FUNCTION(execSpawnContextEffects);


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_ACCESSORS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraContextEffectsSubsystem(); \
	friend struct Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraContextEffectsSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraContextEffectsSubsystem)


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_INCLASS \
private: \
	static void StaticRegisterNativesULyraContextEffectsSubsystem(); \
	friend struct Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraContextEffectsSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraContextEffectsSubsystem)


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraContextEffectsSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraContextEffectsSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraContextEffectsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraContextEffectsSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraContextEffectsSubsystem(ULyraContextEffectsSubsystem&&); \
	NO_API ULyraContextEffectsSubsystem(const ULyraContextEffectsSubsystem&); \
public: \
	NO_API virtual ~ULyraContextEffectsSubsystem();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraContextEffectsSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraContextEffectsSubsystem(ULyraContextEffectsSubsystem&&); \
	NO_API ULyraContextEffectsSubsystem(const ULyraContextEffectsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraContextEffectsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraContextEffectsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraContextEffectsSubsystem) \
	NO_API virtual ~ULyraContextEffectsSubsystem();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_63_PROLOG
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_RPC_WRAPPERS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_INCLASS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_INCLASS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraContextEffectsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
