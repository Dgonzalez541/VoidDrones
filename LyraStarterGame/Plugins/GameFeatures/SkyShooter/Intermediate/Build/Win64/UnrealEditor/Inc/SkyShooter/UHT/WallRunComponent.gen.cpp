// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyShooter/Public/AbilitySystem/WallRunComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallRunComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	SKYSHOOTER_API UClass* Z_Construct_UClass_UWallRunComponent();
	SKYSHOOTER_API UClass* Z_Construct_UClass_UWallRunComponent_NoRegister();
	SKYSHOOTER_API UFunction* Z_Construct_UDelegateFunction_SkyShooter_OnWallJumpSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SkyShooter();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SkyShooter_OnWallJumpSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SkyShooter_OnWallJumpSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/WallRunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SkyShooter_OnWallJumpSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SkyShooter, nullptr, "OnWallJumpSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SkyShooter_OnWallJumpSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyShooter_OnWallJumpSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SkyShooter_OnWallJumpSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SkyShooter_OnWallJumpSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWallRunComponent::execBindInput)
	{
		P_GET_OBJECT(UInputComponent,Z_Param_InputComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindInput_Implementation(Z_Param_InputComp);
		P_NATIVE_END;
	}
	struct WallRunComponent_eventBindInput_Parms
	{
		UInputComponent* InputComp;
	};
	static FName NAME_UWallRunComponent_BindInput = FName(TEXT("BindInput"));
	void UWallRunComponent::BindInput(UInputComponent* InputComp)
	{
		WallRunComponent_eventBindInput_Parms Parms;
		Parms.InputComp=InputComp;
		ProcessEvent(FindFunctionChecked(NAME_UWallRunComponent_BindInput),&Parms);
	}
	void UWallRunComponent::StaticRegisterNativesUWallRunComponent()
	{
		UClass* Class = UWallRunComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindInput", &UWallRunComponent::execBindInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWallRunComponent_BindInput_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWallRunComponent_BindInput_Statics::NewProp_InputComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWallRunComponent_BindInput_Statics::NewProp_InputComp = { "InputComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WallRunComponent_eventBindInput_Parms, InputComp), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWallRunComponent_BindInput_Statics::NewProp_InputComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallRunComponent_BindInput_Statics::NewProp_InputComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWallRunComponent_BindInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWallRunComponent_BindInput_Statics::NewProp_InputComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWallRunComponent_BindInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "WallRun Jump" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/WallRunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWallRunComponent_BindInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWallRunComponent, nullptr, "BindInput", nullptr, nullptr, sizeof(WallRunComponent_eventBindInput_Parms), Z_Construct_UFunction_UWallRunComponent_BindInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallRunComponent_BindInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWallRunComponent_BindInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallRunComponent_BindInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWallRunComponent_BindInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWallRunComponent_BindInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWallRunComponent);
	UClass* Z_Construct_UClass_UWallRunComponent_NoRegister()
	{
		return UWallRunComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWallRunComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWallJumpDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWallJumpDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWallRunComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWallRunComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWallRunComponent_BindInput, "BindInput" }, // 1920705741
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallRunComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AbilitySystem/WallRunComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/WallRunComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallRunComponent_Statics::NewProp_OnWallJumpDelegate_MetaData[] = {
		{ "Category", "WallRun Jump" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/WallRunComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWallRunComponent_Statics::NewProp_OnWallJumpDelegate = { "OnWallJumpDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWallRunComponent, OnWallJumpDelegate), Z_Construct_UDelegateFunction_SkyShooter_OnWallJumpSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWallRunComponent_Statics::NewProp_OnWallJumpDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallRunComponent_Statics::NewProp_OnWallJumpDelegate_MetaData)) }; // 357054282
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWallRunComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallRunComponent_Statics::NewProp_OnWallJumpDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWallRunComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWallRunComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWallRunComponent_Statics::ClassParams = {
		&UWallRunComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWallRunComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWallRunComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWallRunComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWallRunComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWallRunComponent()
	{
		if (!Z_Registration_Info_UClass_UWallRunComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWallRunComponent.OuterSingleton, Z_Construct_UClass_UWallRunComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWallRunComponent.OuterSingleton;
	}
	template<> SKYSHOOTER_API UClass* StaticClass<UWallRunComponent>()
	{
		return UWallRunComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWallRunComponent);
	UWallRunComponent::~UWallRunComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_WallRunComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_WallRunComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWallRunComponent, UWallRunComponent::StaticClass, TEXT("UWallRunComponent"), &Z_Registration_Info_UClass_UWallRunComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWallRunComponent), 3975090412U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_WallRunComponent_h_892604633(TEXT("/Script/SkyShooter"),
		Z_CompiledInDeferFile_FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_WallRunComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_WallRunComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
