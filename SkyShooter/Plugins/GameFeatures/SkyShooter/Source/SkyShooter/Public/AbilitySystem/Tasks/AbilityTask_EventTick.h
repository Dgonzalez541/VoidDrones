// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_EventTick.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTickTaskDelegate, float, DeltaTime);/**
 * 
 */
UCLASS()
class SKYSHOOTER_API UAbilityTask_EventTick : public UAbilityTask
{
	GENERATED_BODY()
	UPROPERTY(BlueprintAssignable)
	FOnTickTaskDelegate OnTick;

public:

	UAbilityTask_EventTick(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UAbilityTask_EventTick* AbilityTaskOnTick(
		UGameplayAbility* OwningAbility,
		FName TaskInstanceName);
	
	virtual void Activate() override;
	virtual void TickTask(float DeltaTime) override;

private:
	float TaskDeltaTime;
};
