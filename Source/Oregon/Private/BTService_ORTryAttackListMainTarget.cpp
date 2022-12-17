#include "BTService_ORTryAttackListMainTarget.h"

class UGameplayAbility;

void UBTService_ORTryAttackListMainTarget::AbilityEndCallback(UGameplayAbility* Ability) {
}

UBTService_ORTryAttackListMainTarget::UBTService_ORTryAttackListMainTarget() {
    this->RecordUsageSetting = EORAIRecordCharacterAbilityUsage::SuccessfulActivation;
    this->bAbilityIsCurrentlyActive = false;
    this->MyOwnerComp = NULL;
}

