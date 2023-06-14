// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyShooterGame/UI/Subsystem/LyraUIManagerSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraUIManagerSubsystem() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_UGameUIManagerSubsystem();
	SKYSHOOTERGAME_API UClass* Z_Construct_UClass_ULyraUIManagerSubsystem();
	SKYSHOOTERGAME_API UClass* Z_Construct_UClass_ULyraUIManagerSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SkyShooterGame();
// End Cross Module References
	void ULyraUIManagerSubsystem::StaticRegisterNativesULyraUIManagerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraUIManagerSubsystem);
	UClass* Z_Construct_UClass_ULyraUIManagerSubsystem_NoRegister()
	{
		return ULyraUIManagerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULyraUIManagerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraUIManagerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameUIManagerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooterGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUIManagerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Subsystem/LyraUIManagerSubsystem.h" },
		{ "ModuleRelativePath", "UI/Subsystem/LyraUIManagerSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraUIManagerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraUIManagerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraUIManagerSubsystem_Statics::ClassParams = {
		&ULyraUIManagerSubsystem::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ULyraUIManagerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUIManagerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraUIManagerSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULyraUIManagerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraUIManagerSubsystem.OuterSingleton, Z_Construct_UClass_ULyraUIManagerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraUIManagerSubsystem.OuterSingleton;
	}
	template<> SKYSHOOTERGAME_API UClass* StaticClass<ULyraUIManagerSubsystem>()
	{
		return ULyraUIManagerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraUIManagerSubsystem);
	ULyraUIManagerSubsystem::~ULyraUIManagerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Subsystem_LyraUIManagerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Subsystem_LyraUIManagerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraUIManagerSubsystem, ULyraUIManagerSubsystem::StaticClass, TEXT("ULyraUIManagerSubsystem"), &Z_Registration_Info_UClass_ULyraUIManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraUIManagerSubsystem), 3330000667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Subsystem_LyraUIManagerSubsystem_h_1965512456(TEXT("/Script/SkyShooterGame"),
		Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Subsystem_LyraUIManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_UI_Subsystem_LyraUIManagerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS