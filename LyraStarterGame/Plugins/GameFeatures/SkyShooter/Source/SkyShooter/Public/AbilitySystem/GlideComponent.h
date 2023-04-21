// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/InputComponent.h"
#include "GlideComponent.generated.h"
class UCurveVector;
class UCapsuleComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBindInputSignature, UInputComponent*, InputComp);
UCLASS( Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SKYSHOOTER_API UGlideComponent : public USceneComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnBindInputSignature OnBindInputDelegate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Paraglider Parameters")
	bool IsGlidingAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Paraglider Parameters")
	float MinimumHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Paraglider Parameters")
	FVector LeftHandIK_Offset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Paraglider Parameters")
	FVector RightHankIK_Offset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Paraglider Parameters")
	bool OverrideParagliderBP_Settings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Paraglider Parameters")
	float GlideSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Paraglider Parameters")
	float RateOfDescent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Paraglider Parameters")
	float GlideAcceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Paraglider Parameters")
	float GlideDeceleration;

	UGlideComponent();
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	//References
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| References")
	ACharacter* Character;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| References")
	class UCharacterMovementComponent* MovementComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| References")
	UCapsuleComponent* CapsuleComponent;

	//Gliding States
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding States")
	bool IsGliding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding States")
	bool IsDeploying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding States")
	bool IsPuttingAway;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding States")
	bool IsGlidingLocalClient;

	//Original Character Information
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Original Character Information")
	float OriginalGravityScale;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Original Character Information")
	float OriginalAirControl;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Original Character Information")
	float OriginalMaxSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Original Character Information")
	float OriginalMaxAcceleration;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Original Character Information")
	float OriginalBrakingDecelerationFalling;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Original Character Information")
	bool OriginalOrientRotationToMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Original Character Information")
	bool OriginalUseControllerDesiredRotation;

	//Misc
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Misc")
	float Delta;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Misc")
	FTransform ParagliderRelativeTransform;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Misc")
	FVector CurrentVelocity;

	//Input
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Input")
	float SidewaysInputAxis;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Input")
	float ForwardsInputAxis;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Input")
	FVector CurrentInputVector;

	//Gliding Rotation
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding Rotation")
	FRotator TargetRotation;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding Rotation")
	FRotator DeltaRotation;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding Rotation")
	FRotator CurrentRotation;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding Rotation")
	FRotator CurrentRotationAcceleration;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding Rotation")
	FRotator CurrentRotationRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding Rotation")
	FRotator FinalRotationRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding Rotation")
	float BaseRotationAcceleration;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding Rotation")
	float RotationScalar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding Rotation")
	float RotationDamping;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding Rotation")
	float NonLocalyaw;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding Rotation")
	FRotator PreviousNonLocalRotation;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Gliding Rotation")
	FRotator OriginalCharacterMeshRotation;

	//Animation Values
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Animation Values")
	float DeployAnimationTimer;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Animation Values")
	float PutAwayAnimationTimer;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Animation Values")
	float SpeedRatio;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Animation Values")
	float AdditiveStrafeDirection;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Animation Values")
	FRotator MovementAngle;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Animation Values")
	float CurrentLean;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Animation Values")
	float CurrentIdleLean;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Animation Values")
	float MaxLeanAngle;
	
	//ACurves
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Curves")
	UCurveVector* DeployScaleCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Curves")
	UCurveFloat* DeployRotationCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Curves")
	UCurveFloat* DeployLocationCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Curves")
	UCurveVector* PutAwayScaleCurve;

	//Updraft
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Updraft")
	bool IsBeingLifted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Glider|Core Utilities (Do Not Modify)| Updraft")
	float LiftSpeed;

	//Functions
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Animation", Meta = (ForceAsFunction))
	void BindInput(UInputComponent* InputComp);
	
	void BindMoveForwardCallBack(float X);

	void BindMoveRightCallBack(float X);

protected:
	//Animation
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Animation", Meta = (ForceAsFunction))
	void UpdateParagliderLean();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Animation", Meta = (ForceAsFunction))
	void PerformDeployAnimation();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Animation", Meta = (ForceAsFunction))
	void PerformPutAwayAnimation();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Animation", Meta = (ForceAsFunction))
	void InitializeDeploymentVisualProperties();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Animation", Meta = (ForceAsFunction))
	void InitializePutAwayVisualProperties();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Animation", Meta = (ForceAsFunction))
	void UpdateAnimationValues();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Movement Settings", Meta = (ForceAsFunction))
	void ApplyGlidingMovementSettings();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Movement Settings", Meta = (ForceAsFunction))
	void ApplyOriginalMovementSettings();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Movement Settings", Meta = (ForceAsFunction))
	void RecordOriginalMovementSettings();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Gliding Modes", Meta = (ForceAsFunction))
	void StartGlidingLocal();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Gliding Modes", Meta = (ForceAsFunction))
	void StopGlidingLocal();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Character Movement", Meta = (ForceAsFunction))
	void RotateCharacter();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Character Movement", Meta = (ForceAsFunction))
	FVector GetRelativeVelocity();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Character Movement", Meta = (ForceAsFunction))
	void UpdateFallingSpeed();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Character Movement", Meta = (ForceAsFunction))
	bool HeightCheck();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Character Movement", Meta = (ForceAsFunction))
	void CheckIfOnGround();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Paraglider Class", Meta = (ForceAsFunction))
	void SetParagliderActiveStatus(bool IsActive);

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Paraglider Class", Meta = (ForceAsFunction))
	void InitializeParagliderClass();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Misc", Meta = (ForceAsFunction))
	bool CanGlidingBegin();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, BlueprintPure, Category="Misc", Meta = (ForceAsFunction))
	bool GetLocalIsGlidingMacro();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Misc", Meta = (ForceAsFunction))
	void RecordInputData();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Network", Meta = (ForceAsFunction))
	bool CheckHasAuthority();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Network", Meta = (ForceAsFunction))
	bool IsLocallyControlled();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, BlueprintPure, Category="Network", Meta = (ForceAsFunction))
	float GetPing();
		
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Events", Meta = (ForceAsFunction))
	void OnRep_IsGliding();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Events", Meta = (ForceAsFunction))
	void OnRep_ParagliderClass();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Events", Meta = (ForceAsFunction))
	void OnRep_IsGlidingAllowed();

};
