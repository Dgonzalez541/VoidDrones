// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyShooter/Public/AbilitySystem/Tasks/AbilityTask_WaitForTargetLoop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitForTargetLoop() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	SKYSHOOTER_API UClass* Z_Construct_UClass_UAbilityTask_WaitForTargetLoop();
	SKYSHOOTER_API UClass* Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_NoRegister();
	SKYSHOOTER_API UFunction* Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SkyShooter();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics
	{
		struct _Script_SkyShooter_eventPawnsOverlappedChangedEvent_Parms
		{
			TArray<AActor*> OverlappedActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::NewProp_OverlappedActors_Inner = { "OverlappedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::NewProp_OverlappedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::NewProp_OverlappedActors = { "OverlappedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SkyShooter_eventPawnsOverlappedChangedEvent_Parms, OverlappedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::NewProp_OverlappedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::NewProp_OverlappedActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::NewProp_OverlappedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::NewProp_OverlappedActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_WaitForTargetLoop.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SkyShooter, nullptr, "PawnsOverlappedChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::_Script_SkyShooter_eventPawnsOverlappedChangedEvent_Parms), Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitForTargetLoop::execWaitForTargets_SphereOverlapPawn)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TargetScanRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TargetScanRate);
		P_GET_UBOOL(Z_Param_bShowDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitForTargetLoop**)Z_Param__Result=UAbilityTask_WaitForTargetLoop::WaitForTargets_SphereOverlapPawn(Z_Param_OwningAbility,Z_Param_TargetScanRange,Z_Param_TargetScanRate,Z_Param_bShowDebug);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitForTargetLoop::StaticRegisterNativesUAbilityTask_WaitForTargetLoop()
	{
		UClass* Class = UAbilityTask_WaitForTargetLoop::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitForTargets_SphereOverlapPawn", &UAbilityTask_WaitForTargetLoop::execWaitForTargets_SphereOverlapPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics
	{
		struct AbilityTask_WaitForTargetLoop_eventWaitForTargets_SphereOverlapPawn_Parms
		{
			UGameplayAbility* OwningAbility;
			float TargetScanRange;
			float TargetScanRate;
			bool bShowDebug;
			UAbilityTask_WaitForTargetLoop* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetScanRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetScanRate;
		static void NewProp_bShowDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitForTargetLoop_eventWaitForTargets_SphereOverlapPawn_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::NewProp_TargetScanRange = { "TargetScanRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitForTargetLoop_eventWaitForTargets_SphereOverlapPawn_Parms, TargetScanRange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::NewProp_TargetScanRate = { "TargetScanRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitForTargetLoop_eventWaitForTargets_SphereOverlapPawn_Parms, TargetScanRate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::NewProp_bShowDebug_SetBit(void* Obj)
	{
		((AbilityTask_WaitForTargetLoop_eventWaitForTargets_SphereOverlapPawn_Parms*)Obj)->bShowDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitForTargetLoop_eventWaitForTargets_SphereOverlapPawn_Parms), &Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitForTargetLoop_eventWaitForTargets_SphereOverlapPawn_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::NewProp_TargetScanRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::NewProp_TargetScanRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::NewProp_bShowDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait until we trace new set of target pawns.  This task automatically loops. */" },
		{ "CPP_Default_bShowDebug", "false" },
		{ "CPP_Default_TargetScanRange", "100.000000" },
		{ "CPP_Default_TargetScanRate", "0.100000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_WaitForTargetLoop.h" },
		{ "ToolTip", "Wait until we trace new set of target pawns.  This task automatically loops." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitForTargetLoop, nullptr, "WaitForTargets_SphereOverlapPawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::AbilityTask_WaitForTargetLoop_eventWaitForTargets_SphereOverlapPawn_Parms), Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitForTargetLoop);
	UClass* Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_NoRegister()
	{
		return UAbilityTask_WaitForTargetLoop::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnsOverlappedChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PawnsOverlappedChanged;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentOverlappingPawns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOverlappingPawns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentOverlappingPawns;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitForTargetLoop_WaitForTargets_SphereOverlapPawn, "WaitForTargets_SphereOverlapPawn" }, // 653318233
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Tasks/AbilityTask_WaitForTargetLoop.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_WaitForTargetLoop.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::NewProp_PawnsOverlappedChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_WaitForTargetLoop.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::NewProp_PawnsOverlappedChanged = { "PawnsOverlappedChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitForTargetLoop, PawnsOverlappedChanged), Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::NewProp_PawnsOverlappedChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::NewProp_PawnsOverlappedChanged_MetaData)) }; // 757021337
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::NewProp_CurrentOverlappingPawns_Inner = { "CurrentOverlappingPawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::NewProp_CurrentOverlappingPawns_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_WaitForTargetLoop.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::NewProp_CurrentOverlappingPawns = { "CurrentOverlappingPawns", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitForTargetLoop, CurrentOverlappingPawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::NewProp_CurrentOverlappingPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::NewProp_CurrentOverlappingPawns_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::NewProp_PawnsOverlappedChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::NewProp_CurrentOverlappingPawns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::NewProp_CurrentOverlappingPawns,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitForTargetLoop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::ClassParams = {
		&UAbilityTask_WaitForTargetLoop::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitForTargetLoop()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitForTargetLoop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitForTargetLoop.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitForTargetLoop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitForTargetLoop.OuterSingleton;
	}
	template<> SKYSHOOTER_API UClass* StaticClass<UAbilityTask_WaitForTargetLoop>()
	{
		return UAbilityTask_WaitForTargetLoop::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitForTargetLoop);
	UAbilityTask_WaitForTargetLoop::~UAbilityTask_WaitForTargetLoop() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitForTargetLoop, UAbilityTask_WaitForTargetLoop::StaticClass, TEXT("UAbilityTask_WaitForTargetLoop"), &Z_Registration_Info_UClass_UAbilityTask_WaitForTargetLoop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitForTargetLoop), 526743439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_1201318212(TEXT("/Script/SkyShooter"),
		Z_CompiledInDeferFile_FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_test_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_Tasks_AbilityTask_WaitForTargetLoop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
