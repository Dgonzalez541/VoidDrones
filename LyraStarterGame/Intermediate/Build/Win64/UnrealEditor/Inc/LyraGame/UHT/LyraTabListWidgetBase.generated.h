// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Common/LyraTabListWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonUserWidget;
struct FLyraTabDescriptor;
#ifdef LYRAGAME_LyraTabListWidgetBase_generated_h
#error "LyraTabListWidgetBase.generated.h already included, missing '#pragma once' in LyraTabListWidgetBase.h"
#endif
#define LYRAGAME_LyraTabListWidgetBase_generated_h

#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraTabDescriptor>();

#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_SPARSE_DATA
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_RPC_WRAPPERS \
	virtual void SetTabLabelInfo_Implementation(FLyraTabDescriptor const& TabDescriptor) {}; \
 \
	DECLARE_FUNCTION(execSetTabLabelInfo);


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetTabLabelInfo_Implementation(FLyraTabDescriptor const& TabDescriptor) {}; \
 \
	DECLARE_FUNCTION(execSetTabLabelInfo);


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_ACCESSORS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_CALLBACK_WRAPPERS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTabButtonInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTabButtonInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTabButtonInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTabButtonInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraTabButtonInterface(ULyraTabButtonInterface&&); \
	NO_API ULyraTabButtonInterface(const ULyraTabButtonInterface&); \
public: \
	NO_API virtual ~ULyraTabButtonInterface();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTabButtonInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraTabButtonInterface(ULyraTabButtonInterface&&); \
	NO_API ULyraTabButtonInterface(const ULyraTabButtonInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTabButtonInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTabButtonInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTabButtonInterface) \
	NO_API virtual ~ULyraTabButtonInterface();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULyraTabButtonInterface(); \
	friend struct Z_Construct_UClass_ULyraTabButtonInterface_Statics; \
public: \
	DECLARE_CLASS(ULyraTabButtonInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraTabButtonInterface)


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILyraTabButtonInterface() {} \
public: \
	typedef ULyraTabButtonInterface UClassType; \
	typedef ILyraTabButtonInterface ThisClass; \
	static void Execute_SetTabLabelInfo(UObject* O, FLyraTabDescriptor const& TabDescriptor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_INCLASS_IINTERFACE \
protected: \
	virtual ~ILyraTabButtonInterface() {} \
public: \
	typedef ULyraTabButtonInterface UClassType; \
	typedef ILyraTabButtonInterface ThisClass; \
	static void Execute_SetTabLabelInfo(UObject* O, FLyraTabDescriptor const& TabDescriptor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_59_PROLOG
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_RPC_WRAPPERS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_CALLBACK_WRAPPERS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_CALLBACK_WRAPPERS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_62_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraTabButtonInterface>();

#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_106_DELEGATE \
struct LyraTabListWidgetBase_eventOnTabContentCreated_Parms \
{ \
	FName TabId; \
	UCommonUserWidget* TabWidget; \
}; \
static inline void FOnTabContentCreated_DelegateWrapper(const FMulticastScriptDelegate& OnTabContentCreated, FName TabId, UCommonUserWidget* TabWidget) \
{ \
	LyraTabListWidgetBase_eventOnTabContentCreated_Parms Parms; \
	Parms.TabId=TabId; \
	Parms.TabWidget=TabWidget; \
	OnTabContentCreated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_SPARSE_DATA
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVisibleTabCount); \
	DECLARE_FUNCTION(execIsTabVisible); \
	DECLARE_FUNCTION(execIsLastTabActive); \
	DECLARE_FUNCTION(execIsFirstTabActive); \
	DECLARE_FUNCTION(execRegisterDynamicTab); \
	DECLARE_FUNCTION(execSetTabHiddenState); \
	DECLARE_FUNCTION(execGetPreregisteredTabInfo);


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVisibleTabCount); \
	DECLARE_FUNCTION(execIsTabVisible); \
	DECLARE_FUNCTION(execIsLastTabActive); \
	DECLARE_FUNCTION(execIsFirstTabActive); \
	DECLARE_FUNCTION(execRegisterDynamicTab); \
	DECLARE_FUNCTION(execSetTabHiddenState); \
	DECLARE_FUNCTION(execGetPreregisteredTabInfo);


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_ACCESSORS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraTabListWidgetBase(); \
	friend struct Z_Construct_UClass_ULyraTabListWidgetBase_Statics; \
public: \
	DECLARE_CLASS(ULyraTabListWidgetBase, UCommonTabListWidgetBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraTabListWidgetBase)


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_INCLASS \
private: \
	static void StaticRegisterNativesULyraTabListWidgetBase(); \
	friend struct Z_Construct_UClass_ULyraTabListWidgetBase_Statics; \
public: \
	DECLARE_CLASS(ULyraTabListWidgetBase, UCommonTabListWidgetBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraTabListWidgetBase)


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTabListWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTabListWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTabListWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTabListWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraTabListWidgetBase(ULyraTabListWidgetBase&&); \
	NO_API ULyraTabListWidgetBase(const ULyraTabListWidgetBase&); \
public: \
	NO_API virtual ~ULyraTabListWidgetBase();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTabListWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraTabListWidgetBase(ULyraTabListWidgetBase&&); \
	NO_API ULyraTabListWidgetBase(const ULyraTabListWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTabListWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTabListWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTabListWidgetBase) \
	NO_API virtual ~ULyraTabListWidgetBase();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_74_PROLOG
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_RPC_WRAPPERS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_INCLASS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_INCLASS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraTabListWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
