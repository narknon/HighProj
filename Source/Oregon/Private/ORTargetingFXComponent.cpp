#include "ORTargetingFXComponent.h"

void UORTargetingFXComponent::SetEnabled(bool bInEnabled) {
}

void UORTargetingFXComponent::SetChargePCT(float InChargePCT) {
}

UORTargetingFXComponent::UORTargetingFXComponent() {
    this->TraceChannel = ECC_WorldStatic;
    this->BeamEffectsComponent = NULL;
    this->BeamEffectsEmitterIndex = 0;
    this->BeamEffectsSourceIndex = 0;
    this->BeamEffectsTargetIndex = 0;
    this->LightComponent = NULL;
    this->GlintBillboardComponent = NULL;
    this->bAttachToPlayer = true;
}

