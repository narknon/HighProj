#include "ORAIWeaponizedCharacter.h"

void AORAIWeaponizedCharacter::KnockupGameplayTagNewOrRemovedCallback(const FGameplayTag Tag, int32 NewCount) {
}

void AORAIWeaponizedCharacter::HandleWeakpointVFX_Implementation(const FGameplayTagContainer& TagContainer, const FHitResult& Hit) {
}

void AORAIWeaponizedCharacter::DisableSkelmeshTick() {
}

void AORAIWeaponizedCharacter::DisableSkelmeshPhysics() {
}

AORAIWeaponizedCharacter::AORAIWeaponizedCharacter() {
    this->UsePlayerHealthAimModifier = true;
    this->PlayerHealthAimModifierCurve = NULL;
    this->UseShooterOffPlayerScreenAimModifier = true;
    this->ShooterOffPlayerScreenAimModifier = 2.00f;
    this->CanSpeakWithHeadshotDeath = false;
    this->PostDeathSleepDelay = -1.00f;
    this->MouthComponent = NULL;
    this->DismemberComponent = NULL;
    this->DeathAkEvent = NULL;
    this->FreeFromGooEvent = NULL;
    this->bUseKnockupRagdolling = false;
    this->KnockupRagdollBoneName = TEXT("spine_01_JNT");
    this->HeadshotFX = NULL;
    this->DamageCritical = -35.00f;
    this->FriendlyFireDamageModifier = 0.50f;
    this->VulnerabilitySocketName = TEXT("Head_JNT");
    this->bTrackRagdollAfterDeath = true;
    this->HitReactDpsSecondsInPastToCheck = 1.00f;
    this->SmallHitReactOneSecondDpsThreshold = 50.00f;
    this->MediumHitReactOneSecondDpsThreshold = 100.00f;
}

