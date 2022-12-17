#include "ORDetachedTriggerComponent.h"
#include "Templates/SubclassOf.h"

class AActor;

void UORDetachedTriggerComponent::SetIsPlayerOnly(bool bInPlayerOnly) {
}

void UORDetachedTriggerComponent::SetEnabled(bool bInEnabled) {
}

bool UORDetachedTriggerComponent::IsPointInVolume(const FVector& Location) {
    return false;
}

float UORDetachedTriggerComponent::GetSignedDistanceToEdge(const FVector& Location) {
    return 0.0f;
}

FVector UORDetachedTriggerComponent::GetNormalizedLocation(const FVector& Location) {
    return FVector{};
}

FVector UORDetachedTriggerComponent::GetLocalSpaceWorldLocation(const FVector& LocalSpaceLocation) {
    return FVector{};
}

TArray<AActor*> UORDetachedTriggerComponent::GetActorsInVolume(TSubclassOf<AActor> ClassFilter) {
    return TArray<AActor*>();
}

UORDetachedTriggerComponent::UORDetachedTriggerComponent() {
    this->bPlayerOnly = false;
    this->bEnabled = true;
    this->bTriggerOnLeaveWhenRemoved = true;
}

