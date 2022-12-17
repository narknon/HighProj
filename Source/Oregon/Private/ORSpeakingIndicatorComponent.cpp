#include "ORSpeakingIndicatorComponent.h"

class UMaterialBillboardComponent;

void UORSpeakingIndicatorComponent::SetIndicatorIcon(UMaterialBillboardComponent* NewSpeakingIndicatorIcon) {
}

void UORSpeakingIndicatorComponent::SetEnabled(bool bEnable) {
}

UORSpeakingIndicatorComponent::UORSpeakingIndicatorComponent() {
    this->CachedPossessableComponent = NULL;
    this->CachedVocalizationComponent = NULL;
    this->bEnabled = true;
    this->SpeakingIndicatorIcon = NULL;
}

