// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/Widgets/Misc/KeyAlreadyBoundWarning.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyAlreadyBoundWarning() {}
// Cross Module References
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingPressAnyKey();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UKeyAlreadyBoundWarning();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UKeyAlreadyBoundWarning_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameSettings();
// End Cross Module References
	void UKeyAlreadyBoundWarning::StaticRegisterNativesUKeyAlreadyBoundWarning()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKeyAlreadyBoundWarning);
	UClass* Z_Construct_UClass_UKeyAlreadyBoundWarning_NoRegister()
	{
		return UKeyAlreadyBoundWarning::StaticClass();
	}
	struct Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarningText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WarningText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancelText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CancelText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSettingPressAnyKey,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UKeyAlreadyBoundWarning\n * Press any key screen with text blocks for warning users when a key is already bound\n */" },
		{ "IncludePath", "Widgets/Misc/KeyAlreadyBoundWarning.h" },
		{ "ModuleRelativePath", "Public/Widgets/Misc/KeyAlreadyBoundWarning.h" },
		{ "ToolTip", "UKeyAlreadyBoundWarning\nPress any key screen with text blocks for warning users when a key is already bound" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::NewProp_WarningText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "KeyAlreadyBoundWarning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Misc/KeyAlreadyBoundWarning.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::NewProp_WarningText = { "WarningText", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKeyAlreadyBoundWarning, WarningText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::NewProp_WarningText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::NewProp_WarningText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::NewProp_CancelText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "KeyAlreadyBoundWarning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Misc/KeyAlreadyBoundWarning.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::NewProp_CancelText = { "CancelText", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKeyAlreadyBoundWarning, CancelText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::NewProp_CancelText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::NewProp_CancelText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::NewProp_WarningText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::NewProp_CancelText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyAlreadyBoundWarning>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::ClassParams = {
		&UKeyAlreadyBoundWarning::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKeyAlreadyBoundWarning()
	{
		if (!Z_Registration_Info_UClass_UKeyAlreadyBoundWarning.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyAlreadyBoundWarning.OuterSingleton, Z_Construct_UClass_UKeyAlreadyBoundWarning_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKeyAlreadyBoundWarning.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UKeyAlreadyBoundWarning>()
	{
		return UKeyAlreadyBoundWarning::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyAlreadyBoundWarning);
	UKeyAlreadyBoundWarning::~UKeyAlreadyBoundWarning() {}
	struct Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_Misc_KeyAlreadyBoundWarning_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_Misc_KeyAlreadyBoundWarning_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKeyAlreadyBoundWarning, UKeyAlreadyBoundWarning::StaticClass, TEXT("UKeyAlreadyBoundWarning"), &Z_Registration_Info_UClass_UKeyAlreadyBoundWarning, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyAlreadyBoundWarning), 3255822121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_Misc_KeyAlreadyBoundWarning_h_3846108977(TEXT("/Script/GameSettings"),
		Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_Misc_KeyAlreadyBoundWarning_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_Misc_KeyAlreadyBoundWarning_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS