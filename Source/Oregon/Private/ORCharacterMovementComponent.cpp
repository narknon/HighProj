#include "ORCharacterMovementComponent.h"

class USplineComponent;

void UORCharacterMovementComponent::ToggleSprint(bool bNewSprint) {
}

void UORCharacterMovementComponent::StartSplineMove(USplineComponent* SplineComponent, float StartDistance, const float SplineMoveSpeed, const bool ReverseSplineDirection, const bool ForceSplineRotation, const bool ProjectSplineToMesh) {
}

void UORCharacterMovementComponent::StartLinearTween(FVector GoalLocation, float TweenSpeed, FRotator GoalRotation, bool EndTweenOnCollision, bool bTurnOffActorCollision, bool bUseForcedRotation, float RotationSpeedMod) {
}

void UORCharacterMovementComponent::SetWalkableSurfaceOverrideOnTimer(TEnumAsByte<EPhysicalSurface> SurfaceOverride, float Duration) {
}

void UORCharacterMovementComponent::SetWalkableSurfaceOverride(TEnumAsByte<EPhysicalSurface> SurfaceOverride) {
}

void UORCharacterMovementComponent::RemoveWalkableSurfaceOverride() {
}

bool UORCharacterMovementComponent::IsTweening() {
    return false;
}

bool UORCharacterMovementComponent::IsSprinting() const {
    return false;
}

bool UORCharacterMovementComponent::IsSplineMoving() {
    return false;
}

bool UORCharacterMovementComponent::IsInZipline() {
    return false;
}

bool UORCharacterMovementComponent::IsInMagWall() {
    return false;
}

bool UORCharacterMovementComponent::IsInAnchorPull() {
    return false;
}

TEnumAsByte<EPhysicalSurface> UORCharacterMovementComponent::GetWalkableSurfaceType() {
    return SurfaceType_Default;
}

FGameplayTag UORCharacterMovementComponent::GetTagForCurrentMovement() {
    return FGameplayTag{};
}

void UORCharacterMovementComponent::EndTween() {
}

void UORCharacterMovementComponent::EndSplineMove() {
}

UORCharacterMovementComponent::UORCharacterMovementComponent() {
    this->ImpactDamageMinSpeed = 2000.00f;
    this->ImpactGameplayEffect = NULL;
    this->ImpactImmunityGameplayEffect = NULL;
    this->bIsSprinting = false;
    this->TweenType = ETT_Linear;
    this->TweenGoalSpeed = 0.00f;
    this->TweenGoalRotationMod = 0.00f;
    this->TweenCurrentTime = 0.00f;
    this->TweenGoalTime = 0.00f;
    this->bIsEndingTween = false;
    this->bEndTweenOnCollision = false;
    this->bTweenCollisionOff = false;
    this->bUseTweenRotation = false;
    this->bZiplineNegativeTravel = false;
    this->MinZiplineTravelDistance = 0.01f;
    this->GroundFrictionMagwall = 8.00f;
    this->MagWallStrafeThreshold = 0.85f;
    this->bAutoDismountAtMagwallEnd = true;
    this->LookVectorSpeedAdjustmentCurve = NULL;
    this->SplineMovePercent = -1.00f;
    this->CurrentMovementSplineDistance = 0.00f;
    this->ZiplineRollOffset = 0.00f;
    this->ZiplineRollSpeed = 0.00f;
    this->ZiplineSubstepTime = 0.01f;
    this->ZiplineRollGravity = 0.03f;
    this->ZiplineRollLateralAccelFactor = 35.00f;
    this->ZiplineRollFriction = 0.25f;
}

