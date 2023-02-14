// Fill out your copyright notice in the Description page of Project Settings.


#include "SkyShooterCombatSet.h"

#include "Net/UnrealNetwork.h"

USkyShooterCombatSet::USkyShooterCombatSet()
	: Mana(100.0f)
	, MaxMana(100.0f)
	, Charge(5.0f)
	, MaxCharges(5.0f)
{
}

void USkyShooterCombatSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);
	ClampAttribute(Attribute, NewValue);
}

void USkyShooterCombatSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	ClampAttribute(Attribute, NewValue);
}

void USkyShooterCombatSet::OnRep_Mana(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USkyShooterCombatSet, Mana, OldValue);
}

void USkyShooterCombatSet::OnRep_MaxMana(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USkyShooterCombatSet, MaxMana, OldValue);
}

void USkyShooterCombatSet::OnRep_Charge(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USkyShooterCombatSet, Charge, OldValue);
}

void USkyShooterCombatSet::OnRep_MaxCharges(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USkyShooterCombatSet, MaxCharges, OldValue);
}

void USkyShooterCombatSet::ClampAttribute(const FGameplayAttribute& Attribute, float& NewValue) const
{
	if (Attribute == GetManaAttribute())
	{
		// Do not allow health to go negative or above max health.
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxMana());
	}
	else if (Attribute == GetMaxManaAttribute())
	{
		// Do not allow max health to drop below 1.
		NewValue = FMath::Max(NewValue, 1.0f);
	}else if (Attribute == GetChargeAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxCharges());
	}else if (Attribute == GetMaxChargesAttribute())
	{
		// Do not allow max health to drop below 1.
		NewValue = FMath::Max(NewValue, 1.0f);
	}
}

void USkyShooterCombatSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(USkyShooterCombatSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USkyShooterCombatSet, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USkyShooterCombatSet, Charge, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USkyShooterCombatSet, MaxCharges, COND_None, REPNOTIFY_Always);
}
