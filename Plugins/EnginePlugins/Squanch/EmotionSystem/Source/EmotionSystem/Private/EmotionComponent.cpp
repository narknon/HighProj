#include "EmotionComponent.h"

class UAnimSequence;

void UEmotionComponent::SetDefaultEmotion(EEmotionState NewEmotion) {
}

void UEmotionComponent::SetCurrentEmotion(EEmotionState NewEmotion) {
}

bool UEmotionComponent::IsDefaultEmotionOverridden() const {
    return false;
}

EEmotionState UEmotionComponent::GetEmotionEnumByEmoji(const FString& EmoticonString) {
    return EEmotionState::Happy;
}

UAnimSequence* UEmotionComponent::GetEmotionAnim(EEmotionState Emotion) {
    return NULL;
}

EEmotionState UEmotionComponent::GetDefaultEmotion() const {
    return EEmotionState::Happy;
}

EEmotionState UEmotionComponent::GetCurrentEmotion() const {
    return EEmotionState::Happy;
}

void UEmotionComponent::ClearCurrentEmotion() {
}

UEmotionComponent::UEmotionComponent() {
    this->HappyEmotionAnim = NULL;
    this->SarcasticEmotionAnim = NULL;
    this->ExcitedEmotionAnim = NULL;
    this->WickedEmotionAnim = NULL;
    this->NeutralEmotionAnim = NULL;
    this->ConfusedEmotionAnim = NULL;
    this->DeterminedEmotionAnim = NULL;
    this->SurprisedEmotionAnim = NULL;
    this->SadEmotionAnim = NULL;
    this->AngryEmotionAnim = NULL;
    this->AfraidEmotionAnim = NULL;
    this->DisgustedEmotionAnim = NULL;
    this->ExhaustedEmotionAnim = NULL;
    this->CurrentEmotion = EEmotionState::Neutral;
    this->DefaultEmotion = EEmotionState::Neutral;
}

