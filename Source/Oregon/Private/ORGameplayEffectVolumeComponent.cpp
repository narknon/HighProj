#include "ORGameplayEffectVolumeComponent.h"

class AActor;

void UORGameplayEffectVolumeComponent::HandleLeft(AActor* Actor, int32 VolumeIndex) {
}

void UORGameplayEffectVolumeComponent::HandleEntered(AActor* Actor, int32 VolumeIndex) {
}

UORGameplayEffectVolumeComponent::UORGameplayEffectVolumeComponent() {
    this->GameplayEffect = NULL;
    this->GameplayEffectLevel = 0.00f;
    this->bDontApplyToPlayer = false;
}

