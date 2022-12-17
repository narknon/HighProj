#include "ORGameplayAbility_GoopHealProj.h"

void UORGameplayAbility_GoopHealProj::SuctionStopped() {
}

void UORGameplayAbility_GoopHealProj::RipGoopOffCallback() {
}

UORGameplayAbility_GoopHealProj::UORGameplayAbility_GoopHealProj() {
    this->ProjectileClass = NULL;
    this->MeleeMerkProjectileClass = NULL;
    this->GooDestructionVFX = NULL;
    this->HitActor = NULL;
    this->ArmorRemovalRadius = 100.00f;
}

