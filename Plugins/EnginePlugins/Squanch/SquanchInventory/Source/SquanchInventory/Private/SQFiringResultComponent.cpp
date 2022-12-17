#include "SQFiringResultComponent.h"

class UItemImpactResult;

void USQFiringResultComponent::UseResource_Implementation(int32 Stacks) {
}

void USQFiringResultComponent::TriggerFiringResult_Implementation() {
}

void USQFiringResultComponent::SetFiringSpreadPenalty(float SpreadFloat) {
}

UItemImpactResult* USQFiringResultComponent::GetImpactResult() {
    return NULL;
}

FTransform USQFiringResultComponent::GetFiringTransform() {
    return FTransform{};
}

float USQFiringResultComponent::GetFiringSpreadPenalty_Implementation() {
    return 0.0f;
}

float USQFiringResultComponent::GetFiringSpreadMod() {
    return 0.0f;
}

float USQFiringResultComponent::GetFalloffMinDistance_Implementation() {
    return 0.0f;
}

float USQFiringResultComponent::GetFalloffMaxDistance_Implementation() {
    return 0.0f;
}

FVector USQFiringResultComponent::GetAimLocation_Implementation(bool bUseAimCorrections) {
    return FVector{};
}

void USQFiringResultComponent::ApplyRecoilKick() {
}

void USQFiringResultComponent::ApplyFiringSpread() {
}

void USQFiringResultComponent::ApplyFiringFX() {
}

USQFiringResultComponent::USQFiringResultComponent() {
    this->ResourceCost = 1;
    this->Loudness = 1.00f;
    this->MaxRange = 3000.00f;
    this->FiringSpread = NULL;
    this->KickCurve = NULL;
    this->ReticleRecoilCurve = NULL;
    this->CameraShake = NULL;
    this->FalloffEffectCurve = NULL;
}

