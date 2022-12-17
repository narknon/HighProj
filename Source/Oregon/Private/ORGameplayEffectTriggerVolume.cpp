#include "ORGameplayEffectTriggerVolume.h"

class AActor;

void AORGameplayEffectTriggerVolume::RemoveEffects(AActor* Target) {
}

void AORGameplayEffectTriggerVolume::AddEffects(AActor* Target) {
}

AORGameplayEffectTriggerVolume::AORGameplayEffectTriggerVolume() {
    this->GameplayEffect = NULL;
    this->GameplayEffectLevel = 0.00f;
}

