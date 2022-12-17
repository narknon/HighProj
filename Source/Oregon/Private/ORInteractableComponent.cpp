#include "ORInteractableComponent.h"

class AActor;
class AORCharacter;
class UCapsuleComponent;

bool UORInteractableComponent::TargetWithinInteractionDist(UCapsuleComponent* TargetCollisionCapsule, FVector TargetLocation) {
    return false;
}

bool UORInteractableComponent::TargetWithinDist(UCapsuleComponent* TargetCollisionCapsule, FVector TargetLocation, bool bInteractionDist) {
    return false;
}

bool UORInteractableComponent::TargetWithinCloseDist(UCapsuleComponent* TargetCollisionCapsule, FVector TargetLocation) {
    return false;
}

bool UORInteractableComponent::ShouldShowInteractWidget(FVector TargetLocation) {
    return false;
}

bool UORInteractableComponent::ShouldRestrictByEyeVector(AORCharacter* InteractionCharacter, FVector EyeVector) {
    return false;
}

bool UORInteractableComponent::ShouldCancelFiringOnInteract() {
    return false;
}

void UORInteractableComponent::SetInteractableLocation(const FVector& Location) {
}

void UORInteractableComponent::OverlapEnd(AActor* OtherActor, int32 VolumeIndex) {
}

void UORInteractableComponent::OverlapBegin(AActor* OtherActor, int32 VolumeIndex) {
}

FVector UORInteractableComponent::GetWidgetLocation() {
    return FVector{};
}

FVector UORInteractableComponent::GetTargetSocketLocation(AORCharacter* InteractionCharacter) {
    return FVector{};
}

FVector UORInteractableComponent::GetSocketLocation(AORCharacter* InteractionCharacter, FName SocketName) {
    return FVector{};
}

FGameplayTag UORInteractableComponent::GetRequiredInteractCapability() {
    return FGameplayTag{};
}

FVector UORInteractableComponent::GetInteractableLocation(AORCharacter* InteractionCharacter, bool bIgnoreOffset) {
    return FVector{};
}

UORInteractableComponent::UORInteractableComponent() {
    this->bIgnoreOwnerDuringRankingTrace = true;
    this->IsAIOnly = false;
    this->InteractorResult = NULL;
    this->InteractionPercentage = 1.00f;
    this->CloseDistancePercentage = 1.00f;
    this->InteractionAngle = 0.71f;
    this->OuterInteractionAngle = -1.00f;
    this->WidgetType = EPWT_Interaction;
}

