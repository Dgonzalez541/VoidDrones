// Fill out your copyright notice in the Description page of Project Settings.


#include "ChargeComponent.h"
#include "AbilitySystem/LyraAbilitySystemComponent.h"
#include "AbilitySystem/Attributes/LyraCombatSet.h"
#include "LyraLogChannels.h"
#include "SkyShooterCombatSet.h"

UChargeComponent::UChargeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);

	AbilitySystemComponent = nullptr;
	CombatSet = nullptr;
}

void UChargeComponent::InitializeWithAbilitySystem(ULyraAbilitySystemComponent* InASC)
{
	AActor* Owner = GetOwner();
	check(Owner);

	if (AbilitySystemComponent)
	{
		UE_LOG(LogLyra, Error, TEXT("LyraChargeComponent: Charge component for owner [%s] has already been initialized with an ability system."), *GetNameSafe(Owner));
		return;
	}

	AbilitySystemComponent = InASC;
	if (!AbilitySystemComponent)
	{
		UE_LOG(LogLyra, Error, TEXT("LyraChargeComponent: Cannot initialize Charge component for owner [%s] with NULL ability system."), *GetNameSafe(Owner));
		return;
	}

	CombatSet = AbilitySystemComponent->GetSet<USkyShooterCombatSet>();
	if (!CombatSet)
	{
		UE_LOG(LogLyra, Error, TEXT("LyraChargeComponent: Cannot initialize Charge component for owner [%s] with NULL Charge set on the ability system."), *GetNameSafe(Owner));
		return;
	}

	// Register to listen for attribute changes.
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USkyShooterCombatSet::GetChargeAttribute()).AddUObject(this, &ThisClass::HandleChargeChanged);
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USkyShooterCombatSet::GetMaxChargesAttribute()).AddUObject(this, &ThisClass::HandleMaxChargesChanged);
}

void UChargeComponent::UninitializeFromAbilitySystem()
{
	CombatSet = nullptr;
	AbilitySystemComponent = nullptr;
}

float UChargeComponent::GetCharge() const
{
	return (CombatSet ? CombatSet->GetCharge() : 0.0f);
}

float UChargeComponent::GetMaxCharges() const
{
	return (CombatSet ? CombatSet->GetMaxCharges() : 0.0f);
}

float UChargeComponent::GetChargeNormalized() const
{
	if (CombatSet)
	{
		const float Charge = CombatSet->GetCharge();
		const float MaxCharge = CombatSet->GetMaxCharges();

		return ((MaxCharge > 0.0f) ? (Charge / MaxCharge) : 0.0f);
	}

	return 0.0f;
}

void UChargeComponent::OnUnregister()
{
	UninitializeFromAbilitySystem();
	
	Super::OnUnregister();
}

void UChargeComponent::HandleChargeChanged(const FOnAttributeChangeData& ChangeData)
{
	OnChargeChanged.Broadcast(this, ChangeData.OldValue, ChangeData.NewValue);
}

void UChargeComponent::HandleMaxChargesChanged(const FOnAttributeChangeData& ChangeData)
{
	OnMaxChargeChanged.Broadcast(this, ChangeData.OldValue, ChangeData.NewValue);
}