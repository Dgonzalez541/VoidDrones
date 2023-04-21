// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/GlideComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputComponent;
#ifdef SKYSHOOTER_GlideComponent_generated_h
#error "GlideComponent.generated.h already included, missing '#pragma once' in GlideComponent.h"
#endif
#define SKYSHOOTER_GlideComponent_generated_h

#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_12_DELEGATE \
struct _Script_SkyShooter_eventOnBindInputSignature_Parms \
{ \
	UInputComponent* InputComp; \
}; \
static inline void FOnBindInputSignature_DelegateWrapper(const FMulticastScriptDelegate& OnBindInputSignature, UInputComponent* InputComp) \
{ \
	_Script_SkyShooter_eventOnBindInputSignature_Parms Parms; \
	Parms.InputComp=InputComp; \
	OnBindInputSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_SPARSE_DATA
#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_RPC_WRAPPERS \
	virtual void OnRep_IsGlidingAllowed_Implementation(); \
	virtual void OnRep_ParagliderClass_Implementation(); \
	virtual void OnRep_IsGliding_Implementation(); \
	virtual float GetPing_Implementation(); \
	virtual bool IsLocallyControlled_Implementation(); \
	virtual bool CheckHasAuthority_Implementation(); \
	virtual void RecordInputData_Implementation(); \
	virtual bool GetLocalIsGlidingMacro_Implementation(); \
	virtual bool CanGlidingBegin_Implementation(); \
	virtual void InitializeParagliderClass_Implementation(); \
	virtual void SetParagliderActiveStatus_Implementation(bool IsActive); \
	virtual void CheckIfOnGround_Implementation(); \
	virtual bool HeightCheck_Implementation(); \
	virtual void UpdateFallingSpeed_Implementation(); \
	virtual FVector GetRelativeVelocity_Implementation(); \
	virtual void RotateCharacter_Implementation(); \
	virtual void StopGlidingLocal_Implementation(); \
	virtual void StartGlidingLocal_Implementation(); \
	virtual void RecordOriginalMovementSettings_Implementation(); \
	virtual void ApplyOriginalMovementSettings_Implementation(); \
	virtual void ApplyGlidingMovementSettings_Implementation(); \
	virtual void UpdateAnimationValues_Implementation(); \
	virtual void InitializePutAwayVisualProperties_Implementation(); \
	virtual void InitializeDeploymentVisualProperties_Implementation(); \
	virtual void PerformPutAwayAnimation_Implementation(); \
	virtual void PerformDeployAnimation_Implementation(); \
	virtual void UpdateParagliderLean_Implementation(); \
	virtual void BindInput_Implementation(UInputComponent* InputComp); \
 \
	DECLARE_FUNCTION(execOnRep_IsGlidingAllowed); \
	DECLARE_FUNCTION(execOnRep_ParagliderClass); \
	DECLARE_FUNCTION(execOnRep_IsGliding); \
	DECLARE_FUNCTION(execGetPing); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execCheckHasAuthority); \
	DECLARE_FUNCTION(execRecordInputData); \
	DECLARE_FUNCTION(execGetLocalIsGlidingMacro); \
	DECLARE_FUNCTION(execCanGlidingBegin); \
	DECLARE_FUNCTION(execInitializeParagliderClass); \
	DECLARE_FUNCTION(execSetParagliderActiveStatus); \
	DECLARE_FUNCTION(execCheckIfOnGround); \
	DECLARE_FUNCTION(execHeightCheck); \
	DECLARE_FUNCTION(execUpdateFallingSpeed); \
	DECLARE_FUNCTION(execGetRelativeVelocity); \
	DECLARE_FUNCTION(execRotateCharacter); \
	DECLARE_FUNCTION(execStopGlidingLocal); \
	DECLARE_FUNCTION(execStartGlidingLocal); \
	DECLARE_FUNCTION(execRecordOriginalMovementSettings); \
	DECLARE_FUNCTION(execApplyOriginalMovementSettings); \
	DECLARE_FUNCTION(execApplyGlidingMovementSettings); \
	DECLARE_FUNCTION(execUpdateAnimationValues); \
	DECLARE_FUNCTION(execInitializePutAwayVisualProperties); \
	DECLARE_FUNCTION(execInitializeDeploymentVisualProperties); \
	DECLARE_FUNCTION(execPerformPutAwayAnimation); \
	DECLARE_FUNCTION(execPerformDeployAnimation); \
	DECLARE_FUNCTION(execUpdateParagliderLean); \
	DECLARE_FUNCTION(execBindInput);


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRep_IsGlidingAllowed_Implementation(); \
	virtual void OnRep_ParagliderClass_Implementation(); \
	virtual void OnRep_IsGliding_Implementation(); \
	virtual float GetPing_Implementation(); \
	virtual bool IsLocallyControlled_Implementation(); \
	virtual bool CheckHasAuthority_Implementation(); \
	virtual void RecordInputData_Implementation(); \
	virtual bool GetLocalIsGlidingMacro_Implementation(); \
	virtual bool CanGlidingBegin_Implementation(); \
	virtual void InitializeParagliderClass_Implementation(); \
	virtual void SetParagliderActiveStatus_Implementation(bool IsActive); \
	virtual void CheckIfOnGround_Implementation(); \
	virtual bool HeightCheck_Implementation(); \
	virtual void UpdateFallingSpeed_Implementation(); \
	virtual FVector GetRelativeVelocity_Implementation(); \
	virtual void RotateCharacter_Implementation(); \
	virtual void StopGlidingLocal_Implementation(); \
	virtual void StartGlidingLocal_Implementation(); \
	virtual void RecordOriginalMovementSettings_Implementation(); \
	virtual void ApplyOriginalMovementSettings_Implementation(); \
	virtual void ApplyGlidingMovementSettings_Implementation(); \
	virtual void UpdateAnimationValues_Implementation(); \
	virtual void InitializePutAwayVisualProperties_Implementation(); \
	virtual void InitializeDeploymentVisualProperties_Implementation(); \
	virtual void PerformPutAwayAnimation_Implementation(); \
	virtual void PerformDeployAnimation_Implementation(); \
	virtual void UpdateParagliderLean_Implementation(); \
	virtual void BindInput_Implementation(UInputComponent* InputComp); \
 \
	DECLARE_FUNCTION(execOnRep_IsGlidingAllowed); \
	DECLARE_FUNCTION(execOnRep_ParagliderClass); \
	DECLARE_FUNCTION(execOnRep_IsGliding); \
	DECLARE_FUNCTION(execGetPing); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execCheckHasAuthority); \
	DECLARE_FUNCTION(execRecordInputData); \
	DECLARE_FUNCTION(execGetLocalIsGlidingMacro); \
	DECLARE_FUNCTION(execCanGlidingBegin); \
	DECLARE_FUNCTION(execInitializeParagliderClass); \
	DECLARE_FUNCTION(execSetParagliderActiveStatus); \
	DECLARE_FUNCTION(execCheckIfOnGround); \
	DECLARE_FUNCTION(execHeightCheck); \
	DECLARE_FUNCTION(execUpdateFallingSpeed); \
	DECLARE_FUNCTION(execGetRelativeVelocity); \
	DECLARE_FUNCTION(execRotateCharacter); \
	DECLARE_FUNCTION(execStopGlidingLocal); \
	DECLARE_FUNCTION(execStartGlidingLocal); \
	DECLARE_FUNCTION(execRecordOriginalMovementSettings); \
	DECLARE_FUNCTION(execApplyOriginalMovementSettings); \
	DECLARE_FUNCTION(execApplyGlidingMovementSettings); \
	DECLARE_FUNCTION(execUpdateAnimationValues); \
	DECLARE_FUNCTION(execInitializePutAwayVisualProperties); \
	DECLARE_FUNCTION(execInitializeDeploymentVisualProperties); \
	DECLARE_FUNCTION(execPerformPutAwayAnimation); \
	DECLARE_FUNCTION(execPerformDeployAnimation); \
	DECLARE_FUNCTION(execUpdateParagliderLean); \
	DECLARE_FUNCTION(execBindInput);


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_ACCESSORS
#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_CALLBACK_WRAPPERS
#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGlideComponent(); \
	friend struct Z_Construct_UClass_UGlideComponent_Statics; \
public: \
	DECLARE_CLASS(UGlideComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooter"), NO_API) \
	DECLARE_SERIALIZER(UGlideComponent)


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGlideComponent(); \
	friend struct Z_Construct_UClass_UGlideComponent_Statics; \
public: \
	DECLARE_CLASS(UGlideComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooter"), NO_API) \
	DECLARE_SERIALIZER(UGlideComponent)


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGlideComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGlideComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGlideComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGlideComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGlideComponent(UGlideComponent&&); \
	NO_API UGlideComponent(const UGlideComponent&); \
public: \
	NO_API virtual ~UGlideComponent();


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGlideComponent(UGlideComponent&&); \
	NO_API UGlideComponent(const UGlideComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGlideComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGlideComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGlideComponent) \
	NO_API virtual ~UGlideComponent();


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_13_PROLOG
#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_SPARSE_DATA \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_RPC_WRAPPERS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_ACCESSORS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_CALLBACK_WRAPPERS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_INCLASS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_SPARSE_DATA \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_ACCESSORS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_CALLBACK_WRAPPERS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTER_API UClass* StaticClass<class UGlideComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
