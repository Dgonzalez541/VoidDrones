// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/System/LyraGameEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameEngine() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameEngine();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameEngine();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameEngine_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraGameEngine::StaticRegisterNativesULyraGameEngine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameEngine);
	UClass* Z_Construct_UClass_ULyraGameEngine_NoRegister()
	{
		return ULyraGameEngine::StaticClass();
	}
	struct Z_Construct_UClass_ULyraGameEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraGameEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "System/LyraGameEngine.h" },
		{ "ModuleRelativePath", "System/LyraGameEngine.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraGameEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameEngine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameEngine_Statics::ClassParams = {
		&ULyraGameEngine::StaticClass,
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
		0x000000AEu,
		METADATA_PARAMS(Z_Construct_UClass_ULyraGameEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraGameEngine()
	{
		if (!Z_Registration_Info_UClass_ULyraGameEngine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameEngine.OuterSingleton, Z_Construct_UClass_ULyraGameEngine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraGameEngine.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraGameEngine>()
	{
		return ULyraGameEngine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameEngine);
	ULyraGameEngine::~ULyraGameEngine() {}
	struct Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameEngine, ULyraGameEngine::StaticClass, TEXT("ULyraGameEngine"), &Z_Registration_Info_UClass_ULyraGameEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameEngine), 797410663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_2264651810(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
