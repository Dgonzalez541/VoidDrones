// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Weapons/LyraWeaponInstance.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
#include "LyraGame/Cosmetics/LyraCosmeticAnimationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWeaponInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponInstance();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponInstance_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraWeaponInstance::execPickBestAnimLayer)
	{
		P_GET_UBOOL(Z_Param_bEquipped);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_CosmeticTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UAnimInstance> *)Z_Param__Result=P_THIS->PickBestAnimLayer(Z_Param_bEquipped,Z_Param_Out_CosmeticTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraWeaponInstance::execGetTimeSinceLastInteractedWith)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeSinceLastInteractedWith();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraWeaponInstance::execUpdateFiringTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFiringTime();
		P_NATIVE_END;
	}
	void ULyraWeaponInstance::StaticRegisterNativesULyraWeaponInstance()
	{
		UClass* Class = ULyraWeaponInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTimeSinceLastInteractedWith", &ULyraWeaponInstance::execGetTimeSinceLastInteractedWith },
			{ "PickBestAnimLayer", &ULyraWeaponInstance::execPickBestAnimLayer },
			{ "UpdateFiringTime", &ULyraWeaponInstance::execUpdateFiringTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics
	{
		struct LyraWeaponInstance_eventGetTimeSinceLastInteractedWith_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponInstance_eventGetTimeSinceLastInteractedWith_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns how long it's been since the weapon was interacted with (fired or equipped)\n" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
		{ "ToolTip", "Returns how long it's been since the weapon was interacted with (fired or equipped)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraWeaponInstance, nullptr, "GetTimeSinceLastInteractedWith", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::LyraWeaponInstance_eventGetTimeSinceLastInteractedWith_Parms), Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics
	{
		struct LyraWeaponInstance_eventPickBestAnimLayer_Parms
		{
			bool bEquipped;
			FGameplayTagContainer CosmeticTags;
			TSubclassOf<UAnimInstance>  ReturnValue;
		};
		static void NewProp_bEquipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CosmeticTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CosmeticTags;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_bEquipped_SetBit(void* Obj)
	{
		((LyraWeaponInstance_eventPickBestAnimLayer_Parms*)Obj)->bEquipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_bEquipped = { "bEquipped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraWeaponInstance_eventPickBestAnimLayer_Parms), &Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_bEquipped_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_CosmeticTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_CosmeticTags = { "CosmeticTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponInstance_eventPickBestAnimLayer_Parms, CosmeticTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_CosmeticTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_CosmeticTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponInstance_eventPickBestAnimLayer_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_bEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_CosmeticTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "// Choose the best layer from EquippedAnimSet or UneuippedAnimSet based on the specified gameplay tags\n" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
		{ "ToolTip", "Choose the best layer from EquippedAnimSet or UneuippedAnimSet based on the specified gameplay tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraWeaponInstance, nullptr, "PickBestAnimLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::LyraWeaponInstance_eventPickBestAnimLayer_Parms), Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//~End of ULyraEquipmentInstance interface\n" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraWeaponInstance, nullptr, "UpdateFiringTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraWeaponInstance);
	UClass* Z_Construct_UClass_ULyraWeaponInstance_NoRegister()
	{
		return ULyraWeaponInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULyraWeaponInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedAnimSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquippedAnimSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UneuippedAnimSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UneuippedAnimSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraWeaponInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraEquipmentInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraWeaponInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith, "GetTimeSinceLastInteractedWith" }, // 4063954981
		{ &Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer, "PickBestAnimLayer" }, // 1236149349
		{ &Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime, "UpdateFiringTime" }, // 1200028780
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraWeaponInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraWeaponInstance\n *\n * A piece of equipment representing a weapon spawned and applied to a pawn\n */" },
		{ "IncludePath", "Weapons/LyraWeaponInstance.h" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraWeaponInstance\n\nA piece of equipment representing a weapon spawned and applied to a pawn" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_EquippedAnimSet_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_EquippedAnimSet = { "EquippedAnimSet", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraWeaponInstance, EquippedAnimSet), Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet, METADATA_PARAMS(Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_EquippedAnimSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_EquippedAnimSet_MetaData)) }; // 1329059335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_UneuippedAnimSet_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_UneuippedAnimSet = { "UneuippedAnimSet", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraWeaponInstance, UneuippedAnimSet), Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet, METADATA_PARAMS(Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_UneuippedAnimSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_UneuippedAnimSet_MetaData)) }; // 1329059335
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraWeaponInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_EquippedAnimSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_UneuippedAnimSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraWeaponInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraWeaponInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraWeaponInstance_Statics::ClassParams = {
		&ULyraWeaponInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraWeaponInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponInstance_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraWeaponInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraWeaponInstance()
	{
		if (!Z_Registration_Info_UClass_ULyraWeaponInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraWeaponInstance.OuterSingleton, Z_Construct_UClass_ULyraWeaponInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraWeaponInstance.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraWeaponInstance>()
	{
		return ULyraWeaponInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraWeaponInstance);
	ULyraWeaponInstance::~ULyraWeaponInstance() {}
	struct Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraWeaponInstance, ULyraWeaponInstance::StaticClass, TEXT("ULyraWeaponInstance"), &Z_Registration_Info_UClass_ULyraWeaponInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraWeaponInstance), 1702174942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_3297556241(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
