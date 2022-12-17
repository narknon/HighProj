#include "ORBaseGarmantuousPart2Character.h"

class AActor;

void AORBaseGarmantuousPart2Character::TriggerStun(AActor* Damager, const FHitResult& HitResult) {
}

void AORBaseGarmantuousPart2Character::TriggerStagger(AActor* Damager, const FHitResult& HitResult) {
}

bool AORBaseGarmantuousPart2Character::ShouldContinueStun() {
    return false;
}





AORBaseGarmantuousPart2CharacterStunResult AORBaseGarmantuousPart2Character::GetStunExpiredResult() {
    return AORBaseGarmantuousPart2CharacterStunResult::None;
}

void AORBaseGarmantuousPart2Character::EndStun(AORBaseGarmantuousPart2CharacterStunResult Result) {
}

void AORBaseGarmantuousPart2Character::EndStagger() {
}

void AORBaseGarmantuousPart2Character::DeactivateSlideGunk() {
}


void AORBaseGarmantuousPart2Character::ActivateSlideGunk() {
}



AORBaseGarmantuousPart2Character::AORBaseGarmantuousPart2Character() {
    this->DamageMitigationIfNotStunned = 0.25f;
    this->BonusStunDamageScale = 1.50f;
    this->StaggerGameplayEffect = NULL;
    this->StunGameplayEffect = NULL;
    this->DefaultFireVFX = NULL;
    this->DefaultFireSFX = NULL;
    this->ActiveChargeArea = NULL;
    this->bSlideGunkActivated = false;
    this->bDeactivateSlideGunkWhenStationary = false;
    this->bIsStaggered = false;
    this->bIsStunned = false;
    this->StunResult = AORBaseGarmantuousPart2CharacterStunResult::None;
    this->bIsTaunting = false;
    this->SpinOutVelocity = 1000.00f;
    this->SpeedToRotationFactor = 0.05f;
    this->StunRotationDirection = 0.00f;
    this->StaggerDamage = 0.00f;
    this->StaggerDamageThreshold = 100.00f;
    this->StunWeakpointDamage = 0.00f;
    this->StunWeakpointDamageThreshold = 150.00f;
}

