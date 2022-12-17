#include "BTTask_ORActivateAICharAbility.h"

class UGameplayAbility;

void UBTTask_ORActivateAICharAbility::AbilityEndCallback(UGameplayAbility* Ability) {
}

UBTTask_ORActivateAICharAbility::UBTTask_ORActivateAICharAbility() {
    this->bFailTaskOnFailedActivation = true;
    this->bBlockingTask = true;
    this->bRecordUsageWithController = true;
    this->bRecordUsageOnlyOnSuccessfulActivation = true;
    this->MyOwnerComp = NULL;
}

