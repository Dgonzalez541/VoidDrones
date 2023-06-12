// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/UnrealString.h"
#include "Logging/LogMacros.h"

class UObject;

SKYSHOOTERGAME_API DECLARE_LOG_CATEGORY_EXTERN(LogLyra, Log, All);
SKYSHOOTERGAME_API DECLARE_LOG_CATEGORY_EXTERN(LogLyraExperience, Log, All);
SKYSHOOTERGAME_API DECLARE_LOG_CATEGORY_EXTERN(LogLyraAbilitySystem, Log, All);
SKYSHOOTERGAME_API DECLARE_LOG_CATEGORY_EXTERN(LogLyraTeams, Log, All);

SKYSHOOTERGAME_API FString GetClientServerContextString(UObject* ContextObject = nullptr);
