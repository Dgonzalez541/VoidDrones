// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Tasks/AbilityTask_EventTick.h"

UAbilityTask_EventTick::UAbilityTask_EventTick(const FObjectInitializer& ObjectInitializer)
{
	bTickingTask = true;
}

UAbilityTask_EventTick* UAbilityTask_EventTick::AbilityTaskOnTick(UGameplayAbility* OwningAbility, FName TaskInstanceName)
{
	UAbilityTask_EventTick* MyObj = NewAbilityTask<UAbilityTask_EventTick>(OwningAbility);
	return MyObj;
}

void UAbilityTask_EventTick::Activate()
{
	Super::Activate();
}

void UAbilityTask_EventTick::TickTask(float DeltaTime)
{
	Super::TickTask(DeltaTime);
	OnTick.Broadcast(DeltaTime);
}