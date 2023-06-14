// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/AsyncAction_ShowConfirmation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncAction_ShowConfirmation;
class UCommonGameDialogDescriptor;
class UObject;
enum class ECommonMessagingResult : uint8;
#ifdef COMMONGAME_AsyncAction_ShowConfirmation_generated_h
#error "AsyncAction_ShowConfirmation.generated.h already included, missing '#pragma once' in AsyncAction_ShowConfirmation.h"
#endif
#define COMMONGAME_AsyncAction_ShowConfirmation_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_18_DELEGATE \
struct _Script_CommonGame_eventCommonMessagingResultMCDelegate_Parms \
{ \
	ECommonMessagingResult Result; \
}; \
static inline void FCommonMessagingResultMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& CommonMessagingResultMCDelegate, ECommonMessagingResult Result) \
{ \
	_Script_CommonGame_eventCommonMessagingResultMCDelegate_Parms Parms; \
	Parms.Result=Result; \
	CommonMessagingResultMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShowConfirmationCustom); \
	DECLARE_FUNCTION(execShowConfirmationOkCancel); \
	DECLARE_FUNCTION(execShowConfirmationYesNo);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShowConfirmationCustom); \
	DECLARE_FUNCTION(execShowConfirmationOkCancel); \
	DECLARE_FUNCTION(execShowConfirmationYesNo);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_ShowConfirmation(); \
	friend struct Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_ShowConfirmation, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_ShowConfirmation)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncAction_ShowConfirmation(); \
	friend struct Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_ShowConfirmation, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_ShowConfirmation)


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_ShowConfirmation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_ShowConfirmation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_ShowConfirmation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_ShowConfirmation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncAction_ShowConfirmation(UAsyncAction_ShowConfirmation&&); \
	NO_API UAsyncAction_ShowConfirmation(const UAsyncAction_ShowConfirmation&); \
public: \
	NO_API virtual ~UAsyncAction_ShowConfirmation();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_ShowConfirmation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncAction_ShowConfirmation(UAsyncAction_ShowConfirmation&&); \
	NO_API UAsyncAction_ShowConfirmation(const UAsyncAction_ShowConfirmation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_ShowConfirmation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_ShowConfirmation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_ShowConfirmation) \
	NO_API virtual ~UAsyncAction_ShowConfirmation();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_23_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AsyncAction_ShowConfirmation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONGAME_API UClass* StaticClass<class UAsyncAction_ShowConfirmation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS