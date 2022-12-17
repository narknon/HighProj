#include "ORGameplayAbility_HeavyArmor.h"

class UObject;
class AORCharacter;
class UORDamageHandlerComponent_Character;
class AORHealthTankItem;

void UORGameplayAbility_HeavyArmor::OnHeavyArmorTookDamage_Implementation(float HeavyArmorTankHealth, UObject* Damager, AORCharacter* Damaged, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags) {
}

void UORGameplayAbility_HeavyArmor::OnHeavyArmorRestored_Implementation() {
}

void UORGameplayAbility_HeavyArmor::OnHeavyArmorDestroyed_Implementation() {
}

void UORGameplayAbility_HeavyArmor::OnHealthTankEmptiedListener(UORDamageHandlerComponent_Character* DamageHandler, AORHealthTankItem* HealthTank, float DamageToTank, UObject* Damager, float BaseDamageAmt, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags) {
}

void UORGameplayAbility_HeavyArmor::OnHealthTankChangedListener(UObject* Damager, AORCharacter* Damaged, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags) {
}

float UORGameplayAbility_HeavyArmor::GetHeavyArmorTankHealthMax() {
    return 0.0f;
}

float UORGameplayAbility_HeavyArmor::GetHeavyArmorTankHealth() {
    return 0.0f;
}

void UORGameplayAbility_HeavyArmor::AICharacterSpawnedFromPool(AORCharacter* SpawnedCharacter) {
}

UORGameplayAbility_HeavyArmor::UORGameplayAbility_HeavyArmor() {
    this->bHideArmorMeshes = false;
}

