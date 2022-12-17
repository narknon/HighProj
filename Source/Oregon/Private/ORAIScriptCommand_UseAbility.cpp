#include "ORAIScriptCommand_UseAbility.h"

class UGameplayAbility;

void UORAIScriptCommand_UseAbility::HandleTimeout() {
}

void UORAIScriptCommand_UseAbility::HandleAbilityEnded(UGameplayAbility* Ability) {
}

UORAIScriptCommand_UseAbility::UORAIScriptCommand_UseAbility() {
    this->AbilityClass = NULL;
    this->AutomaticTimeout = -1.00f;
}

