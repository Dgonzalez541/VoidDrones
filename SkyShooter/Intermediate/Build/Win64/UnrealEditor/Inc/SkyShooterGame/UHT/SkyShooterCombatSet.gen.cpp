// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyShooterGame/SkyShooterCombatSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyShooterCombatSet() {}
// Cross Module References
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	SKYSHOOTERGAME_API UClass* Z_Construct_UClass_ULyraCombatSet();
	SKYSHOOTERGAME_API UClass* Z_Construct_UClass_USkyShooterCombatSet();
	SKYSHOOTERGAME_API UClass* Z_Construct_UClass_USkyShooterCombatSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SkyShooterGame();
// End Cross Module References
	DEFINE_FUNCTION(USkyShooterCombatSet::execOnRep_MaxCharges)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxCharges(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyShooterCombatSet::execOnRep_Charge)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Charge(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyShooterCombatSet::execOnRep_MaxMana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMana(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyShooterCombatSet::execOnRep_Mana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mana(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	void USkyShooterCombatSet::StaticRegisterNativesUSkyShooterCombatSet()
	{
		UClass* Class = USkyShooterCombatSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Charge", &USkyShooterCombatSet::execOnRep_Charge },
			{ "OnRep_Mana", &USkyShooterCombatSet::execOnRep_Mana },
			{ "OnRep_MaxCharges", &USkyShooterCombatSet::execOnRep_MaxCharges },
			{ "OnRep_MaxMana", &USkyShooterCombatSet::execOnRep_MaxMana },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics
	{
		struct SkyShooterCombatSet_eventOnRep_Charge_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyShooterCombatSet_eventOnRep_Charge_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SkyShooterCombatSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyShooterCombatSet, nullptr, "OnRep_Charge", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics::SkyShooterCombatSet_eventOnRep_Charge_Parms), Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics
	{
		struct SkyShooterCombatSet_eventOnRep_Mana_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyShooterCombatSet_eventOnRep_Mana_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SkyShooterCombatSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyShooterCombatSet, nullptr, "OnRep_Mana", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics::SkyShooterCombatSet_eventOnRep_Mana_Parms), Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics
	{
		struct SkyShooterCombatSet_eventOnRep_MaxCharges_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyShooterCombatSet_eventOnRep_MaxCharges_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SkyShooterCombatSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyShooterCombatSet, nullptr, "OnRep_MaxCharges", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics::SkyShooterCombatSet_eventOnRep_MaxCharges_Parms), Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics
	{
		struct SkyShooterCombatSet_eventOnRep_MaxMana_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyShooterCombatSet_eventOnRep_MaxMana_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SkyShooterCombatSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyShooterCombatSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics::SkyShooterCombatSet_eventOnRep_MaxMana_Parms), Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkyShooterCombatSet);
	UClass* Z_Construct_UClass_USkyShooterCombatSet_NoRegister()
	{
		return USkyShooterCombatSet::StaticClass();
	}
	struct Z_Construct_UClass_USkyShooterCombatSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Charge_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Charge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharges_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxCharges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyShooterCombatSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraCombatSet,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkyShooterCombatSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Charge, "OnRep_Charge" }, // 3771198055
		{ &Z_Construct_UFunction_USkyShooterCombatSet_OnRep_Mana, "OnRep_Mana" }, // 1330441546
		{ &Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxCharges, "OnRep_MaxCharges" }, // 1028610279
		{ &Z_Construct_UFunction_USkyShooterCombatSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 4038735760
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyShooterCombatSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SkyShooterCombatSet.h" },
		{ "ModuleRelativePath", "SkyShooterCombatSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_Mana_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Lyra|Mana" },
		{ "Comment", "// The current Mana attribute.  The Mana will be capped by the max Mana attribute.  Mana is hidden from modifiers so only executions can modify it.\n" },
		{ "ModuleRelativePath", "SkyShooterCombatSet.h" },
		{ "ToolTip", "The current Mana attribute.  The Mana will be capped by the max Mana attribute.  Mana is hidden from modifiers so only executions can modify it." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyShooterCombatSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_Mana_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Lyra|Mana" },
		{ "Comment", "// The current max Mana attribute.  Max Mana is an attribute since gameplay effects can modify it.\n" },
		{ "ModuleRelativePath", "SkyShooterCombatSet.h" },
		{ "ToolTip", "The current max Mana attribute.  Max Mana is an attribute since gameplay effects can modify it." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyShooterCombatSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_MaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_MaxMana_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_Charge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Lyra|Charge" },
		{ "ModuleRelativePath", "SkyShooterCombatSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_Charge = { "Charge", "OnRep_Charge", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyShooterCombatSet, Charge), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_Charge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_Charge_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_MaxCharges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Lyra|Charge" },
		{ "ModuleRelativePath", "SkyShooterCombatSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_MaxCharges = { "MaxCharges", "OnRep_MaxCharges", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyShooterCombatSet, MaxCharges), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_MaxCharges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_MaxCharges_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyShooterCombatSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_MaxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_Charge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyShooterCombatSet_Statics::NewProp_MaxCharges,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyShooterCombatSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyShooterCombatSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkyShooterCombatSet_Statics::ClassParams = {
		&USkyShooterCombatSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkyShooterCombatSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkyShooterCombatSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkyShooterCombatSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyShooterCombatSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyShooterCombatSet()
	{
		if (!Z_Registration_Info_UClass_USkyShooterCombatSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkyShooterCombatSet.OuterSingleton, Z_Construct_UClass_USkyShooterCombatSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkyShooterCombatSet.OuterSingleton;
	}
	template<> SKYSHOOTERGAME_API UClass* StaticClass<USkyShooterCombatSet>()
	{
		return USkyShooterCombatSet::StaticClass();
	}

	void USkyShooterCombatSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_MaxMana(TEXT("MaxMana"));
		static const FName Name_Charge(TEXT("Charge"));
		static const FName Name_MaxCharges(TEXT("MaxCharges"));

		const bool bIsValid = true
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
			&& Name_Charge == ClassReps[(int32)ENetFields_Private::Charge].Property->GetFName()
			&& Name_MaxCharges == ClassReps[(int32)ENetFields_Private::MaxCharges].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USkyShooterCombatSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyShooterCombatSet);
	USkyShooterCombatSet::~USkyShooterCombatSet() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkyShooterCombatSet, USkyShooterCombatSet::StaticClass, TEXT("USkyShooterCombatSet"), &Z_Registration_Info_UClass_USkyShooterCombatSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkyShooterCombatSet), 1788246479U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_3875393056(TEXT("/Script/SkyShooterGame"),
		Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_SkyShooterCombatSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
