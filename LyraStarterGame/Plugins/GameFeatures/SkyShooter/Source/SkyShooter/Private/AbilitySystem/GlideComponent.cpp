// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/GlideComponent.h"


// Called when the game starts
void UGlideComponent::BeginPlay()
{
	Super::BeginPlay();
	OnBindInputDelegate.AddUniqueDynamic(this, &UGlideComponent::BindInput);
}

void UGlideComponent::BindInput_Implementation(UInputComponent* InputComp)
{
	InputComp->BindAxis
(
	"Move Forward / Backward", // The input binding (specified in DefaultInput.ini)
	this, 
	&UGlideComponent::BindMoveForwardCallBack 
);

	InputComp->BindAxis
	(
		"Move Right / Left", 
		this, 
		&UGlideComponent::BindMoveRightCallBack 
	);
}

void UGlideComponent::BindMoveForwardCallBack(float X)
{
	ForwardsInputAxis = X;
}

void UGlideComponent::BindMoveRightCallBack(float X)
{
	SidewaysInputAxis = X;
}

void UGlideComponent::PerformDeployAnimation_Implementation()
{
}
 
void UGlideComponent::PerformPutAwayAnimation_Implementation()
{
}

void UGlideComponent::InitializeDeploymentVisualProperties_Implementation()
{
}

void UGlideComponent::InitializePutAwayVisualProperties_Implementation()
{
}

void UGlideComponent::UpdateAnimationValues_Implementation()
{
}

void UGlideComponent::ApplyGlidingMovementSettings_Implementation()
{
}

void UGlideComponent::ApplyOriginalMovementSettings_Implementation()
{
}

void UGlideComponent::RecordOriginalMovementSettings_Implementation()
{
}

void UGlideComponent::StartGlidingLocal_Implementation()
{
}

void UGlideComponent::StopGlidingLocal_Implementation()
{
}

void UGlideComponent::RotateCharacter_Implementation()
{
}

FVector UGlideComponent::GetRelativeVelocity_Implementation()
{
	FVector vector;
	return vector;
}

void UGlideComponent::UpdateFallingSpeed_Implementation()
{
}

bool UGlideComponent::HeightCheck_Implementation()
{
	return false;
}

void UGlideComponent::CheckIfOnGround_Implementation()
{
}

void UGlideComponent::OnRep_IsGliding_Implementation()
{
}

void UGlideComponent::OnRep_ParagliderClass_Implementation()
{
}

void UGlideComponent::OnRep_IsGlidingAllowed_Implementation()
{
}

bool UGlideComponent::CanGlidingBegin_Implementation()
{
	return false;
}

bool UGlideComponent::GetLocalIsGlidingMacro_Implementation()
{
	return false;
}

bool UGlideComponent::CheckHasAuthority_Implementation()
{
	return false;
}

bool UGlideComponent::IsLocallyControlled_Implementation()
{
	return false;

}

float UGlideComponent::GetPing_Implementation()
{
	return -1;
}

// Sets default values for this component's properties
UGlideComponent::UGlideComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}



void UGlideComponent::RecordInputData_Implementation()
{
}

void UGlideComponent::SetParagliderActiveStatus_Implementation(bool IsActive)
{
}

void UGlideComponent::InitializeParagliderClass_Implementation()
{
}


void UGlideComponent::UpdateParagliderLean_Implementation()
{
}


// Called every frame
void UGlideComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

