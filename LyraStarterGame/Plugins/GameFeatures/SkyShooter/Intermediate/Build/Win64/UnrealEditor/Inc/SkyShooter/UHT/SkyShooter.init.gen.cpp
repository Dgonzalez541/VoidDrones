// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyShooter_init() {}
	SKYSHOOTER_API UFunction* Z_Construct_UDelegateFunction_SkyShooter_Charge_AttributeChanged__DelegateSignature();
	SKYSHOOTER_API UFunction* Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature();
	SKYSHOOTER_API UFunction* Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature();
	SKYSHOOTER_API UFunction* Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SkyShooter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SkyShooter()
	{
		if (!Z_Registration_Info_UPackage__Script_SkyShooter.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SkyShooter_Charge_AttributeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SkyShooter_Mana_AttributeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SkyShooter_OnTickTaskDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SkyShooter_PawnsOverlappedChangedEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SkyShooter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD8D5A810,
				0xA0D11DE9,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SkyShooter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SkyShooter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SkyShooter(Z_Construct_UPackage__Script_SkyShooter, TEXT("/Script/SkyShooter"), Z_Registration_Info_UPackage__Script_SkyShooter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD8D5A810, 0xA0D11DE9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
