#include "ORPlayerCameraManager.h"

class AActor;
class UMaterialInstance;
class UCurveFloat;
class UMaterialInstanceDynamic;

void AORPlayerCameraManager::UnsetOutlinePostProcess() {
}

void AORPlayerCameraManager::SetPreventPossessionBlend(bool bPreventBlend) {
}

void AORPlayerCameraManager::SetPreventCameraShakes(bool bPreventShakes) {
}

void AORPlayerCameraManager::SetOutlinePostProcess() {
}

void AORPlayerCameraManager::SetArmsFollowCamera(bool bFollowCamera) {
}

void AORPlayerCameraManager::RemovePostEffectsOfType(UMaterialInstance* Material) {
}

void AORPlayerCameraManager::RemovePostEffectMaterial(UMaterialInstance* Material) {
}

void AORPlayerCameraManager::PossessionBlendComplete() {
}

bool AORPlayerCameraManager::HasActiveCameraAnimation() {
    return false;
}

void AORPlayerCameraManager::FadeOut() {
}

void AORPlayerCameraManager::FadeIn() {
}

UMaterialInstanceDynamic* AORPlayerCameraManager::CreatePostEffectMaterial(UMaterialInstance* Material) {
    return NULL;
}

void AORPlayerCameraManager::AddTeleportEffect() {
}

void AORPlayerCameraManager::AddPostEffectMaterial(UMaterialInstance* Material) {
}

UMaterialInstanceDynamic* AORPlayerCameraManager::AddPostEffect(UMaterialInstance* Material, FName MaterialPropertyName, float Lifetime, UCurveFloat* Curve) {
    return NULL;
}

void AORPlayerCameraManager::AddFogEffect(float Distance, const FLinearColor& Color) {
}

void AORPlayerCameraManager::AddDamageIndicator(AActor* SourceActor, bool bIsArmorDamage) {
}

AORPlayerCameraManager::AORPlayerCameraManager() {
    this->PossessionChangeTime = 0.50f;
    this->PossessionChangeExponent = 2.00f;
    this->FadeEffectMaterial = NULL;
    this->FadeEffectDM = NULL;
    this->FadeTime = 1.00f;
    this->LowHealthIndicatorMaterial = NULL;
    this->LowHealthIndicatorDM = NULL;
    this->LowHealthThresholdPercentage = 0.50f;
    this->DamageIndicatorMaterial = NULL;
    this->ArmorDamageIndicatorMaterial = NULL;
    this->TeleportEffectMaterial = NULL;
    this->TeleportEffectDM = NULL;
    this->TeleportEffectEasingDuration = 1.20f;
    this->FogEffectMaterial = NULL;
    this->FogEffectDM = NULL;
    this->InBubblePostEffect = NULL;
    this->OutlinePostProcessMaterial = NULL;
}

