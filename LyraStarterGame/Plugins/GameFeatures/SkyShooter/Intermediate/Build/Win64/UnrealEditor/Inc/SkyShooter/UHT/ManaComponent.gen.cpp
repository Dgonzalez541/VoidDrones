// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyShooter/Public/ManaComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_USkyShooterCombatSet_NoRegister();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkComponent();
	SKYSHOOTER_API UClass* Z_Construct_UClass_UManaComponent();
	SKYSHOOTER_API UClass* Z_Construct_UClass_UManaComponent_NoRegister();
	SKYSHOOTER_API UFunction* Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SkyShooter();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics
	{
		struct _Script_SkyShooter_eventMana_AttributeChanged_Parms
		{
			UManaComponent* ManaComponent;
			float OldValue;
			float NewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::NewProp_ManaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SkyShooter_eventMana_AttributeChanged_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::NewProp_ManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::NewProp_ManaComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SkyShooter_eventMana_AttributeChanged_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SkyShooter_eventMana_AttributeChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::NewProp_ManaComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::NewProp_OldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SkyShooter, nullptr, "Mana_AttributeChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::_Script_SkyShooter_eventMana_AttributeChanged_Parms), Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UManaComponent::execGetManaNormalized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetManaNormalized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execGetMaxMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execGetMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execUninitializeFromAbilitySystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UninitializeFromAbilitySystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execInitializeWithAbilitySystem)
	{
		P_GET_OBJECT(ULyraAbilitySystemComponent,Z_Param_InASC);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeWithAbilitySystem(Z_Param_InASC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaComponent::execFindManaComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManaComponent**)Z_Param__Result=UManaComponent::FindManaComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UManaComponent::StaticRegisterNativesUManaComponent()
	{
		UClass* Class = UManaComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindManaComponent", &UManaComponent::execFindManaComponent },
			{ "GetMana", &UManaComponent::execGetMana },
			{ "GetManaNormalized", &UManaComponent::execGetManaNormalized },
			{ "GetMaxMana", &UManaComponent::execGetMaxMana },
			{ "InitializeWithAbilitySystem", &UManaComponent::execInitializeWithAbilitySystem },
			{ "UninitializeFromAbilitySystem", &UManaComponent::execUninitializeFromAbilitySystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics
	{
		struct ManaComponent_eventFindManaComponent_Parms
		{
			const AActor* Actor;
			UManaComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManaComponent_eventFindManaComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManaComponent_eventFindManaComponent_Parms, ReturnValue), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Mana" },
		{ "Comment", "// Returns the Mana component if one exists on the specified actor.\n" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
		{ "ToolTip", "Returns the Mana component if one exists on the specified actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "FindManaComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::ManaComponent_eventFindManaComponent_Parms), Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_FindManaComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_FindManaComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_GetMana_Statics
	{
		struct ManaComponent_eventGetMana_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_GetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManaComponent_eventGetMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_GetMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Mana" },
		{ "Comment", "// Returns the current Mana value.\n" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
		{ "ToolTip", "Returns the current Mana value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetMana", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManaComponent_GetMana_Statics::ManaComponent_eventGetMana_Parms), Z_Construct_UFunction_UManaComponent_GetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_GetMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_GetMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_GetMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_GetManaNormalized_Statics
	{
		struct ManaComponent_eventGetManaNormalized_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_GetManaNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManaComponent_eventGetManaNormalized_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetManaNormalized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetManaNormalized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_GetManaNormalized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Mana" },
		{ "Comment", "// Returns the current Mana in the range [0.0, 1.0].\n" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
		{ "ToolTip", "Returns the current Mana in the range [0.0, 1.0]." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetManaNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetManaNormalized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManaComponent_GetManaNormalized_Statics::ManaComponent_eventGetManaNormalized_Parms), Z_Construct_UFunction_UManaComponent_GetManaNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetManaNormalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_GetManaNormalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetManaNormalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_GetManaNormalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_GetManaNormalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_GetMaxMana_Statics
	{
		struct ManaComponent_eventGetMaxMana_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_GetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManaComponent_eventGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_GetMaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_GetMaxMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_GetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Mana" },
		{ "Comment", "// Returns the current maximum Mana value.\n" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
		{ "ToolTip", "Returns the current maximum Mana value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_GetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "GetMaxMana", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManaComponent_GetMaxMana_Statics::ManaComponent_eventGetMaxMana_Parms), Z_Construct_UFunction_UManaComponent_GetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetMaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_GetMaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_GetMaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_GetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_GetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics
	{
		struct ManaComponent_eventInitializeWithAbilitySystem_Parms
		{
			ULyraAbilitySystemComponent* InASC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InASC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC = { "InASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManaComponent_eventInitializeWithAbilitySystem_Parms, InASC), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Mana" },
		{ "Comment", "// Initialize the component using an ability system component.\n" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
		{ "ToolTip", "Initialize the component using an ability system component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "InitializeWithAbilitySystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics::ManaComponent_eventInitializeWithAbilitySystem_Parms), Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaComponent_UninitializeFromAbilitySystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Mana" },
		{ "Comment", "// Uninitialize the component, clearing any references to the ability system.\n" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
		{ "ToolTip", "Uninitialize the component, clearing any references to the ability system." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_UninitializeFromAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "UninitializeFromAbilitySystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaComponent_UninitializeFromAbilitySystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_UninitializeFromAbilitySystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManaComponent);
	UClass* Z_Construct_UClass_UManaComponent_NoRegister()
	{
		return UManaComponent::StaticClass();
	}
	struct Z_Construct_UClass_UManaComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnManaChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxManaChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxManaChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManaComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFrameworkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManaComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManaComponent_FindManaComponent, "FindManaComponent" }, // 2660831937
		{ &Z_Construct_UFunction_UManaComponent_GetMana, "GetMana" }, // 2700460324
		{ &Z_Construct_UFunction_UManaComponent_GetManaNormalized, "GetManaNormalized" }, // 2072088473
		{ &Z_Construct_UFunction_UManaComponent_GetMaxMana, "GetMaxMana" }, // 1781583555
		{ &Z_Construct_UFunction_UManaComponent_InitializeWithAbilitySystem, "InitializeWithAbilitySystem" }, // 3769198115
		{ &Z_Construct_UFunction_UManaComponent_UninitializeFromAbilitySystem, "UninitializeFromAbilitySystem" }, // 3319968124
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ManaComponent.h" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_OnManaChanged_MetaData[] = {
		{ "Comment", "// Delegate fired when the mana value has changed.\n" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
		{ "ToolTip", "Delegate fired when the mana value has changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnManaChanged = { "OnManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaComponent, OnManaChanged), Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnManaChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnManaChanged_MetaData)) }; // 2217673695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_OnMaxManaChanged_MetaData[] = {
		{ "Comment", "// Delegate fired when the max mana value has changed.\n" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
		{ "ToolTip", "Delegate fired when the max mana value has changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnMaxManaChanged = { "OnMaxManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaComponent, OnMaxManaChanged), Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnMaxManaChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_OnMaxManaChanged_MetaData)) }; // 2217673695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Comment", "// Ability system used by this component.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
		{ "ToolTip", "Ability system used by this component." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaComponent, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponent_Statics::NewProp_CombatSet_MetaData[] = {
		{ "Comment", "// Mana set used by this component.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ManaComponent.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Mana set used by this component." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_CombatSet = { "CombatSet", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaComponent, CombatSet), Z_Construct_UClass_USkyShooterCombatSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::NewProp_CombatSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::NewProp_CombatSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnManaChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnMaxManaChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_CombatSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManaComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManaComponent_Statics::ClassParams = {
		&UManaComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UManaComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UManaComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManaComponent()
	{
		if (!Z_Registration_Info_UClass_UManaComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManaComponent.OuterSingleton, Z_Construct_UClass_UManaComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManaComponent.OuterSingleton;
	}
	template<> SKYSHOOTER_API UClass* StaticClass<UManaComponent>()
	{
		return UManaComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaComponent);
	UManaComponent::~UManaComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SKyShooterOld_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SKyShooterOld_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManaComponent, UManaComponent::StaticClass, TEXT("UManaComponent"), &Z_Registration_Info_UClass_UManaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManaComponent), 1487829298U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SKyShooterOld_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_2096775751(TEXT("/Script/SkyShooter"),
		Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SKyShooterOld_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SKyShooterOld_SkyShooter_LyraStarterGame_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_ManaComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
