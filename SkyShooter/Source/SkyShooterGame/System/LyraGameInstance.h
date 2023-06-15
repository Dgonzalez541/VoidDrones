// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CommonGameInstance.h"
#include "UObject/UObjectGlobals.h"
#include "Settings/LyraSettingsLocal.h"
#include "LyraGameInstance.generated.h"

class ALyraPlayerController;
class UObject;

UCLASS(Config = Game)
class SKYSHOOTERGAME_API ULyraGameInstance : public UCommonGameInstance
{
	GENERATED_BODY()

public:

	ULyraGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	ALyraPlayerController* GetPrimaryPlayerController() const;
	
	virtual bool CanJoinRequestedSession() const override;

	ULyraSettingsLocal* UserSettings;

	UFUNCTION(BlueprintCallable)
	ULyraSettingsLocal * GetUserSettings();

protected:

	virtual void Init() override;
	virtual void Shutdown() override;
};
