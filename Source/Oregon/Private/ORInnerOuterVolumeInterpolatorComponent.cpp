#include "ORInnerOuterVolumeInterpolatorComponent.h"
#include "Templates/SubclassOf.h"

class AActor;

void UORInnerOuterVolumeInterpolatorComponent::SetOuterSphereRadius(float InSphereRadius) {
}

void UORInnerOuterVolumeInterpolatorComponent::SetOuterShape(EORTriggerSystemShape InShape) {
}

void UORInnerOuterVolumeInterpolatorComponent::SetOuterCapsuleRadius(float InCapsuleRadius) {
}

void UORInnerOuterVolumeInterpolatorComponent::SetOuterCapsuleHalfHeight(float InCapsuleHalfHeight) {
}

void UORInnerOuterVolumeInterpolatorComponent::SetOuterBoxExtents(const FVector& InBoxExtents) {
}

void UORInnerOuterVolumeInterpolatorComponent::SetIsPlayerOnly(bool bInPlayerOnly) {
}

void UORInnerOuterVolumeInterpolatorComponent::SetInnerSphereRadius(float InSphereRadius) {
}

void UORInnerOuterVolumeInterpolatorComponent::SetInnerShape(EORTriggerSystemShape InShape) {
}

void UORInnerOuterVolumeInterpolatorComponent::SetInnerCapsuleRadius(float InCapsuleRadius) {
}

void UORInnerOuterVolumeInterpolatorComponent::SetInnerCapsuleHalfHeight(float InCapsuleHalfHeight) {
}

void UORInnerOuterVolumeInterpolatorComponent::SetInnerBoxExtents(const FVector& InBoxExtents) {
}

void UORInnerOuterVolumeInterpolatorComponent::SetEnabled(bool bNewEnabled) {
}

float UORInnerOuterVolumeInterpolatorComponent::GetSignedDistanceToOuterEdge(const FVector& Location) {
    return 0.0f;
}

float UORInnerOuterVolumeInterpolatorComponent::GetSignedDistanceToInnerEdge(const FVector& Location) {
    return 0.0f;
}

EORTriggerSystemShape UORInnerOuterVolumeInterpolatorComponent::GetOuterShape() const {
    return EORTriggerSystemShape::Box;
}

EORTriggerSystemShape UORInnerOuterVolumeInterpolatorComponent::GetInnerShape() const {
    return EORTriggerSystemShape::Box;
}

TArray<AActor*> UORInnerOuterVolumeInterpolatorComponent::GetActorsInVolume(TSubclassOf<AActor> ClassFilter) {
    return TArray<AActor*>();
}

UORInnerOuterVolumeInterpolatorComponent::UORInnerOuterVolumeInterpolatorComponent() {
    this->InnerShape = EORTriggerSystemShape::Box;
    this->OuterShape = EORTriggerSystemShape::Box;
    this->InnerSphereRadius = 25.00f;
    this->OuterSphereRadius = 100.00f;
    this->InnerCapsuleRadius = 25.00f;
    this->OuterCapsuleRadius = 25.00f;
    this->InnerCapsuleHalfHeight = 50.00f;
    this->OuterCapsuleHalfHeight = 50.00f;
    this->InnerLineThickness = 2.00f;
    this->OuterLineThickness = 1.50f;
    this->bShowInGame = false;
    this->bEnabled = true;
    this->bDrawOnlyIfSelected = false;
    this->bDrawSolid = false;
    this->bPlayerOnly = true;
}

