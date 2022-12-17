#include "ORGameplayAbility.h"

class AORAIController;

AORAIController* UORGameplayAbility::GetOwningORAIControllerFromActorInfo() const {
    return NULL;
}

AORAIController* UORGameplayAbility::GetOwningORAIController(const FGameplayAbilityActorInfo& ActorInfo) {
    return NULL;
}

UORGameplayAbility::UORGameplayAbility() {
    this->ActivationData = NULL;
    this->DeactivationData = NULL;
    this->bAllowWhileLeftArmActive = true;
    this->bActivateAbilityOnGranted = false;
}

