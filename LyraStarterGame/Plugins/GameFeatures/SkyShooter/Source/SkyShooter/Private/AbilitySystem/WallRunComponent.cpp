// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/WallRunComponent.h"

// Sets default values for this component's properties
UWallRunComponent::UWallRunComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UWallRunComponent::BindInput_Implementation(UInputComponent* InputComp)
{
	InputComp->BindAction
	(
	"Jump",
	IE_Pressed,
	this,
	&UWallRunComponent::OnJump
	);
	
}


void UWallRunComponent::WallRunJump_Implementation()
{
}

void UWallRunComponent::OnJump()
{
}

// Called when the game starts
void UWallRunComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWallRunComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

