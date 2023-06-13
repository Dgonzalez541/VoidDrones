// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyShooter/Public/AbilitySystem/Tasks/AbilityTask_EventTick.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_EventTick() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	SKYSHOOTER_API UClass* Z_Construct_UClass_UAbilityTask_EventTick();
	SKYSHOOTER_API UClass* Z_Construct_UClass_UAbilityTask_EventTick_NoRegister();
	SKYSHOOTER_API UFunction* Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SkyShooter();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature_Statics
	{
		struct _Script_SkyShooter_eventOnTickTaskDelegate_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SkyShooter_eventOnTickTaskDelegate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_EventTick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SkyShooter, nullptr, "OnTickTaskDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature_Statics::_Script_SkyShooter_eventOnTickTaskDelegate_Parms), Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAbilityTask_EventTick::execAbilityTaskOnTick)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_EventTick**)Z_Param__Result=UAbilityTask_EventTick::AbilityTaskOnTick(Z_Param_OwningAbility,Z_Param_TaskInstanceName);
		P_NATIVE_END;
	}
	void UAbilityTask_EventTick::StaticRegisterNativesUAbilityTask_EventTick()
	{
		UClass* Class = UAbilityTask_EventTick::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbilityTaskOnTick", &UAbilityTask_EventTick::execAbilityTaskOnTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics
	{
		struct AbilityTask_EventTick_eventAbilityTaskOnTick_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			UAbilityTask_EventTick* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_EventTick_eventAbilityTaskOnTick_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_EventTick_eventAbilityTaskOnTick_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_EventTick_eventAbilityTaskOnTick_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_EventTick_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_EventTick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_EventTick, nullptr, "AbilityTaskOnTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::AbilityTask_EventTick_eventAbilityTaskOnTick_Parms), Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_EventTick);
	UClass* Z_Construct_UClass_UAbilityTask_EventTick_NoRegister()
	{
		return UAbilityTask_EventTick::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_EventTick_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_EventTick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_EventTick_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_EventTick_AbilityTaskOnTick, "AbilityTaskOnTick" }, // 2675586762
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_EventTick_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/Tasks/AbilityTask_EventTick.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_EventTick.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_EventTick_Statics::NewProp_OnTick_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_EventTick.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_EventTick_Statics::NewProp_OnTick = { "OnTick", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_EventTick, OnTick), Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_EventTick_Statics::NewProp_OnTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_EventTick_Statics::NewProp_OnTick_MetaData)) }; // 2314907163
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_EventTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_EventTick_Statics::NewProp_OnTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_EventTick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_EventTick>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_EventTick_Statics::ClassParams = {
		&UAbilityTask_EventTick::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_EventTick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_EventTick_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_EventTick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_EventTick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_EventTick()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_EventTick.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_EventTick.OuterSingleton, Z_Construct_UClass_UAbilityTask_EventTick_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_EventTick.OuterSingleton;
	}
	template<> SKYSHOOTER_API UClass* StaticClass<UAbilityTask_EventTick>()
	{
		return UAbilityTask_EventTick::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_EventTick);
	UAbilityTask_EventTick::~UAbilityTask_EventTick() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_EventTick, UAbilityTask_EventTick::StaticClass, TEXT("UAbilityTask_EventTick"), &Z_Registration_Info_UClass_UAbilityTask_EventTick, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_EventTick), 1471639320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_3346319879(TEXT("/Script/SkyShooter"),
		Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_EventTick_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
