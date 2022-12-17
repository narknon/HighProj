#include "ORGameplayAbility_SweezyCharge.h"

class AActor;
class UAbilitySystemComponent;
class UORGlobalEventPayload;

void UORGameplayAbility_SweezyCharge::UpdateBeams() {
}

void UORGameplayAbility_SweezyCharge::TriggerExplosion(AActor* SourceActor) {
}

void UORGameplayAbility_SweezyCharge::OnHitReceived(AActor* SourceActor) {
}

void UORGameplayAbility_SweezyCharge::OnConnectionRemovedEventReceived(const UORGlobalEventPayload* EventData) {
}

void UORGameplayAbility_SweezyCharge::OnConnectionEventReceived(const UORGlobalEventPayload* EventData) {
}

void UORGameplayAbility_SweezyCharge::OnApplyGameplayEffectCallback(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle) {
}

UORGameplayAbility_SweezyCharge::UORGameplayAbility_SweezyCharge() {
    this->DamageEffectClass = NULL;
    this->ExplosionEffectClass = NULL;
    this->StunEffectClass = NULL;
    this->ProjectileStackEffectClass = NULL;
    this->TargetDetectionEffectClass = NULL;
    this->ClaimedConnectionEffectClass = NULL;
    this->RadiusIncreasePerStack = 50.00f;
    this->ParticleIncreasePerStack = 0.05f;
    this->ExplosionParticleClass = NULL;
    this->ExplosionArcParticleClass = NULL;
    this->NiagraElectricConnection = NULL;
    this->NiagraElectricCharge = NULL;
    this->NiagraStuckProjectile = NULL;
    this->UpdateBeamRate = 1.00f;
    this->StackRequirementForConnection = 3;
    this->FXMaxStack = 5;
}

