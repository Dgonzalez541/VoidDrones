// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/GameSettingPanel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameSetting;
struct FGameplayTag;
#ifdef GAMESETTINGS_GameSettingPanel_generated_h
#error "GameSettingPanel.generated.h already included, missing '#pragma once' in GameSettingPanel.h"
#endif
#define GAMESETTINGS_GameSettingPanel_generated_h

#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_111_DELEGATE \
struct GameSettingPanel_eventOnExecuteNamedActionBP_Parms \
{ \
	UGameSetting* Setting; \
	FGameplayTag Action; \
}; \
static inline void FOnExecuteNamedActionBP_DelegateWrapper(const FMulticastScriptDelegate& OnExecuteNamedActionBP, UGameSetting* Setting, FGameplayTag Action) \
{ \
	GameSettingPanel_eventOnExecuteNamedActionBP_Parms Parms; \
	Parms.Setting=Setting; \
	Parms.Action=Action; \
	OnExecuteNamedActionBP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_SPARSE_DATA
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_RPC_WRAPPERS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_ACCESSORS
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSettingPanel(); \
	friend struct Z_Construct_UClass_UGameSettingPanel_Statics; \
public: \
	DECLARE_CLASS(UGameSettingPanel, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameSettingPanel)


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUGameSettingPanel(); \
	friend struct Z_Construct_UClass_UGameSettingPanel_Statics; \
public: \
	DECLARE_CLASS(UGameSettingPanel, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameSettingPanel)


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSettingPanel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSettingPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSettingPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSettingPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSettingPanel(UGameSettingPanel&&); \
	NO_API UGameSettingPanel(const UGameSettingPanel&); \
public: \
	NO_API virtual ~UGameSettingPanel();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSettingPanel(UGameSettingPanel&&); \
	NO_API UGameSettingPanel(const UGameSettingPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSettingPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSettingPanel); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGameSettingPanel) \
	NO_API virtual ~UGameSettingPanel();


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_27_PROLOG
#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_RPC_WRAPPERS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_INCLASS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_SPARSE_DATA \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_ACCESSORS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_INCLASS_NO_PURE_DECLS \
	FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESETTINGS_API UClass* StaticClass<class UGameSettingPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_SkyShooter_SkyShooter_LyraStarterGame_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
