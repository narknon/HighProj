#include "OREliteArmorComponent.h"

class UObject;
class USkeletalMeshComponent;
class AORCharacter;

void UOREliteArmorComponent::StartRecharge() {
}

void UOREliteArmorComponent::OnDied(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags) {
}






float UOREliteArmorComponent::MitigateDamage(UObject* Damager, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags) {
    return 0.0f;
}

bool UOREliteArmorComponent::IsRecharging() const {
    return false;
}

void UOREliteArmorComponent::InitArmorMesh(USkeletalMeshComponent* InMesh) {
}

float UOREliteArmorComponent::GetArmorHealthPCT() {
    return 0.0f;
}

float UOREliteArmorComponent::GetArmorDestroyedPCT() {
    return 0.0f;
}

UOREliteArmorComponent::UOREliteArmorComponent() {
    this->PrimaryFireDamageScale = 0.25f;
    this->DamageCapacity = 400.00f;
    this->RechargeTime = 4.00f;
    this->RechargeDelay = 4.00f;
    this->ArmorMesh = NULL;
}

