#include "BTService_ORTryAttackMainTarget.h"

class UGameplayAbility;

void UBTService_ORTryAttackMainTarget::AbilityEndCallback(UGameplayAbility* Ability) {
}

UBTService_ORTryAttackMainTarget::UBTService_ORTryAttackMainTarget() {
    this->RecordUsageSetting = EORAIRecordCharacterAbilityUsage::SuccessfulActivation;
    this->InitialCooldown = 0.00f;
    this->bAbilityIsCurrentlyActive = false;
    this->Cooldown = 0.00f;
    this->MyOwnerComp = NULL;
}

