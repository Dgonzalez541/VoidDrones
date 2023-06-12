// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Attributes/LyraCombatSet.h"
#include "SkyShooterCombatSet.generated.h"

/**
 * 
 */
UCLASS()
class SKYSHOOTERGAME_API USkyShooterCombatSet : public ULyraCombatSet
{
	GENERATED_BODY()
	
public:
	USkyShooterCombatSet();
	ATTRIBUTE_ACCESSORS(USkyShooterCombatSet, Mana);
	ATTRIBUTE_ACCESSORS(USkyShooterCombatSet, MaxMana);
	ATTRIBUTE_ACCESSORS(USkyShooterCombatSet, Charge);
	ATTRIBUTE_ACCESSORS(USkyShooterCombatSet, MaxCharges);

protected:
	virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	
	UFUNCTION()
	void OnRep_Mana(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_MaxMana(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_Charge(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_MaxCharges(const FGameplayAttributeData& OldValue);

	void ClampAttribute(const FGameplayAttribute& Attribute, float& NewValue) const;
	
private:
	// The current Mana attribute.  The Mana will be capped by the max Mana attribute.  Mana is hidden from modifiers so only executions can modify it.
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Mana, Category = "Lyra|Mana", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Mana;

	// The current max Mana attribute.  Max Mana is an attribute since gameplay effects can modify it.
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxMana, Category = "Lyra|Mana", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxMana;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Charge, Category = "Lyra|Charge", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Charge;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxCharges, Category = "Lyra|Charge", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxCharges;
};
