#include "ORTriggerVolumeComponent.h"
#include "Templates/SubclassOf.h"

class AActor;

void UORTriggerVolumeComponent::SetIsPlayerOnly(bool bInPlayerOnly) {
}

void UORTriggerVolumeComponent::SetEnabled(bool bInEnabled) {
}

bool UORTriggerVolumeComponent::IsPointInVolume(const FVector& Location) {
    return false;
}

bool UORTriggerVolumeComponent::IsPlayerOnly() const {
    return false;
}

bool UORTriggerVolumeComponent::IsPlayerInVolume() {
    return false;
}

float UORTriggerVolumeComponent::GetSignedDistanceToEdge(const FVector& Location) {
    return 0.0f;
}

FVector UORTriggerVolumeComponent::GetNormalizedLocation(const FVector& Location) {
    return FVector{};
}

FVector UORTriggerVolumeComponent::GetLocalSpaceWorldLocation(const FVector& LocalSpaceLocation) {
    return FVector{};
}

TArray<AActor*> UORTriggerVolumeComponent::GetActorsInVolume(TSubclassOf<AActor> ClassFilter) {
    return TArray<AActor*>();
}

FVector UORTriggerVolumeComponent::ConstrainPoint(const FVector& Point, float& Fitness) {
    return FVector{};
}

UORTriggerVolumeComponent::UORTriggerVolumeComponent() {
    this->bPlayerOnly = false;
    this->bEnabled = true;
    this->bTriggerOnLeaveWhenRemoved = true;
}

