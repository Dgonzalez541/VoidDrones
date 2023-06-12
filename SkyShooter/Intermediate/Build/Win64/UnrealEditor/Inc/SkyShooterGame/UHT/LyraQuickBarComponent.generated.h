// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipment/LyraQuickBarComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraInventoryItemInstance;
#ifdef SKYSHOOTERGAME_LyraQuickBarComponent_generated_h
#error "LyraQuickBarComponent.generated.h already included, missing '#pragma once' in LyraQuickBarComponent.h"
#endif
#define SKYSHOOTERGAME_LyraQuickBarComponent_generated_h

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_SPARSE_DATA
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_RPC_WRAPPERS \
	virtual void SetActiveSlotIndex_Implementation(int32 NewIndex); \
 \
	DECLARE_FUNCTION(execOnRep_ActiveSlotIndex); \
	DECLARE_FUNCTION(execOnRep_Slots); \
	DECLARE_FUNCTION(execRemoveItemFromSlot); \
	DECLARE_FUNCTION(execAddItemToSlot); \
	DECLARE_FUNCTION(execGetNextFreeItemSlot); \
	DECLARE_FUNCTION(execGetActiveSlotItem); \
	DECLARE_FUNCTION(execGetActiveSlotIndex); \
	DECLARE_FUNCTION(execGetSlots); \
	DECLARE_FUNCTION(execToggleWeapons); \
	DECLARE_FUNCTION(execUnequipWeapons); \
	DECLARE_FUNCTION(execSetActiveSlotIndex); \
	DECLARE_FUNCTION(execCycleActiveSlotBackward); \
	DECLARE_FUNCTION(execCycleActiveSlotForward);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetActiveSlotIndex_Implementation(int32 NewIndex); \
 \
	DECLARE_FUNCTION(execOnRep_ActiveSlotIndex); \
	DECLARE_FUNCTION(execOnRep_Slots); \
	DECLARE_FUNCTION(execRemoveItemFromSlot); \
	DECLARE_FUNCTION(execAddItemToSlot); \
	DECLARE_FUNCTION(execGetNextFreeItemSlot); \
	DECLARE_FUNCTION(execGetActiveSlotItem); \
	DECLARE_FUNCTION(execGetActiveSlotIndex); \
	DECLARE_FUNCTION(execGetSlots); \
	DECLARE_FUNCTION(execToggleWeapons); \
	DECLARE_FUNCTION(execUnequipWeapons); \
	DECLARE_FUNCTION(execSetActiveSlotIndex); \
	DECLARE_FUNCTION(execCycleActiveSlotBackward); \
	DECLARE_FUNCTION(execCycleActiveSlotForward);


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_ACCESSORS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_CALLBACK_WRAPPERS
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraQuickBarComponent(); \
	friend struct Z_Construct_UClass_ULyraQuickBarComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraQuickBarComponent, UControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraQuickBarComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Slots=NETFIELD_REP_START, \
		ActiveSlotIndex, \
		NETFIELD_REP_END=ActiveSlotIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesULyraQuickBarComponent(); \
	friend struct Z_Construct_UClass_ULyraQuickBarComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraQuickBarComponent, UControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraQuickBarComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Slots=NETFIELD_REP_START, \
		ActiveSlotIndex, \
		NETFIELD_REP_END=ActiveSlotIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraQuickBarComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraQuickBarComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraQuickBarComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraQuickBarComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraQuickBarComponent(ULyraQuickBarComponent&&); \
	NO_API ULyraQuickBarComponent(const ULyraQuickBarComponent&); \
public: \
	NO_API virtual ~ULyraQuickBarComponent();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraQuickBarComponent(ULyraQuickBarComponent&&); \
	NO_API ULyraQuickBarComponent(const ULyraQuickBarComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraQuickBarComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraQuickBarComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraQuickBarComponent) \
	NO_API virtual ~ULyraQuickBarComponent();


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_20_PROLOG
#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_RPC_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_CALLBACK_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_INCLASS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_SPARSE_DATA \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_ACCESSORS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_CALLBACK_WRAPPERS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYSHOOTERGAME_API UClass* StaticClass<class ULyraQuickBarComponent>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FLyraQuickBarSlotsChangedMessage>();

#define FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics; \
	SKYSHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SKYSHOOTERGAME_API UScriptStruct* StaticStruct<struct FLyraQuickBarActiveIndexChangedMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SkyShooter_SkyShooter_SkyShooter_Source_SkyShooterGame_Equipment_LyraQuickBarComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
