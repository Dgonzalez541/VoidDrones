// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AbilitySystem/LyraAbilitySet.h"
#include "AbilitySystem/LyraTaggedActor.h"
#include "SkyShooterCharacterDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Const)
class SKYSHOOTER_API USkyShooterCharacterDataAsset : public UPrimaryDataAsset
{
public:

private:
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Gameplay Abilities", meta=(TitleProperty=Ability))
	TArray<ULyraAbilitySet*> AbilitySets;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Gameplay Abilities", meta=(TitleProperty=Ability))
	UClass* CharacterClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Gameplay Abilities", meta=(TitleProperty=Ability))
	UClass* WID_Weapon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Gameplay Abilities", meta=(TitleProperty=Ability))
	TArray<UClass*> WeaponLoadout;
};
