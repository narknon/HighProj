#include "ORAttractionPointComponent.h"

class AActor;

bool UORAttractionPointComponent::SetAttractionPointClaimed(bool bClaimed, AActor* AIActor) {
    return false;
}

bool UORAttractionPointComponent::NotifyAttractionPointMoveFailed(AActor* Notifier) {
    return false;
}

bool UORAttractionPointComponent::IsEnabled() const {
    return false;
}

bool UORAttractionPointComponent::IsAttractionPointClaimed() const {
    return false;
}

bool UORAttractionPointComponent::HasRightCornerLineOfSight() const {
    return false;
}

bool UORAttractionPointComponent::HasRightCornerCover() const {
    return false;
}

bool UORAttractionPointComponent::HasLowCoverLineOfSight() const {
    return false;
}

bool UORAttractionPointComponent::HasLowCover() const {
    return false;
}

bool UORAttractionPointComponent::HasLeftCornerLineOfSight() const {
    return false;
}

bool UORAttractionPointComponent::HasLeftCornerCover() const {
    return false;
}

bool UORAttractionPointComponent::HasHighCover() const {
    return false;
}

bool UORAttractionPointComponent::HasAnyCoverAvailable() const {
    return false;
}

float UORAttractionPointComponent::GetTimeWithAnyLineOfSight() const {
    return 0.0f;
}

float UORAttractionPointComponent::GetTimeSinceLostLineOfSight() const {
    return 0.0f;
}

FAttractionPointCoverQuery UORAttractionPointComponent::GetCoverInfo(const FVector& ToLocation) const {
    return FAttractionPointCoverQuery{};
}

AActor* UORAttractionPointComponent::GetClaimantActor() const {
    return NULL;
}

void UORAttractionPointComponent::EnableAttractionPoint() {
}

void UORAttractionPointComponent::DisableAttractionPoint() {
}

UORAttractionPointComponent::UORAttractionPointComponent() {
    this->PathfindingGroup = EORAttractionPointPathfindingGroup::Group1;
    this->Claimant = NULL;
    this->DebugText = NULL;
    this->Billboard = NULL;
    this->bAutoEnableOnBeginPlay = true;
}

