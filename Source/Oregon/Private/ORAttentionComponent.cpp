#include "ORAttentionComponent.h"

class AActor;

void UORAttentionComponent::SetPointOfInterest(AActor* Actor) {
}

void UORAttentionComponent::SetEnabled(bool bInEnabled) {
}

void UORAttentionComponent::AttemptClearPointOfInterest(AActor* Actor) {
}

UORAttentionComponent::UORAttentionComponent() {
    this->bAlwaysPreferPlayer = false;
    this->bAutoSpeakerAttention = false;
    this->bAutoPlayerAttention = false;
    this->PlayerAttentionRadius = 400.00f;
    this->PlayerAttentionForwardOffset = 150.00f;
    this->SpeakerAttentionRadius = 1000.00f;
    this->SpeakerAttentionForwardOffset = 150.00f;
    this->bEnabled = true;
    this->bPreferPlayerOverLowPrioritySpeaker = false;
    this->AttentionSpeaker = NULL;
    this->bSelfSpeaker = false;
    this->bLowPrioritySpeaker = false;
    this->PointOfInterestActor = NULL;
}

