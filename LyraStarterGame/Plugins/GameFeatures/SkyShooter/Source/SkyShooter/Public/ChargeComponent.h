// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/GameFrameworkComponent.h"
#include "SkyShooterCombatSet.h"
#include "ChargeComponent.generated.h"

struct FOnAttributeChangeData;
class ULyraCombatSet;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharge_AttributeChanged, UChargeComponent*, ChargeComponent, float,
											   OldValue, float, NewValue);

class ULyraAbilitySystemComponent;

UCLASS()
class SKYSHOOTER_API UChargeComponent : public UGameFrameworkComponent
{
	GENERATED_BODY()

public:
	UChargeComponent(const FObjectInitializer& ObjectInitializer);

	// Returns the Charge component if one exists on the specified actor.
	UFUNCTION(BlueprintPure, Category = "Lyra|Charge")
	static UChargeComponent* FindChargeComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UChargeComponent>() : nullptr); }

	// Initialize the component using an ability system component.
	UFUNCTION(BlueprintCallable, Category = "Lyra|Charge")
	void InitializeWithAbilitySystem(ULyraAbilitySystemComponent* InASC);

	// Uninitialize the component, clearing any references to the ability system.
	UFUNCTION(BlueprintCallable, Category = "Lyra|Charge")
	void UninitializeFromAbilitySystem();

	// Returns the current Charge value.
	UFUNCTION(BlueprintCallable, Category = "Lyra|Charge")
	float GetCharge() const;

	// Returns the current maximum Charge value.
	UFUNCTION(BlueprintCallable, Category = "Lyra|Charge")
	float GetMaxCharges() const;

	// Returns the current Charge in the range [0.0, 1.0].
	UFUNCTION(BlueprintCallable, Category = "Lyra|Charge")
	float GetChargeNormalized() const;

public:

	// Delegate fired when the Charge value has changed.
	UPROPERTY(BlueprintAssignable)
	FCharge_AttributeChanged OnChargeChanged;

	// Delegate fired when the max Charge value has changed.
	UPROPERTY(BlueprintAssignable)
	FCharge_AttributeChanged OnMaxChargeChanged;

protected:
	virtual void OnUnregister() override;
	
	virtual void HandleChargeChanged(const FOnAttributeChangeData& ChangeData);
	virtual void HandleMaxChargesChanged(const FOnAttributeChangeData& ChangeData);

	
	// Ability system used by this component.
	UPROPERTY()
	ULyraAbilitySystemComponent* AbilitySystemComponent;

	// Charge set used by this component.
	UPROPERTY()
	const USkyShooterCombatSet* CombatSet;
};
