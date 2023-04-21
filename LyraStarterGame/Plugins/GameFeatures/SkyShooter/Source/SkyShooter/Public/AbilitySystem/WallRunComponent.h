// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WallRunComponent.generated.h"


UCLASS( Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SKYSHOOTER_API UWallRunComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWallRunComponent();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="WallRun Jump", Meta = (ForceAsFunction))
	void BindInput(UInputComponent* InputComp);

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="WallRun Jump", Meta = (ForceAsFunction))
	void WallRunJump();
	void OnJump();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
