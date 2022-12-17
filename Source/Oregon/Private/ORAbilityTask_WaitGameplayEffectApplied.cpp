#include "ORAbilityTask_WaitGameplayEffectApplied.h"

class UAbilitySystemComponent;
class UORAbilityTask_WaitGameplayEffectApplied;

UORAbilityTask_WaitGameplayEffectApplied* UORAbilityTask_WaitGameplayEffectApplied::ListenForGameplayEffectApplied(UAbilitySystemComponent* AbilitySystemComponent, FGameplayTagRequirements GameplayTagRequirements) {
    return NULL;
}

void UORAbilityTask_WaitGameplayEffectApplied::EndTask() {
}

UORAbilityTask_WaitGameplayEffectApplied::UORAbilityTask_WaitGameplayEffectApplied() {
    this->ASC = NULL;
}

