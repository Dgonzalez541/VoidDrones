// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Interaction/IInteractionInstigator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIInteractionInstigator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	LYRAGAME_API UClass* Z_Construct_UClass_UInteractionInstigator();
	LYRAGAME_API UClass* Z_Construct_UClass_UInteractionInstigator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void UInteractionInstigator::StaticRegisterNativesUInteractionInstigator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionInstigator);
	UClass* Z_Construct_UClass_UInteractionInstigator_NoRegister()
	{
		return UInteractionInstigator::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionInstigator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionInstigator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionInstigator_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Interaction/IInteractionInstigator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionInstigator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionInstigator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionInstigator_Statics::ClassParams = {
		&UInteractionInstigator::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionInstigator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInstigator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionInstigator()
	{
		if (!Z_Registration_Info_UClass_UInteractionInstigator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionInstigator.OuterSingleton, Z_Construct_UClass_UInteractionInstigator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractionInstigator.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UInteractionInstigator>()
	{
		return UInteractionInstigator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionInstigator);
	UInteractionInstigator::~UInteractionInstigator() {}
	struct Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionInstigator, UInteractionInstigator::StaticClass, TEXT("UInteractionInstigator"), &Z_Registration_Info_UClass_UInteractionInstigator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionInstigator), 2522875678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h_2726477807(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
