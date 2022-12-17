#include "SquanchMouthComponent.h"

class UAnimMontage;

void USquanchMouthComponent::MarkLastVisemeUpdate(SquanchMouthViseme Vis) {
}

TMap<SquanchMouthViseme, UAnimMontage*> USquanchMouthComponent::GetVisemeMapForEmotion(EEmotionState Emotion) {
    return TMap<SquanchMouthViseme, UAnimMontage*>();
}

float USquanchMouthComponent::GetTimeSinceLastVisemeUpdate() {
    return 0.0f;
}

SquanchMouthViseme USquanchMouthComponent::GetLastViseme() {
    return SquanchMouthViseme::VIS_SIL;
}

USquanchMouthComponent::USquanchMouthComponent() {
    this->bSimplifyVisemeMapping = true;
    this->DefaultMinimumExposureTime = 0.07f;
    this->LastVisemeUpdateTime = 0.00f;
    this->LastViseme = SquanchMouthViseme::VIS_SIL;
}

