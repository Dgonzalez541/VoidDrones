// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/System/LyraSignificanceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSignificanceManager() {}
// Cross Module References
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSignificanceManager();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSignificanceManager_NoRegister();
	SIGNIFICANCEMANAGER_API UClass* Z_Construct_UClass_USignificanceManager();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraSignificanceManager::StaticRegisterNativesULyraSignificanceManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSignificanceManager);
	UClass* Z_Construct_UClass_ULyraSignificanceManager_NoRegister()
	{
		return ULyraSignificanceManager::StaticClass();
	}
	struct Z_Construct_UClass_ULyraSignificanceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraSignificanceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USignificanceManager,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSignificanceManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "System/LyraSignificanceManager.h" },
		{ "ModuleRelativePath", "System/LyraSignificanceManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraSignificanceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSignificanceManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSignificanceManager_Statics::ClassParams = {
		&ULyraSignificanceManager::StaticClass,
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
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraSignificanceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSignificanceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraSignificanceManager()
	{
		if (!Z_Registration_Info_UClass_ULyraSignificanceManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSignificanceManager.OuterSingleton, Z_Construct_UClass_ULyraSignificanceManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraSignificanceManager.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraSignificanceManager>()
	{
		return ULyraSignificanceManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSignificanceManager);
	ULyraSignificanceManager::~ULyraSignificanceManager() {}
	struct Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_System_LyraSignificanceManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_System_LyraSignificanceManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSignificanceManager, ULyraSignificanceManager::StaticClass, TEXT("ULyraSignificanceManager"), &Z_Registration_Info_UClass_ULyraSignificanceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSignificanceManager), 3588017476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_System_LyraSignificanceManager_h_3449615506(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_System_LyraSignificanceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_System_LyraSignificanceManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
