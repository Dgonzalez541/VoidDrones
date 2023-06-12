// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyShooterGame/GameFeatures/GameFeatureAction_WorldActionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_WorldActionBase() {}
// Cross Module References
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
	SKYSHOOTERGAME_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
	SKYSHOOTERGAME_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SkyShooterGame();
// End Cross Module References
	void UGameFeatureAction_WorldActionBase::StaticRegisterNativesUGameFeatureAction_WorldActionBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_WorldActionBase);
	UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase_NoRegister()
	{
		return UGameFeatureAction_WorldActionBase::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooterGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for GameFeatureActions that wish to do something world specific.\n */" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_WorldActionBase.h" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_WorldActionBase.h" },
		{ "ToolTip", "Base class for GameFeatureActions that wish to do something world specific." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_WorldActionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::ClassParams = {
		&UGameFeatureAction_WorldActionBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x002010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase.OuterSingleton;
	}
	template<> SKYSHOOTERGAME_API UClass* StaticClass<UGameFeatureAction_WorldActionBase>()
	{
		return UGameFeatureAction_WorldActionBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_WorldActionBase);
	UGameFeatureAction_WorldActionBase::~UGameFeatureAction_WorldActionBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameFeatures_GameFeatureAction_WorldActionBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameFeatures_GameFeatureAction_WorldActionBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_WorldActionBase, UGameFeatureAction_WorldActionBase::StaticClass, TEXT("UGameFeatureAction_WorldActionBase"), &Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_WorldActionBase), 4083859239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameFeatures_GameFeatureAction_WorldActionBase_h_180826638(TEXT("/Script/SkyShooterGame"),
		Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameFeatures_GameFeatureAction_WorldActionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_GameFeatures_GameFeatureAction_WorldActionBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
