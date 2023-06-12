// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyShooterEditor/SkyShooterEditorEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyShooterEditorEngine() {}
// Cross Module References
	SKYSHOOTEREDITOR_API UClass* Z_Construct_UClass_USkyShooterEditorEngine();
	SKYSHOOTEREDITOR_API UClass* Z_Construct_UClass_USkyShooterEditorEngine_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdEngine();
	UPackage* Z_Construct_UPackage__Script_SkyShooterEditor();
// End Cross Module References
	void USkyShooterEditorEngine::StaticRegisterNativesUSkyShooterEditorEngine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkyShooterEditorEngine);
	UClass* Z_Construct_UClass_USkyShooterEditorEngine_NoRegister()
	{
		return USkyShooterEditorEngine::StaticClass();
	}
	struct Z_Construct_UClass_USkyShooterEditorEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyShooterEditorEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUnrealEdEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyShooterEditorEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkyShooterEditorEngine.h" },
		{ "ModuleRelativePath", "SkyShooterEditorEngine.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyShooterEditorEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyShooterEditorEngine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkyShooterEditorEngine_Statics::ClassParams = {
		&USkyShooterEditorEngine::StaticClass,
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
		0x008000AEu,
		METADATA_PARAMS(Z_Construct_UClass_USkyShooterEditorEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyShooterEditorEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyShooterEditorEngine()
	{
		if (!Z_Registration_Info_UClass_USkyShooterEditorEngine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkyShooterEditorEngine.OuterSingleton, Z_Construct_UClass_USkyShooterEditorEngine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkyShooterEditorEngine.OuterSingleton;
	}
	template<> SKYSHOOTEREDITOR_API UClass* StaticClass<USkyShooterEditorEngine>()
	{
		return USkyShooterEditorEngine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyShooterEditorEngine);
	USkyShooterEditorEngine::~USkyShooterEditorEngine() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterEditor_SkyShooterEditorEngine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterEditor_SkyShooterEditorEngine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkyShooterEditorEngine, USkyShooterEditorEngine::StaticClass, TEXT("USkyShooterEditorEngine"), &Z_Registration_Info_UClass_USkyShooterEditorEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkyShooterEditorEngine), 2834533225U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterEditor_SkyShooterEditorEngine_h_1989608349(TEXT("/Script/SkyShooterEditor"),
		Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterEditor_SkyShooterEditorEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterEditor_SkyShooterEditorEngine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
