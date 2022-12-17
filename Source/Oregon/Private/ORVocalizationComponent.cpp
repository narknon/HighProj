#include "ORVocalizationComponent.h"

void UORVocalizationComponent::OnAudioPosted(int32 PlayingID) {
}

void UORVocalizationComponent::OnAudioEnded(int32 PlayingID) {
}

bool UORVocalizationComponent::IsVocalizing() const {
    return false;
}

UORVocalizationComponent::UORVocalizationComponent() {
    this->ExtraAttentionRadius = 0.00f;
    this->bLowPrioritySpeaker = false;
    this->CachedComponent = NULL;
    this->bIsVocalizing = false;
    this->bIsPlayerWeaponVocalizing = false;
}

