#include "ORAIScriptCommand_StandAndShoot.h"

class UGameplayAbility;

void UORAIScriptCommand_StandAndShoot::AbilityEndCallback(UGameplayAbility* Ability) {
}

UORAIScriptCommand_StandAndShoot::UORAIScriptCommand_StandAndShoot() {
    this->Lifetime = 0.00f;
    this->bAbilityIsCurrentlyActive = false;
}

