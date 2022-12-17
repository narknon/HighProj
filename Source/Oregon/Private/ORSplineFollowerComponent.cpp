#include "ORSplineFollowerComponent.h"

class AActor;
class USplineComponent;

void UORSplineFollowerComponent::ToggleMovementDirection() {
}

void UORSplineFollowerComponent::TimelineFloatReturn(float Val) {
}

void UORSplineFollowerComponent::TimelineFinished() {
}

void UORSplineFollowerComponent::StopMovementAlongSpline() {
}

void UORSplineFollowerComponent::StartMovementAlongSpline(bool bResetPosition) {
}

void UORSplineFollowerComponent::SetSplineTrack(USplineComponent* SplineToFollow) {
}

void UORSplineFollowerComponent::SetPositionAlongSpline(float OffsetFromStartPosition) {
}

void UORSplineFollowerComponent::SetMovementDirection(bool bReverse) {
}

void UORSplineFollowerComponent::ResetSpeedToDefault() {
}

void UORSplineFollowerComponent::ModifySpeed(float SpeedMultiplier) {
}

bool UORSplineFollowerComponent::IsSplineMovementActive() {
    return false;
}

void UORSplineFollowerComponent::InitNewSplineActor(AActor* NewSplineActor) {
}

USplineComponent* UORSplineFollowerComponent::GetSplineTrack() {
    return NULL;
}

float UORSplineFollowerComponent::GetPercentageTraversed() {
    return 0.0f;
}

FVector UORSplineFollowerComponent::GetDirectionAtCurrentSplinePosition() {
    return FVector{};
}

UORSplineFollowerComponent::UORSplineFollowerComponent() {
    this->SplineActor = NULL;
    this->bMoveAtStart = true;
    this->bLoopMovement = true;
    this->bReverseAtEnd = true;
    this->bMatchSplineRotation = true;
    this->Duration = 5.00f;
    this->StartOffset = 0.00f;
    this->EndDelay = 0.00f;
    this->TimelineCurve = NULL;
    this->SplineTrackToFollow = NULL;
}

