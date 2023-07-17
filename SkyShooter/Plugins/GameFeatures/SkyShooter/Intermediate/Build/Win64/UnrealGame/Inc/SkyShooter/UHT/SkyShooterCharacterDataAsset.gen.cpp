// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyShooter/Public/AbilitySystem/SkyShooterCharacterDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyShooterCharacterDataAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	SKYSHOOTER_API UClass* Z_Construct_UClass_USkyShooterCharacterDataAsset();
	SKYSHOOTER_API UClass* Z_Construct_UClass_USkyShooterCharacterDataAsset_NoRegister();
	SKYSHOOTERGAME_API UClass* Z_Construct_UClass_ULyraAbilitySet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SkyShooter();
// End Cross Module References
	void USkyShooterCharacterDataAsset::StaticRegisterNativesUSkyShooterCharacterDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkyShooterCharacterDataAsset);
	UClass* Z_Construct_UClass_USkyShooterCharacterDataAsset_NoRegister()
	{
		return USkyShooterCharacterDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WID_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WID_Weapon;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponLoadout_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponLoadout_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponLoadout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/SkyShooterCharacterDataAsset.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/SkyShooterCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_AbilitySets_Inner = { "AbilitySets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraAbilitySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_AbilitySets_MetaData[] = {
		{ "Category", "Gameplay Abilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/SkyShooterCharacterDataAsset.h" },
		{ "TitleProperty", "Ability" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_AbilitySets = { "AbilitySets", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyShooterCharacterDataAsset, AbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_AbilitySets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_AbilitySets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_CharacterClass_MetaData[] = {
		{ "Category", "Gameplay Abilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/SkyShooterCharacterDataAsset.h" },
		{ "TitleProperty", "Ability" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyShooterCharacterDataAsset, CharacterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_CharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_CharacterClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_WID_Weapon_MetaData[] = {
		{ "Category", "Gameplay Abilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/SkyShooterCharacterDataAsset.h" },
		{ "TitleProperty", "Ability" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_WID_Weapon = { "WID_Weapon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyShooterCharacterDataAsset, WID_Weapon), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_WID_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_WID_Weapon_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_WeaponLoadout_Inner = { "WeaponLoadout", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_WeaponLoadout_MetaData[] = {
		{ "Category", "Gameplay Abilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/SkyShooterCharacterDataAsset.h" },
		{ "TitleProperty", "Ability" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_WeaponLoadout = { "WeaponLoadout", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyShooterCharacterDataAsset, WeaponLoadout), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_WeaponLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_WeaponLoadout_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_AbilitySets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_AbilitySets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_CharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_WID_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_WeaponLoadout_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::NewProp_WeaponLoadout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyShooterCharacterDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::ClassParams = {
		&USkyShooterCharacterDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyShooterCharacterDataAsset()
	{
		if (!Z_Registration_Info_UClass_USkyShooterCharacterDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkyShooterCharacterDataAsset.OuterSingleton, Z_Construct_UClass_USkyShooterCharacterDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkyShooterCharacterDataAsset.OuterSingleton;
	}
	template<> SKYSHOOTER_API UClass* StaticClass<USkyShooterCharacterDataAsset>()
	{
		return USkyShooterCharacterDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyShooterCharacterDataAsset);
	USkyShooterCharacterDataAsset::~USkyShooterCharacterDataAsset() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_SkyShooterCharacterDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_SkyShooterCharacterDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkyShooterCharacterDataAsset, USkyShooterCharacterDataAsset::StaticClass, TEXT("USkyShooterCharacterDataAsset"), &Z_Registration_Info_UClass_USkyShooterCharacterDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkyShooterCharacterDataAsset), 2696831413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_SkyShooterCharacterDataAsset_h_3388346922(TEXT("/Script/SkyShooter"),
		Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_SkyShooterCharacterDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Plugins_GameFeatures_SkyShooter_Source_SkyShooter_Public_AbilitySystem_SkyShooterCharacterDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
