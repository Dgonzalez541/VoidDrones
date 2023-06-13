// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyShooterGame/Cosmetics/LyraCosmeticAnimationTypes.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCosmeticAnimationTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	SKYSHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry();
	SKYSHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet();
	SKYSHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry();
	SKYSHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet();
	UPackage* Z_Construct_UPackage__Script_SkyShooterGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry;
class UScriptStruct* FLyraAnimLayerSelectionEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry, Z_Construct_UPackage__Script_SkyShooterGame(), TEXT("LyraAnimLayerSelectionEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry.OuterSingleton;
}
template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<FLyraAnimLayerSelectionEntry>()
{
	return FLyraAnimLayerSelectionEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Layer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAnimLayerSelectionEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewProp_Layer_MetaData[] = {
		{ "Category", "LyraAnimLayerSelectionEntry" },
		{ "Comment", "// Layer to apply if the tag matches\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
		{ "ToolTip", "Layer to apply if the tag matches" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAnimLayerSelectionEntry, Layer), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewProp_Layer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewProp_RequiredTags_MetaData[] = {
		{ "Categories", "Cosmetic" },
		{ "Category", "LyraAnimLayerSelectionEntry" },
		{ "Comment", "// Cosmetic tags required (all of these must be present to be considered a match)\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
		{ "ToolTip", "Cosmetic tags required (all of these must be present to be considered a match)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAnimLayerSelectionEntry, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewProp_RequiredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewProp_RequiredTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewProp_Layer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewProp_RequiredTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooterGame,
		nullptr,
		&NewStructOps,
		"LyraAnimLayerSelectionEntry",
		sizeof(FLyraAnimLayerSelectionEntry),
		alignof(FLyraAnimLayerSelectionEntry),
		Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry.InnerSingleton, Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet;
class UScriptStruct* FLyraAnimLayerSelectionSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet, Z_Construct_UPackage__Script_SkyShooterGame(), TEXT("LyraAnimLayerSelectionSet"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet.OuterSingleton;
}
template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<FLyraAnimLayerSelectionSet>()
{
	return FLyraAnimLayerSelectionSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerRules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLayer_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAnimLayerSelectionSet>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_LayerRules_Inner = { "LayerRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry, METADATA_PARAMS(nullptr, 0) }; // 2519247176
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_LayerRules_MetaData[] = {
		{ "Category", "LyraAnimLayerSelectionSet" },
		{ "Comment", "// List of layer rules to apply, first one that matches will be used\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
		{ "TitleProperty", "Layer" },
		{ "ToolTip", "List of layer rules to apply, first one that matches will be used" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_LayerRules = { "LayerRules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAnimLayerSelectionSet, LayerRules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_LayerRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_LayerRules_MetaData)) }; // 2519247176
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_DefaultLayer_MetaData[] = {
		{ "Category", "LyraAnimLayerSelectionSet" },
		{ "Comment", "// The layer to use if none of the LayerRules matches\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
		{ "ToolTip", "The layer to use if none of the LayerRules matches" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_DefaultLayer = { "DefaultLayer", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAnimLayerSelectionSet, DefaultLayer), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_DefaultLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_DefaultLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_LayerRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_LayerRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_DefaultLayer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooterGame,
		nullptr,
		&NewStructOps,
		"LyraAnimLayerSelectionSet",
		sizeof(FLyraAnimLayerSelectionSet),
		alignof(FLyraAnimLayerSelectionSet),
		Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet.InnerSingleton, Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry;
class UScriptStruct* FLyraAnimBodyStyleSelectionEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry, Z_Construct_UPackage__Script_SkyShooterGame(), TEXT("LyraAnimBodyStyleSelectionEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry.OuterSingleton;
}
template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<FLyraAnimBodyStyleSelectionEntry>()
{
	return FLyraAnimBodyStyleSelectionEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAnimBodyStyleSelectionEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "LyraAnimBodyStyleSelectionEntry" },
		{ "Comment", "// Layer to apply if the tag matches\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
		{ "ToolTip", "Layer to apply if the tag matches" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAnimBodyStyleSelectionEntry, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewProp_RequiredTags_MetaData[] = {
		{ "Categories", "Cosmetic" },
		{ "Category", "LyraAnimBodyStyleSelectionEntry" },
		{ "Comment", "// Cosmetic tags required (all of these must be present to be considered a match)\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
		{ "ToolTip", "Cosmetic tags required (all of these must be present to be considered a match)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAnimBodyStyleSelectionEntry, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewProp_RequiredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewProp_RequiredTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewProp_RequiredTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooterGame,
		nullptr,
		&NewStructOps,
		"LyraAnimBodyStyleSelectionEntry",
		sizeof(FLyraAnimBodyStyleSelectionEntry),
		alignof(FLyraAnimBodyStyleSelectionEntry),
		Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry.InnerSingleton, Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet;
class UScriptStruct* FLyraAnimBodyStyleSelectionSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet, Z_Construct_UPackage__Script_SkyShooterGame(), TEXT("LyraAnimBodyStyleSelectionSet"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet.OuterSingleton;
}
template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<FLyraAnimBodyStyleSelectionSet>()
{
	return FLyraAnimBodyStyleSelectionSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshRules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForcedPhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ForcedPhysicsAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAnimBodyStyleSelectionSet>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules_Inner = { "MeshRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry, METADATA_PARAMS(nullptr, 0) }; // 2312312181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules_MetaData[] = {
		{ "Category", "LyraAnimBodyStyleSelectionSet" },
		{ "Comment", "// List of layer rules to apply, first one that matches will be used\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
		{ "TitleProperty", "Mesh" },
		{ "ToolTip", "List of layer rules to apply, first one that matches will be used" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules = { "MeshRules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAnimBodyStyleSelectionSet, MeshRules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules_MetaData)) }; // 2312312181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_DefaultMesh_MetaData[] = {
		{ "Category", "LyraAnimBodyStyleSelectionSet" },
		{ "Comment", "// The layer to use if none of the LayerRules matches\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
		{ "ToolTip", "The layer to use if none of the LayerRules matches" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_DefaultMesh = { "DefaultMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAnimBodyStyleSelectionSet, DefaultMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_DefaultMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_DefaultMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_ForcedPhysicsAsset_MetaData[] = {
		{ "Category", "LyraAnimBodyStyleSelectionSet" },
		{ "Comment", "// If set, ensures this physics asset is always used\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
		{ "ToolTip", "If set, ensures this physics asset is always used" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_ForcedPhysicsAsset = { "ForcedPhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAnimBodyStyleSelectionSet, ForcedPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_ForcedPhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_ForcedPhysicsAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_DefaultMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_ForcedPhysicsAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyShooterGame,
		nullptr,
		&NewStructOps,
		"LyraAnimBodyStyleSelectionSet",
		sizeof(FLyraAnimBodyStyleSelectionSet),
		alignof(FLyraAnimBodyStyleSelectionSet),
		Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet.InnerSingleton, Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraCosmeticAnimationTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraCosmeticAnimationTypes_h_Statics::ScriptStructInfo[] = {
		{ FLyraAnimLayerSelectionEntry::StaticStruct, Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewStructOps, TEXT("LyraAnimLayerSelectionEntry"), &Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAnimLayerSelectionEntry), 2519247176U) },
		{ FLyraAnimLayerSelectionSet::StaticStruct, Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewStructOps, TEXT("LyraAnimLayerSelectionSet"), &Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAnimLayerSelectionSet), 2218960300U) },
		{ FLyraAnimBodyStyleSelectionEntry::StaticStruct, Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewStructOps, TEXT("LyraAnimBodyStyleSelectionEntry"), &Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAnimBodyStyleSelectionEntry), 2312312181U) },
		{ FLyraAnimBodyStyleSelectionSet::StaticStruct, Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewStructOps, TEXT("LyraAnimBodyStyleSelectionSet"), &Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAnimBodyStyleSelectionSet), 685172100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraCosmeticAnimationTypes_h_2526106973(TEXT("/Script/SkyShooterGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraCosmeticAnimationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Cosmetics_LyraCosmeticAnimationTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
