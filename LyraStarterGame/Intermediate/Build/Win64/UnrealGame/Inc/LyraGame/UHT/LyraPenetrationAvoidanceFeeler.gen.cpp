// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Camera/LyraPenetrationAvoidanceFeeler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPenetrationAvoidanceFeeler() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler;
class UScriptStruct* FLyraPenetrationAvoidanceFeeler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler, Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraPenetrationAvoidanceFeeler"));
	}
	return Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraPenetrationAvoidanceFeeler>()
{
	return FLyraPenetrationAvoidanceFeeler::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustmentRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdjustmentRot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PawnWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Extent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceInterval_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TraceInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesUntilNextTrace_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FramesUntilNextTrace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct defining a feeler ray used for camera penetration avoidance.\n */" },
		{ "ModuleRelativePath", "Camera/LyraPenetrationAvoidanceFeeler.h" },
		{ "ToolTip", "Struct defining a feeler ray used for camera penetration avoidance." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraPenetrationAvoidanceFeeler>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_AdjustmentRot_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
		{ "Comment", "/** FRotator describing deviance from main ray */" },
		{ "ModuleRelativePath", "Camera/LyraPenetrationAvoidanceFeeler.h" },
		{ "ToolTip", "FRotator describing deviance from main ray" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_AdjustmentRot = { "AdjustmentRot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraPenetrationAvoidanceFeeler, AdjustmentRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_AdjustmentRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_AdjustmentRot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_WorldWeight_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
		{ "Comment", "/** how much this feeler affects the final position if it hits the world */" },
		{ "ModuleRelativePath", "Camera/LyraPenetrationAvoidanceFeeler.h" },
		{ "ToolTip", "how much this feeler affects the final position if it hits the world" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_WorldWeight = { "WorldWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraPenetrationAvoidanceFeeler, WorldWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_WorldWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_WorldWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_PawnWeight_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
		{ "Comment", "/** how much this feeler affects the final position if it hits a APawn (setting to 0 will not attempt to collide with pawns at all) */" },
		{ "ModuleRelativePath", "Camera/LyraPenetrationAvoidanceFeeler.h" },
		{ "ToolTip", "how much this feeler affects the final position if it hits a APawn (setting to 0 will not attempt to collide with pawns at all)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_PawnWeight = { "PawnWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraPenetrationAvoidanceFeeler, PawnWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_PawnWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_PawnWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_Extent_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
		{ "Comment", "/** extent to use for collision when tracing this feeler */" },
		{ "ModuleRelativePath", "Camera/LyraPenetrationAvoidanceFeeler.h" },
		{ "ToolTip", "extent to use for collision when tracing this feeler" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraPenetrationAvoidanceFeeler, Extent), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_Extent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_TraceInterval_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
		{ "Comment", "/** minimum frame interval between traces with this feeler if nothing was hit last frame */" },
		{ "ModuleRelativePath", "Camera/LyraPenetrationAvoidanceFeeler.h" },
		{ "ToolTip", "minimum frame interval between traces with this feeler if nothing was hit last frame" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_TraceInterval = { "TraceInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraPenetrationAvoidanceFeeler, TraceInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_TraceInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_TraceInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_FramesUntilNextTrace_MetaData[] = {
		{ "Comment", "/** number of frames since this feeler was used */" },
		{ "ModuleRelativePath", "Camera/LyraPenetrationAvoidanceFeeler.h" },
		{ "ToolTip", "number of frames since this feeler was used" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_FramesUntilNextTrace = { "FramesUntilNextTrace", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraPenetrationAvoidanceFeeler, FramesUntilNextTrace), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_FramesUntilNextTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_FramesUntilNextTrace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_AdjustmentRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_WorldWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_PawnWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_TraceInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_FramesUntilNextTrace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraPenetrationAvoidanceFeeler",
		sizeof(FLyraPenetrationAvoidanceFeeler),
		alignof(FLyraPenetrationAvoidanceFeeler),
		Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler.InnerSingleton, Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Camera_LyraPenetrationAvoidanceFeeler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Camera_LyraPenetrationAvoidanceFeeler_h_Statics::ScriptStructInfo[] = {
		{ FLyraPenetrationAvoidanceFeeler::StaticStruct, Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewStructOps, TEXT("LyraPenetrationAvoidanceFeeler"), &Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraPenetrationAvoidanceFeeler), 578171888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Camera_LyraPenetrationAvoidanceFeeler_h_1935170066(TEXT("/Script/LyraGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Camera_LyraPenetrationAvoidanceFeeler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_Camera_LyraPenetrationAvoidanceFeeler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
