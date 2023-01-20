// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/EnumAsByte.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/EngineTypes.h"
#include "UObject/UObjectGlobals.h"

#include "SkyShooterCoreRuntimeSettings.generated.h"

class UObject;

/** Runtime settings specific to the SkyShooterCoreRuntime plugin */
UCLASS(config = Game, defaultconfig)
class USkyShooterCoreRuntimeSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	USkyShooterCoreRuntimeSettings(const FObjectInitializer& Initializer);

	ECollisionChannel GetAimAssistCollisionChannel() const { return AimAssistCollisionChannel; }

private:

	/**
	 * What trace channel should be used to find available targets for Aim Assist.
	 * @see UAimAssistTargetManagerComponent::GetVisibleTargets
	 */
	UPROPERTY(config, EditAnywhere, Category = "Aim Assist")
	TEnumAsByte<ECollisionChannel> AimAssistCollisionChannel = ECollisionChannel::ECC_EngineTraceChannel5;
};