// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyShooterGame/Hotfix/LyraHotfixManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraHotfixManager() {}
// Cross Module References
	HOTFIX_API UClass* Z_Construct_UClass_UOnlineHotfixManager();
	SKYSHOOTERGAME_API UClass* Z_Construct_UClass_ULyraHotfixManager();
	SKYSHOOTERGAME_API UClass* Z_Construct_UClass_ULyraHotfixManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SkyShooterGame();
// End Cross Module References
	void ULyraHotfixManager::StaticRegisterNativesULyraHotfixManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraHotfixManager);
	UClass* Z_Construct_UClass_ULyraHotfixManager_NoRegister()
	{
		return ULyraHotfixManager::StaticClass();
	}
	struct Z_Construct_UClass_ULyraHotfixManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraHotfixManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineHotfixManager,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooterGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHotfixManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Hotfix/LyraHotfixManager.h" },
		{ "ModuleRelativePath", "Hotfix/LyraHotfixManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraHotfixManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraHotfixManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraHotfixManager_Statics::ClassParams = {
		&ULyraHotfixManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraHotfixManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHotfixManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraHotfixManager()
	{
		if (!Z_Registration_Info_UClass_ULyraHotfixManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraHotfixManager.OuterSingleton, Z_Construct_UClass_ULyraHotfixManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraHotfixManager.OuterSingleton;
	}
	template<> SKYSHOOTERGAME_API UClass* StaticClass<ULyraHotfixManager>()
	{
		return ULyraHotfixManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraHotfixManager);
	struct Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Hotfix_LyraHotfixManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Hotfix_LyraHotfixManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraHotfixManager, ULyraHotfixManager::StaticClass, TEXT("ULyraHotfixManager"), &Z_Registration_Info_UClass_ULyraHotfixManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraHotfixManager), 685803935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Hotfix_LyraHotfixManager_h_340712177(TEXT("/Script/SkyShooterGame"),
		Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Hotfix_LyraHotfixManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Hotfix_LyraHotfixManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
