#include "OR3PAnimInstance_Henchman.h"

bool UOR3PAnimInstance_Henchman::CanTriggerHitReacts_Implementation() {
    return false;
}


UOR3PAnimInstance_Henchman::UOR3PAnimInstance_Henchman() {
    this->CachedPawn = NULL;
    this->CachedORAIController = NULL;
    this->CachedDismemberComponent = NULL;
    this->CachedDeformerComponent = NULL;
    this->bIsDead = false;
    this->bIsAlerted = false;
    this->bIsAlwaysAlerted = false;
    this->bIsPanicking = false;
    this->bIsKnockedUp = false;
    this->bIsBeingSuctioned = false;
    this->VacuumScale = 0.00f;
    this->bIsUsingIdleOverride = false;
    this->bIsAiming = false;
    this->bIsAlwaysAiming = false;
    this->bIsGrenadeAiming = false;
    this->bIsTakingCover = false;
    this->bIsDodging = false;
    this->bIsSprinting = false;
    this->CurrentRotationAngularSpeed = 0.00f;
    this->CombatSubstate = EORAICombatBehaviorStates::ECB_Default;
}

