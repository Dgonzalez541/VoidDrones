// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyShooter/Public/AbilitySystem/GlideComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlideComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	SKYSHOOTER_API UClass* Z_Construct_UClass_UGlideComponent();
	SKYSHOOTER_API UClass* Z_Construct_UClass_UGlideComponent_NoRegister();
	SKYSHOOTER_API UFunction* Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SkyShooter();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics
	{
		struct _Script_SkyShooter_eventOnBindInputSignature_Parms
		{
			UInputComponent* InputComp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics::NewProp_InputComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics::NewProp_InputComp = { "InputComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SkyShooter_eventOnBindInputSignature_Parms, InputComp), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics::NewProp_InputComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics::NewProp_InputComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics::NewProp_InputComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SkyShooter, nullptr, "OnBindInputSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics::_Script_SkyShooter_eventOnBindInputSignature_Parms), Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGlideComponent::execOnRep_IsGlidingAllowed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsGlidingAllowed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execOnRep_ParagliderClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ParagliderClass_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execOnRep_IsGliding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsGliding_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execGetPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPing_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execIsLocallyControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlled_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execCheckHasAuthority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckHasAuthority_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execRecordInputData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecordInputData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execGetLocalIsGlidingMacro)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLocalIsGlidingMacro_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execCanGlidingBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanGlidingBegin_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execInitializeParagliderClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeParagliderClass_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execSetParagliderActiveStatus)
	{
		P_GET_UBOOL(Z_Param_IsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParagliderActiveStatus_Implementation(Z_Param_IsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execCheckIfOnGround)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckIfOnGround_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execHeightCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HeightCheck_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execUpdateFallingSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFallingSpeed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execGetRelativeVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRelativeVelocity_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execRotateCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateCharacter_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execStopGlidingLocal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopGlidingLocal_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execStartGlidingLocal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGlidingLocal_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execRecordOriginalMovementSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecordOriginalMovementSettings_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execApplyOriginalMovementSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyOriginalMovementSettings_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execApplyGlidingMovementSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyGlidingMovementSettings_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execUpdateAnimationValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationValues_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execInitializePutAwayVisualProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializePutAwayVisualProperties_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execInitializeDeploymentVisualProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeDeploymentVisualProperties_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execPerformPutAwayAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformPutAwayAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execPerformDeployAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformDeployAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execUpdateParagliderLean)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateParagliderLean_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlideComponent::execBindInput)
	{
		P_GET_OBJECT(UInputComponent,Z_Param_InputComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindInput_Implementation(Z_Param_InputComp);
		P_NATIVE_END;
	}
	struct GlideComponent_eventBindInput_Parms
	{
		UInputComponent* InputComp;
	};
	struct GlideComponent_eventCanGlidingBegin_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GlideComponent_eventCanGlidingBegin_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GlideComponent_eventCheckHasAuthority_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GlideComponent_eventCheckHasAuthority_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GlideComponent_eventGetLocalIsGlidingMacro_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GlideComponent_eventGetLocalIsGlidingMacro_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GlideComponent_eventGetPing_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		GlideComponent_eventGetPing_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct GlideComponent_eventGetRelativeVelocity_Parms
	{
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		GlideComponent_eventGetRelativeVelocity_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct GlideComponent_eventHeightCheck_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GlideComponent_eventHeightCheck_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GlideComponent_eventIsLocallyControlled_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GlideComponent_eventIsLocallyControlled_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GlideComponent_eventSetParagliderActiveStatus_Parms
	{
		bool IsActive;
	};
	static FName NAME_UGlideComponent_ApplyGlidingMovementSettings = FName(TEXT("ApplyGlidingMovementSettings"));
	void UGlideComponent::ApplyGlidingMovementSettings()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_ApplyGlidingMovementSettings),NULL);
	}
	static FName NAME_UGlideComponent_ApplyOriginalMovementSettings = FName(TEXT("ApplyOriginalMovementSettings"));
	void UGlideComponent::ApplyOriginalMovementSettings()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_ApplyOriginalMovementSettings),NULL);
	}
	static FName NAME_UGlideComponent_BindInput = FName(TEXT("BindInput"));
	void UGlideComponent::BindInput(UInputComponent* InputComp)
	{
		GlideComponent_eventBindInput_Parms Parms;
		Parms.InputComp=InputComp;
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_BindInput),&Parms);
	}
	static FName NAME_UGlideComponent_CanGlidingBegin = FName(TEXT("CanGlidingBegin"));
	bool UGlideComponent::CanGlidingBegin()
	{
		GlideComponent_eventCanGlidingBegin_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_CanGlidingBegin),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGlideComponent_CheckHasAuthority = FName(TEXT("CheckHasAuthority"));
	bool UGlideComponent::CheckHasAuthority()
	{
		GlideComponent_eventCheckHasAuthority_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_CheckHasAuthority),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGlideComponent_CheckIfOnGround = FName(TEXT("CheckIfOnGround"));
	void UGlideComponent::CheckIfOnGround()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_CheckIfOnGround),NULL);
	}
	static FName NAME_UGlideComponent_GetLocalIsGlidingMacro = FName(TEXT("GetLocalIsGlidingMacro"));
	bool UGlideComponent::GetLocalIsGlidingMacro()
	{
		GlideComponent_eventGetLocalIsGlidingMacro_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_GetLocalIsGlidingMacro),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGlideComponent_GetPing = FName(TEXT("GetPing"));
	float UGlideComponent::GetPing()
	{
		GlideComponent_eventGetPing_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_GetPing),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGlideComponent_GetRelativeVelocity = FName(TEXT("GetRelativeVelocity"));
	FVector UGlideComponent::GetRelativeVelocity()
	{
		GlideComponent_eventGetRelativeVelocity_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_GetRelativeVelocity),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGlideComponent_HeightCheck = FName(TEXT("HeightCheck"));
	bool UGlideComponent::HeightCheck()
	{
		GlideComponent_eventHeightCheck_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_HeightCheck),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGlideComponent_InitializeDeploymentVisualProperties = FName(TEXT("InitializeDeploymentVisualProperties"));
	void UGlideComponent::InitializeDeploymentVisualProperties()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_InitializeDeploymentVisualProperties),NULL);
	}
	static FName NAME_UGlideComponent_InitializeParagliderClass = FName(TEXT("InitializeParagliderClass"));
	void UGlideComponent::InitializeParagliderClass()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_InitializeParagliderClass),NULL);
	}
	static FName NAME_UGlideComponent_InitializePutAwayVisualProperties = FName(TEXT("InitializePutAwayVisualProperties"));
	void UGlideComponent::InitializePutAwayVisualProperties()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_InitializePutAwayVisualProperties),NULL);
	}
	static FName NAME_UGlideComponent_IsLocallyControlled = FName(TEXT("IsLocallyControlled"));
	bool UGlideComponent::IsLocallyControlled()
	{
		GlideComponent_eventIsLocallyControlled_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_IsLocallyControlled),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGlideComponent_OnRep_IsGliding = FName(TEXT("OnRep_IsGliding"));
	void UGlideComponent::OnRep_IsGliding()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_OnRep_IsGliding),NULL);
	}
	static FName NAME_UGlideComponent_OnRep_IsGlidingAllowed = FName(TEXT("OnRep_IsGlidingAllowed"));
	void UGlideComponent::OnRep_IsGlidingAllowed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_OnRep_IsGlidingAllowed),NULL);
	}
	static FName NAME_UGlideComponent_OnRep_ParagliderClass = FName(TEXT("OnRep_ParagliderClass"));
	void UGlideComponent::OnRep_ParagliderClass()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_OnRep_ParagliderClass),NULL);
	}
	static FName NAME_UGlideComponent_PerformDeployAnimation = FName(TEXT("PerformDeployAnimation"));
	void UGlideComponent::PerformDeployAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_PerformDeployAnimation),NULL);
	}
	static FName NAME_UGlideComponent_PerformPutAwayAnimation = FName(TEXT("PerformPutAwayAnimation"));
	void UGlideComponent::PerformPutAwayAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_PerformPutAwayAnimation),NULL);
	}
	static FName NAME_UGlideComponent_RecordInputData = FName(TEXT("RecordInputData"));
	void UGlideComponent::RecordInputData()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_RecordInputData),NULL);
	}
	static FName NAME_UGlideComponent_RecordOriginalMovementSettings = FName(TEXT("RecordOriginalMovementSettings"));
	void UGlideComponent::RecordOriginalMovementSettings()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_RecordOriginalMovementSettings),NULL);
	}
	static FName NAME_UGlideComponent_RotateCharacter = FName(TEXT("RotateCharacter"));
	void UGlideComponent::RotateCharacter()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_RotateCharacter),NULL);
	}
	static FName NAME_UGlideComponent_SetParagliderActiveStatus = FName(TEXT("SetParagliderActiveStatus"));
	void UGlideComponent::SetParagliderActiveStatus(bool IsActive)
	{
		GlideComponent_eventSetParagliderActiveStatus_Parms Parms;
		Parms.IsActive=IsActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_SetParagliderActiveStatus),&Parms);
	}
	static FName NAME_UGlideComponent_StartGlidingLocal = FName(TEXT("StartGlidingLocal"));
	void UGlideComponent::StartGlidingLocal()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_StartGlidingLocal),NULL);
	}
	static FName NAME_UGlideComponent_StopGlidingLocal = FName(TEXT("StopGlidingLocal"));
	void UGlideComponent::StopGlidingLocal()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_StopGlidingLocal),NULL);
	}
	static FName NAME_UGlideComponent_UpdateAnimationValues = FName(TEXT("UpdateAnimationValues"));
	void UGlideComponent::UpdateAnimationValues()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_UpdateAnimationValues),NULL);
	}
	static FName NAME_UGlideComponent_UpdateFallingSpeed = FName(TEXT("UpdateFallingSpeed"));
	void UGlideComponent::UpdateFallingSpeed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_UpdateFallingSpeed),NULL);
	}
	static FName NAME_UGlideComponent_UpdateParagliderLean = FName(TEXT("UpdateParagliderLean"));
	void UGlideComponent::UpdateParagliderLean()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGlideComponent_UpdateParagliderLean),NULL);
	}
	void UGlideComponent::StaticRegisterNativesUGlideComponent()
	{
		UClass* Class = UGlideComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyGlidingMovementSettings", &UGlideComponent::execApplyGlidingMovementSettings },
			{ "ApplyOriginalMovementSettings", &UGlideComponent::execApplyOriginalMovementSettings },
			{ "BindInput", &UGlideComponent::execBindInput },
			{ "CanGlidingBegin", &UGlideComponent::execCanGlidingBegin },
			{ "CheckHasAuthority", &UGlideComponent::execCheckHasAuthority },
			{ "CheckIfOnGround", &UGlideComponent::execCheckIfOnGround },
			{ "GetLocalIsGlidingMacro", &UGlideComponent::execGetLocalIsGlidingMacro },
			{ "GetPing", &UGlideComponent::execGetPing },
			{ "GetRelativeVelocity", &UGlideComponent::execGetRelativeVelocity },
			{ "HeightCheck", &UGlideComponent::execHeightCheck },
			{ "InitializeDeploymentVisualProperties", &UGlideComponent::execInitializeDeploymentVisualProperties },
			{ "InitializeParagliderClass", &UGlideComponent::execInitializeParagliderClass },
			{ "InitializePutAwayVisualProperties", &UGlideComponent::execInitializePutAwayVisualProperties },
			{ "IsLocallyControlled", &UGlideComponent::execIsLocallyControlled },
			{ "OnRep_IsGliding", &UGlideComponent::execOnRep_IsGliding },
			{ "OnRep_IsGlidingAllowed", &UGlideComponent::execOnRep_IsGlidingAllowed },
			{ "OnRep_ParagliderClass", &UGlideComponent::execOnRep_ParagliderClass },
			{ "PerformDeployAnimation", &UGlideComponent::execPerformDeployAnimation },
			{ "PerformPutAwayAnimation", &UGlideComponent::execPerformPutAwayAnimation },
			{ "RecordInputData", &UGlideComponent::execRecordInputData },
			{ "RecordOriginalMovementSettings", &UGlideComponent::execRecordOriginalMovementSettings },
			{ "RotateCharacter", &UGlideComponent::execRotateCharacter },
			{ "SetParagliderActiveStatus", &UGlideComponent::execSetParagliderActiveStatus },
			{ "StartGlidingLocal", &UGlideComponent::execStartGlidingLocal },
			{ "StopGlidingLocal", &UGlideComponent::execStopGlidingLocal },
			{ "UpdateAnimationValues", &UGlideComponent::execUpdateAnimationValues },
			{ "UpdateFallingSpeed", &UGlideComponent::execUpdateFallingSpeed },
			{ "UpdateParagliderLean", &UGlideComponent::execUpdateParagliderLean },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGlideComponent_ApplyGlidingMovementSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_ApplyGlidingMovementSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement Settings" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_ApplyGlidingMovementSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "ApplyGlidingMovementSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_ApplyGlidingMovementSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_ApplyGlidingMovementSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_ApplyGlidingMovementSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_ApplyGlidingMovementSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_ApplyOriginalMovementSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_ApplyOriginalMovementSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement Settings" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_ApplyOriginalMovementSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "ApplyOriginalMovementSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_ApplyOriginalMovementSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_ApplyOriginalMovementSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_ApplyOriginalMovementSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_ApplyOriginalMovementSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_BindInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_BindInput_Statics::NewProp_InputComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGlideComponent_BindInput_Statics::NewProp_InputComp = { "InputComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlideComponent_eventBindInput_Parms, InputComp), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_BindInput_Statics::NewProp_InputComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_BindInput_Statics::NewProp_InputComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlideComponent_BindInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlideComponent_BindInput_Statics::NewProp_InputComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_BindInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_BindInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "BindInput", nullptr, nullptr, sizeof(GlideComponent_eventBindInput_Parms), Z_Construct_UFunction_UGlideComponent_BindInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_BindInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_BindInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_BindInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_BindInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_BindInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_CanGlidingBegin_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGlideComponent_CanGlidingBegin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GlideComponent_eventCanGlidingBegin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGlideComponent_CanGlidingBegin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GlideComponent_eventCanGlidingBegin_Parms), &Z_Construct_UFunction_UGlideComponent_CanGlidingBegin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlideComponent_CanGlidingBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlideComponent_CanGlidingBegin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_CanGlidingBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Misc" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_CanGlidingBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "CanGlidingBegin", nullptr, nullptr, sizeof(GlideComponent_eventCanGlidingBegin_Parms), Z_Construct_UFunction_UGlideComponent_CanGlidingBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_CanGlidingBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_CanGlidingBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_CanGlidingBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_CanGlidingBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_CanGlidingBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_CheckHasAuthority_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGlideComponent_CheckHasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GlideComponent_eventCheckHasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGlideComponent_CheckHasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GlideComponent_eventCheckHasAuthority_Parms), &Z_Construct_UFunction_UGlideComponent_CheckHasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlideComponent_CheckHasAuthority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlideComponent_CheckHasAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_CheckHasAuthority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_CheckHasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "CheckHasAuthority", nullptr, nullptr, sizeof(GlideComponent_eventCheckHasAuthority_Parms), Z_Construct_UFunction_UGlideComponent_CheckHasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_CheckHasAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_CheckHasAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_CheckHasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_CheckHasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_CheckHasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_CheckIfOnGround_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_CheckIfOnGround_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character Movement" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_CheckIfOnGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "CheckIfOnGround", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_CheckIfOnGround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_CheckIfOnGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_CheckIfOnGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_CheckIfOnGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GlideComponent_eventGetLocalIsGlidingMacro_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GlideComponent_eventGetLocalIsGlidingMacro_Parms), &Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro_Statics::Function_MetaDataParams[] = {
		{ "Category", "Misc" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "GetLocalIsGlidingMacro", nullptr, nullptr, sizeof(GlideComponent_eventGetLocalIsGlidingMacro_Parms), Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_GetPing_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGlideComponent_GetPing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlideComponent_eventGetPing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlideComponent_GetPing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlideComponent_GetPing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_GetPing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_GetPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "GetPing", nullptr, nullptr, sizeof(GlideComponent_eventGetPing_Parms), Z_Construct_UFunction_UGlideComponent_GetPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_GetPing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_GetPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_GetPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_GetPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_GetPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_GetRelativeVelocity_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlideComponent_GetRelativeVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlideComponent_eventGetRelativeVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlideComponent_GetRelativeVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlideComponent_GetRelativeVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_GetRelativeVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character Movement" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_GetRelativeVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "GetRelativeVelocity", nullptr, nullptr, sizeof(GlideComponent_eventGetRelativeVelocity_Parms), Z_Construct_UFunction_UGlideComponent_GetRelativeVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_GetRelativeVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_GetRelativeVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_GetRelativeVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_GetRelativeVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_GetRelativeVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_HeightCheck_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGlideComponent_HeightCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GlideComponent_eventHeightCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGlideComponent_HeightCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GlideComponent_eventHeightCheck_Parms), &Z_Construct_UFunction_UGlideComponent_HeightCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlideComponent_HeightCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlideComponent_HeightCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_HeightCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character Movement" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_HeightCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "HeightCheck", nullptr, nullptr, sizeof(GlideComponent_eventHeightCheck_Parms), Z_Construct_UFunction_UGlideComponent_HeightCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_HeightCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_HeightCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_HeightCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_HeightCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_HeightCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_InitializeDeploymentVisualProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_InitializeDeploymentVisualProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_InitializeDeploymentVisualProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "InitializeDeploymentVisualProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_InitializeDeploymentVisualProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_InitializeDeploymentVisualProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_InitializeDeploymentVisualProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_InitializeDeploymentVisualProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_InitializeParagliderClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_InitializeParagliderClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Paraglider Class" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_InitializeParagliderClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "InitializeParagliderClass", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_InitializeParagliderClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_InitializeParagliderClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_InitializeParagliderClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_InitializeParagliderClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_InitializePutAwayVisualProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_InitializePutAwayVisualProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_InitializePutAwayVisualProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "InitializePutAwayVisualProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_InitializePutAwayVisualProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_InitializePutAwayVisualProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_InitializePutAwayVisualProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_InitializePutAwayVisualProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_IsLocallyControlled_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGlideComponent_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GlideComponent_eventIsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGlideComponent_IsLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GlideComponent_eventIsLocallyControlled_Parms), &Z_Construct_UFunction_UGlideComponent_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlideComponent_IsLocallyControlled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlideComponent_IsLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_IsLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_IsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "IsLocallyControlled", nullptr, nullptr, sizeof(GlideComponent_eventIsLocallyControlled_Parms), Z_Construct_UFunction_UGlideComponent_IsLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_IsLocallyControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_IsLocallyControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_IsLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_IsLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_IsLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_OnRep_IsGliding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_OnRep_IsGliding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_OnRep_IsGliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "OnRep_IsGliding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_OnRep_IsGliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_OnRep_IsGliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_OnRep_IsGliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_OnRep_IsGliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_OnRep_IsGlidingAllowed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_OnRep_IsGlidingAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_OnRep_IsGlidingAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "OnRep_IsGlidingAllowed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_OnRep_IsGlidingAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_OnRep_IsGlidingAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_OnRep_IsGlidingAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_OnRep_IsGlidingAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_OnRep_ParagliderClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_OnRep_ParagliderClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_OnRep_ParagliderClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "OnRep_ParagliderClass", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_OnRep_ParagliderClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_OnRep_ParagliderClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_OnRep_ParagliderClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_OnRep_ParagliderClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_PerformDeployAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_PerformDeployAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_PerformDeployAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "PerformDeployAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_PerformDeployAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_PerformDeployAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_PerformDeployAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_PerformDeployAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_PerformPutAwayAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_PerformPutAwayAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_PerformPutAwayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "PerformPutAwayAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_PerformPutAwayAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_PerformPutAwayAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_PerformPutAwayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_PerformPutAwayAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_RecordInputData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_RecordInputData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Misc" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_RecordInputData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "RecordInputData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_RecordInputData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_RecordInputData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_RecordInputData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_RecordInputData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_RecordOriginalMovementSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_RecordOriginalMovementSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement Settings" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_RecordOriginalMovementSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "RecordOriginalMovementSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_RecordOriginalMovementSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_RecordOriginalMovementSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_RecordOriginalMovementSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_RecordOriginalMovementSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_RotateCharacter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_RotateCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character Movement" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_RotateCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "RotateCharacter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_RotateCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_RotateCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_RotateCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_RotateCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus_Statics
	{
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((GlideComponent_eventSetParagliderActiveStatus_Parms*)Obj)->IsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GlideComponent_eventSetParagliderActiveStatus_Parms), &Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus_Statics::NewProp_IsActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Paraglider Class" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "SetParagliderActiveStatus", nullptr, nullptr, sizeof(GlideComponent_eventSetParagliderActiveStatus_Parms), Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_StartGlidingLocal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_StartGlidingLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gliding Modes" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_StartGlidingLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "StartGlidingLocal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_StartGlidingLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_StartGlidingLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_StartGlidingLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_StartGlidingLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_StopGlidingLocal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_StopGlidingLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gliding Modes" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_StopGlidingLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "StopGlidingLocal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_StopGlidingLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_StopGlidingLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_StopGlidingLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_StopGlidingLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_UpdateAnimationValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_UpdateAnimationValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_UpdateAnimationValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "UpdateAnimationValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_UpdateAnimationValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_UpdateAnimationValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_UpdateAnimationValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_UpdateAnimationValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_UpdateFallingSpeed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_UpdateFallingSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character Movement" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_UpdateFallingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "UpdateFallingSpeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_UpdateFallingSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_UpdateFallingSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_UpdateFallingSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_UpdateFallingSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlideComponent_UpdateParagliderLean_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlideComponent_UpdateParagliderLean_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "//Animation\n" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
		{ "ToolTip", "Animation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlideComponent_UpdateParagliderLean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlideComponent, nullptr, "UpdateParagliderLean", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlideComponent_UpdateParagliderLean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlideComponent_UpdateParagliderLean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlideComponent_UpdateParagliderLean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlideComponent_UpdateParagliderLean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGlideComponent);
	UClass* Z_Construct_UClass_UGlideComponent_NoRegister()
	{
		return UGlideComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGlideComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBindInputDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBindInputDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsGlidingAllowed_MetaData[];
#endif
		static void NewProp_IsGlidingAllowed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGlidingAllowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandIK_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandIK_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHankIK_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightHankIK_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideParagliderBP_Settings_MetaData[];
#endif
		static void NewProp_OverrideParagliderBP_Settings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideParagliderBP_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlideSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlideSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RateOfDescent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RateOfDescent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlideAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlideAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlideDeceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlideDeceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsGliding_MetaData[];
#endif
		static void NewProp_IsGliding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDeploying_MetaData[];
#endif
		static void NewProp_IsDeploying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDeploying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPuttingAway_MetaData[];
#endif
		static void NewProp_IsPuttingAway_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPuttingAway;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsGlidingLocalClient_MetaData[];
#endif
		static void NewProp_IsGlidingLocalClient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGlidingLocalClient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalGravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalGravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalAirControl_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalAirControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalMaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaxAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalMaxAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalBrakingDecelerationFalling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalBrakingDecelerationFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalOrientRotationToMovement_MetaData[];
#endif
		static void NewProp_OriginalOrientRotationToMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OriginalOrientRotationToMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalUseControllerDesiredRotation_MetaData[];
#endif
		static void NewProp_OriginalUseControllerDesiredRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OriginalUseControllerDesiredRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParagliderRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParagliderRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SidewaysInputAxis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SidewaysInputAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardsInputAxis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardsInputAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentInputVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotationAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRotationAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalRotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinalRotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRotationAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseRotationAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationScalar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationScalar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonLocalyaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NonLocalyaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousNonLocalRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousNonLocalRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalCharacterMeshRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalCharacterMeshRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeployAnimationTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeployAnimationTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PutAwayAnimationTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PutAwayAnimationTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditiveStrafeDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdditiveStrafeDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLean_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentLean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIdleLean_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentIdleLean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLeanAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLeanAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeployScaleCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeployScaleCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeployRotationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeployRotationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeployLocationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeployLocationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PutAwayScaleCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PutAwayScaleCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsBeingLifted_MetaData[];
#endif
		static void NewProp_IsBeingLifted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsBeingLifted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiftSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LiftSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlideComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGlideComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGlideComponent_ApplyGlidingMovementSettings, "ApplyGlidingMovementSettings" }, // 124690257
		{ &Z_Construct_UFunction_UGlideComponent_ApplyOriginalMovementSettings, "ApplyOriginalMovementSettings" }, // 3364133486
		{ &Z_Construct_UFunction_UGlideComponent_BindInput, "BindInput" }, // 42555559
		{ &Z_Construct_UFunction_UGlideComponent_CanGlidingBegin, "CanGlidingBegin" }, // 1979968858
		{ &Z_Construct_UFunction_UGlideComponent_CheckHasAuthority, "CheckHasAuthority" }, // 1657213578
		{ &Z_Construct_UFunction_UGlideComponent_CheckIfOnGround, "CheckIfOnGround" }, // 91983751
		{ &Z_Construct_UFunction_UGlideComponent_GetLocalIsGlidingMacro, "GetLocalIsGlidingMacro" }, // 3314083646
		{ &Z_Construct_UFunction_UGlideComponent_GetPing, "GetPing" }, // 4267695273
		{ &Z_Construct_UFunction_UGlideComponent_GetRelativeVelocity, "GetRelativeVelocity" }, // 626551218
		{ &Z_Construct_UFunction_UGlideComponent_HeightCheck, "HeightCheck" }, // 3483124479
		{ &Z_Construct_UFunction_UGlideComponent_InitializeDeploymentVisualProperties, "InitializeDeploymentVisualProperties" }, // 3319855956
		{ &Z_Construct_UFunction_UGlideComponent_InitializeParagliderClass, "InitializeParagliderClass" }, // 639989212
		{ &Z_Construct_UFunction_UGlideComponent_InitializePutAwayVisualProperties, "InitializePutAwayVisualProperties" }, // 1471368571
		{ &Z_Construct_UFunction_UGlideComponent_IsLocallyControlled, "IsLocallyControlled" }, // 2222101515
		{ &Z_Construct_UFunction_UGlideComponent_OnRep_IsGliding, "OnRep_IsGliding" }, // 3608568687
		{ &Z_Construct_UFunction_UGlideComponent_OnRep_IsGlidingAllowed, "OnRep_IsGlidingAllowed" }, // 4245642991
		{ &Z_Construct_UFunction_UGlideComponent_OnRep_ParagliderClass, "OnRep_ParagliderClass" }, // 614790032
		{ &Z_Construct_UFunction_UGlideComponent_PerformDeployAnimation, "PerformDeployAnimation" }, // 629990115
		{ &Z_Construct_UFunction_UGlideComponent_PerformPutAwayAnimation, "PerformPutAwayAnimation" }, // 3770864774
		{ &Z_Construct_UFunction_UGlideComponent_RecordInputData, "RecordInputData" }, // 1148680082
		{ &Z_Construct_UFunction_UGlideComponent_RecordOriginalMovementSettings, "RecordOriginalMovementSettings" }, // 1932448240
		{ &Z_Construct_UFunction_UGlideComponent_RotateCharacter, "RotateCharacter" }, // 1897854706
		{ &Z_Construct_UFunction_UGlideComponent_SetParagliderActiveStatus, "SetParagliderActiveStatus" }, // 1676869688
		{ &Z_Construct_UFunction_UGlideComponent_StartGlidingLocal, "StartGlidingLocal" }, // 2129382030
		{ &Z_Construct_UFunction_UGlideComponent_StopGlidingLocal, "StopGlidingLocal" }, // 1492061007
		{ &Z_Construct_UFunction_UGlideComponent_UpdateAnimationValues, "UpdateAnimationValues" }, // 591382756
		{ &Z_Construct_UFunction_UGlideComponent_UpdateFallingSpeed, "UpdateFallingSpeed" }, // 669503472
		{ &Z_Construct_UFunction_UGlideComponent_UpdateParagliderLean, "UpdateParagliderLean" }, // 3711589482
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AbilitySystem/GlideComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_OnBindInputDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_OnBindInputDelegate = { "OnBindInputDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, OnBindInputDelegate), Z_Construct_UDelegateFunction_SkyShooter_OnBindInputSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OnBindInputDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OnBindInputDelegate_MetaData)) }; // 825466298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGlidingAllowed_MetaData[] = {
		{ "Category", "Glider|Paraglider Parameters" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGlidingAllowed_SetBit(void* Obj)
	{
		((UGlideComponent*)Obj)->IsGlidingAllowed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGlidingAllowed = { "IsGlidingAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGlideComponent), &Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGlidingAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGlidingAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGlidingAllowed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_MinimumHeight_MetaData[] = {
		{ "Category", "Glider|Paraglider Parameters" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_MinimumHeight = { "MinimumHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, MinimumHeight), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_MinimumHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_MinimumHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_LeftHandIK_Offset_MetaData[] = {
		{ "Category", "Glider|Paraglider Parameters" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_LeftHandIK_Offset = { "LeftHandIK_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, LeftHandIK_Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_LeftHandIK_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_LeftHandIK_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_RightHankIK_Offset_MetaData[] = {
		{ "Category", "Glider|Paraglider Parameters" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_RightHankIK_Offset = { "RightHankIK_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, RightHankIK_Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_RightHankIK_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_RightHankIK_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_OverrideParagliderBP_Settings_MetaData[] = {
		{ "Category", "Glider|Paraglider Parameters" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGlideComponent_Statics::NewProp_OverrideParagliderBP_Settings_SetBit(void* Obj)
	{
		((UGlideComponent*)Obj)->OverrideParagliderBP_Settings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_OverrideParagliderBP_Settings = { "OverrideParagliderBP_Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGlideComponent), &Z_Construct_UClass_UGlideComponent_Statics::NewProp_OverrideParagliderBP_Settings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OverrideParagliderBP_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OverrideParagliderBP_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideSpeed_MetaData[] = {
		{ "Category", "Glider|Paraglider Parameters" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideSpeed = { "GlideSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, GlideSpeed), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_RateOfDescent_MetaData[] = {
		{ "Category", "Glider|Paraglider Parameters" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_RateOfDescent = { "RateOfDescent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, RateOfDescent), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_RateOfDescent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_RateOfDescent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideAcceleration_MetaData[] = {
		{ "Category", "Glider|Paraglider Parameters" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideAcceleration = { "GlideAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, GlideAcceleration), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideDeceleration_MetaData[] = {
		{ "Category", "Glider|Paraglider Parameters" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideDeceleration = { "GlideDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, GlideDeceleration), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideDeceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| References" },
		{ "Comment", "//References\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
		{ "ToolTip", "References" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGliding_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding States" },
		{ "Comment", "//Gliding States\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
		{ "ToolTip", "Gliding States" },
	};
#endif
	void Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGliding_SetBit(void* Obj)
	{
		((UGlideComponent*)Obj)->IsGliding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGliding = { "IsGliding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGlideComponent), &Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGliding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsDeploying_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding States" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsDeploying_SetBit(void* Obj)
	{
		((UGlideComponent*)Obj)->IsDeploying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsDeploying = { "IsDeploying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGlideComponent), &Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsDeploying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsDeploying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsDeploying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsPuttingAway_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding States" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsPuttingAway_SetBit(void* Obj)
	{
		((UGlideComponent*)Obj)->IsPuttingAway = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsPuttingAway = { "IsPuttingAway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGlideComponent), &Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsPuttingAway_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsPuttingAway_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsPuttingAway_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGlidingLocalClient_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding States" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGlidingLocalClient_SetBit(void* Obj)
	{
		((UGlideComponent*)Obj)->IsGlidingLocalClient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGlidingLocalClient = { "IsGlidingLocalClient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGlideComponent), &Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGlidingLocalClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGlidingLocalClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGlidingLocalClient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalGravityScale_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Original Character Information" },
		{ "Comment", "//Original Character Information\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
		{ "ToolTip", "Original Character Information" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalGravityScale = { "OriginalGravityScale", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, OriginalGravityScale), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalGravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalGravityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalAirControl_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Original Character Information" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalAirControl = { "OriginalAirControl", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, OriginalAirControl), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalAirControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalAirControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalMaxSpeed_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Original Character Information" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalMaxSpeed = { "OriginalMaxSpeed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, OriginalMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalMaxAcceleration_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Original Character Information" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalMaxAcceleration = { "OriginalMaxAcceleration", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, OriginalMaxAcceleration), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalMaxAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalMaxAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalBrakingDecelerationFalling_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Original Character Information" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalBrakingDecelerationFalling = { "OriginalBrakingDecelerationFalling", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, OriginalBrakingDecelerationFalling), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalBrakingDecelerationFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalBrakingDecelerationFalling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalOrientRotationToMovement_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Original Character Information" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalOrientRotationToMovement_SetBit(void* Obj)
	{
		((UGlideComponent*)Obj)->OriginalOrientRotationToMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalOrientRotationToMovement = { "OriginalOrientRotationToMovement", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGlideComponent), &Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalOrientRotationToMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalOrientRotationToMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalOrientRotationToMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalUseControllerDesiredRotation_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Original Character Information" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalUseControllerDesiredRotation_SetBit(void* Obj)
	{
		((UGlideComponent*)Obj)->OriginalUseControllerDesiredRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalUseControllerDesiredRotation = { "OriginalUseControllerDesiredRotation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGlideComponent), &Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalUseControllerDesiredRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalUseControllerDesiredRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalUseControllerDesiredRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_Delta_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Misc" },
		{ "Comment", "//Misc\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
		{ "ToolTip", "Misc" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, Delta), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_ParagliderRelativeTransform_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Misc" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_ParagliderRelativeTransform = { "ParagliderRelativeTransform", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, ParagliderRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_ParagliderRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_ParagliderRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentVelocity_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Misc" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentVelocity = { "CurrentVelocity", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, CurrentVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_SidewaysInputAxis_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Input" },
		{ "Comment", "//Input\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
		{ "ToolTip", "Input" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_SidewaysInputAxis = { "SidewaysInputAxis", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, SidewaysInputAxis), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_SidewaysInputAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_SidewaysInputAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_ForwardsInputAxis_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Input" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_ForwardsInputAxis = { "ForwardsInputAxis", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, ForwardsInputAxis), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_ForwardsInputAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_ForwardsInputAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentInputVector_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Input" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentInputVector = { "CurrentInputVector", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, CurrentInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentInputVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentInputVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding Rotation" },
		{ "Comment", "//Gliding Rotation\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
		{ "ToolTip", "Gliding Rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_TargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_TargetRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeltaRotation_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding Rotation" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeltaRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeltaRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotation_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding Rotation" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotation = { "CurrentRotation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, CurrentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotationAcceleration_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding Rotation" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotationAcceleration = { "CurrentRotationAcceleration", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, CurrentRotationAcceleration), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotationAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotationAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotationRate_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding Rotation" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotationRate = { "CurrentRotationRate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, CurrentRotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotationRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_FinalRotationRate_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding Rotation" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_FinalRotationRate = { "FinalRotationRate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, FinalRotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_FinalRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_FinalRotationRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_BaseRotationAcceleration_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding Rotation" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_BaseRotationAcceleration = { "BaseRotationAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, BaseRotationAcceleration), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_BaseRotationAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_BaseRotationAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_RotationScalar_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding Rotation" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_RotationScalar = { "RotationScalar", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, RotationScalar), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_RotationScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_RotationScalar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_RotationDamping_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding Rotation" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_RotationDamping = { "RotationDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, RotationDamping), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_RotationDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_RotationDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_NonLocalyaw_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding Rotation" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_NonLocalyaw = { "NonLocalyaw", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, NonLocalyaw), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_NonLocalyaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_NonLocalyaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_PreviousNonLocalRotation_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding Rotation" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_PreviousNonLocalRotation = { "PreviousNonLocalRotation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, PreviousNonLocalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_PreviousNonLocalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_PreviousNonLocalRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalCharacterMeshRotation_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Gliding Rotation" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalCharacterMeshRotation = { "OriginalCharacterMeshRotation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, OriginalCharacterMeshRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalCharacterMeshRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalCharacterMeshRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployAnimationTimer_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Animation Values" },
		{ "Comment", "//Animation Values\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
		{ "ToolTip", "Animation Values" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployAnimationTimer = { "DeployAnimationTimer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, DeployAnimationTimer), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployAnimationTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployAnimationTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_PutAwayAnimationTimer_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Animation Values" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_PutAwayAnimationTimer = { "PutAwayAnimationTimer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, PutAwayAnimationTimer), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_PutAwayAnimationTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_PutAwayAnimationTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_SpeedRatio_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Animation Values" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_SpeedRatio = { "SpeedRatio", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, SpeedRatio), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_SpeedRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_SpeedRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_AdditiveStrafeDirection_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Animation Values" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_AdditiveStrafeDirection = { "AdditiveStrafeDirection", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, AdditiveStrafeDirection), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_AdditiveStrafeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_AdditiveStrafeDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_MovementAngle_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Animation Values" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_MovementAngle = { "MovementAngle", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, MovementAngle), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_MovementAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_MovementAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentLean_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Animation Values" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentLean = { "CurrentLean", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, CurrentLean), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentLean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentIdleLean_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Animation Values" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentIdleLean = { "CurrentIdleLean", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, CurrentIdleLean), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentIdleLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentIdleLean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_MaxLeanAngle_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Animation Values" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_MaxLeanAngle = { "MaxLeanAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, MaxLeanAngle), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_MaxLeanAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_MaxLeanAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployScaleCurve_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Curves" },
		{ "Comment", "//ACurves\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
		{ "ToolTip", "ACurves" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployScaleCurve = { "DeployScaleCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, DeployScaleCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployScaleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployScaleCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployRotationCurve_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Curves" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployRotationCurve = { "DeployRotationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, DeployRotationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployRotationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployRotationCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployLocationCurve_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Curves" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployLocationCurve = { "DeployLocationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, DeployLocationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployLocationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployLocationCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_PutAwayScaleCurve_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Curves" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_PutAwayScaleCurve = { "PutAwayScaleCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, PutAwayScaleCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_PutAwayScaleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_PutAwayScaleCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsBeingLifted_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Updraft" },
		{ "Comment", "//Updraft\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
		{ "ToolTip", "Updraft" },
	};
#endif
	void Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsBeingLifted_SetBit(void* Obj)
	{
		((UGlideComponent*)Obj)->IsBeingLifted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsBeingLifted = { "IsBeingLifted", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGlideComponent), &Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsBeingLifted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsBeingLifted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsBeingLifted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlideComponent_Statics::NewProp_LiftSpeed_MetaData[] = {
		{ "Category", "Glider|Core Utilities (Do Not Modify)| Updraft" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGlideComponent_Statics::NewProp_LiftSpeed = { "LiftSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlideComponent, LiftSpeed), METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::NewProp_LiftSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::NewProp_LiftSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGlideComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_OnBindInputDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGlidingAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_MinimumHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_LeftHandIK_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_RightHankIK_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_OverrideParagliderBP_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_RateOfDescent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_GlideDeceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_CapsuleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsDeploying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsPuttingAway,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsGlidingLocalClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalGravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalAirControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalMaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalMaxAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalBrakingDecelerationFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalOrientRotationToMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalUseControllerDesiredRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_ParagliderRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_SidewaysInputAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_ForwardsInputAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentInputVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_TargetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeltaRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotationAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentRotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_FinalRotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_BaseRotationAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_RotationScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_RotationDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_NonLocalyaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_PreviousNonLocalRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_OriginalCharacterMeshRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployAnimationTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_PutAwayAnimationTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_SpeedRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_AdditiveStrafeDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_MovementAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentLean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_CurrentIdleLean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_MaxLeanAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployScaleCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployRotationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_DeployLocationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_PutAwayScaleCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_IsBeingLifted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlideComponent_Statics::NewProp_LiftSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlideComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlideComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGlideComponent_Statics::ClassParams = {
		&UGlideComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGlideComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGlideComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlideComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlideComponent()
	{
		if (!Z_Registration_Info_UClass_UGlideComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGlideComponent.OuterSingleton, Z_Construct_UClass_UGlideComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGlideComponent.OuterSingleton;
	}
	template<> SKYSHOOTER_API UClass* StaticClass<UGlideComponent>()
	{
		return UGlideComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlideComponent);
	UGlideComponent::~UGlideComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGlideComponent, UGlideComponent::StaticClass, TEXT("UGlideComponent"), &Z_Registration_Info_UClass_UGlideComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGlideComponent), 3322572671U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_767056154(TEXT("/Script/SkyShooter"),
		Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_GlideComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
