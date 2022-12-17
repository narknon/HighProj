#include "ORFiringResult_Melee.h"

class UORGlobalEventPayload;

void UORFiringResult_Melee::OnMeleeAttack(const UORGlobalEventPayload* EventData) {
}

void UORFiringResult_Melee::MeleeAttackType(FGameplayTag MeleeType) {
}

UORFiringResult_Melee::UORFiringResult_Melee() {
    this->FinisherKnockbackForce = 0.00f;
    this->CharacterHitFreezeTime = 0.08f;
    this->ProjectileHitFreezeTime = 0.08f;
    this->StaticObjectImpactResult = NULL;
}

