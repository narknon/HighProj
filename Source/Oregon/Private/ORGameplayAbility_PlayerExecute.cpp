#include "ORGameplayAbility_PlayerExecute.h"

class UGameplayAbility;

void UORGameplayAbility_PlayerExecute::UpdatePlayerExecuteLerpTransform() {
}

void UORGameplayAbility_PlayerExecute::OnTargetAbilityEnded(UGameplayAbility* Ability) {
}



UORGameplayAbility_PlayerExecute::UORGameplayAbility_PlayerExecute() {
    this->MeleeTweenDetails = NULL;
    this->PlayerCollisionCheckRadius = -1.00f;
    this->HeightOffsetThresholdTolerance = 10.00f;
    this->ExecuteHealthThreshold = 0.50f;
}

