#include "BTTask_ORActivateAbilityOnPawn.h"

class UGameplayAbility;

void UBTTask_ORActivateAbilityOnPawn::AbilityEndCallback(UGameplayAbility* Ability) {
}

UBTTask_ORActivateAbilityOnPawn::UBTTask_ORActivateAbilityOnPawn() {
    this->MyOwnerComp = NULL;
    this->AbilityClassReference = NULL;
    this->bBlockingTask = true;
}

