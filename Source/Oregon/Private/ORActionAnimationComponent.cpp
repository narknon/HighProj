#include "ORActionAnimationComponent.h"

class UAnimationAsset;

void UORActionAnimationComponent::SetActionAnimations(const FName& ActionName, const FActionAnimationData& Animations) {
}

float UORActionAnimationComponent::PlayNextActionAnimation(const FName& ActionName) {
    return 0.0f;
}

float UORActionAnimationComponent::PlayActionAnimation(const FName& ActionName, int32 AnimIndex) {
    return 0.0f;
}

UAnimationAsset* UORActionAnimationComponent::GetNextActionAnimation(const FName& ActionName) {
    return NULL;
}

UAnimationAsset* UORActionAnimationComponent::GetActionAnimation(const FName& ActionName, int32 AnimIndex) {
    return NULL;
}

UORActionAnimationComponent::UORActionAnimationComponent() {
}

