#include "ORGoopArmorComponent.h"

class UObject;
class USkeletalMeshComponent;
class UORDamageHandlerComponent_Character;
class AORHealthTankItem;
class UMaterialInterface;
class UParticleSystem;

void UORGoopArmorComponent::SetDefaultMaterial() {
}

void UORGoopArmorComponent::SetArmorOverrideMaterial(UMaterialInterface* InMaterial, UParticleSystem* InGooDestructionVFX) {
}

void UORGoopArmorComponent::RestoreAllGoop(bool bImmediate, float TimeScale) {
}

void UORGoopArmorComponent::RemoveArmorAt(const FVector& Location, float Radius) {
}

void UORGoopArmorComponent::RemoveArmor(const FHitResult& HitResult) {
}

void UORGoopArmorComponent::OnHealthTankEmptiedListener(UORDamageHandlerComponent_Character* DamageHandler, AORHealthTankItem* HealthTank, float DamageToTank, UObject* Damager, float BaseDamageAmt, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags) {
}

void UORGoopArmorComponent::InitGoopArmor(USkeletalMeshComponent* InMesh) {
}

bool UORGoopArmorComponent::HasArmorAt(const FHitResult& HitResult) {
    return false;
}

bool UORGoopArmorComponent::HasAnyGoopRemaining() {
    return false;
}

float UORGoopArmorComponent::GetScaledRemovalRadius() {
    return 0.0f;
}

void UORGoopArmorComponent::DestroyAllRemainingGoop(bool bImmediate, float TimeScale) {
}

bool UORGoopArmorComponent::ArmorAppliesToHitResult(const FHitResult& HitResult) {
    return false;
}

UORGoopArmorComponent::UORGoopArmorComponent() {
    this->bEnabled = false;
    this->bStartWithGoop = true;
    this->MaterialIndex = 0;
    this->TexCoordIndex = 0;
    this->BaselineArmorRemoveRadius = 15.00f;
    this->MaxArmorRemoveRadius = 75.00f;
    this->ArmorProtectionDamageScale = 0.50f;
    this->GooDestructionVFX = NULL;
    this->WhiteMaskTexture = NULL;
    this->Mesh = NULL;
    this->bAllowArmorRemoval = true;
    this->ArmorMaterial = NULL;
    this->OverrideArmorMaterial = NULL;
    this->OverrideGooDestructionVFX = NULL;
}

