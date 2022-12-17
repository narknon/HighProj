#include "BTTask_ORActivateAbilityByEvent.h"

class UGameplayAbility;

void UBTTask_ORActivateAbilityByEvent::AbilityEndCallback(UGameplayAbility* Ability) {
}

UBTTask_ORActivateAbilityByEvent::UBTTask_ORActivateAbilityByEvent() {
    this->bFailTaskOnFailedActivation = true;
    this->bBlockingTask = true;
    this->bRecordUsageWithController = true;
    this->bRecordUsageOnlyOnSuccessfulActivation = true;
    this->MyOwnerComp = NULL;
}

