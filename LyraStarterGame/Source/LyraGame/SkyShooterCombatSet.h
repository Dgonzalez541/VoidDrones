// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Attributes/LyraCombatSet.h"
#include "SkyShooterCombatSet.generated.h"

/**
 * 
 */
UCLASS()
class LYRAGAME_API USkyShooterCombatSet : public ULyraCombatSet
{
	GENERATED_BODY()
	
public:
	USkyShooterCombatSet();
	ATTRIBUTE_ACCESSORS(USkyShooterCombatSet, Mana);
	ATTRIBUTE_ACCESSORS(USkyShooterCombatSet, MaxMana);

protected:
	virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	
	UFUNCTION()
	void OnRep_Mana(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_MaxMana(const FGameplayAttributeData& OldValue);

	void ClampAttribute(const FGameplayAttribute& Attribute, float& NewValue) const;
	
private:
	// The current Mana attribute.  The Mana will be capped by the max Mana attribute.  Mana is hidden from modifiers so only executions can modify it.
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Mana, Category = "Lyra|Mana", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Mana;

	// The current max Mana attribute.  Max Mana is an attribute since gameplay effects can modify it.
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxMana, Category = "Lyra|Mana", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxMana;
};
