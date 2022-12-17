#include "STPossessableComponent.h"

void USTPossessableComponent::SetSpeakerTag(const FGameplayTag& InSpeakerTag) {
}

void USTPossessableComponent::SetIsTalking(bool bInIsTalking) {
}

void USTPossessableComponent::SetIsInActiveSequence(bool bInIsInActiveSequence) {
}

bool USTPossessableComponent::IsTalking() const {
    return false;
}

bool USTPossessableComponent::IsInActiveSequence() const {
    return false;
}

void USTPossessableComponent::Interrupt() {
}

FGameplayTag USTPossessableComponent::GetSpeakerTag() const {
    return FGameplayTag{};
}

FName USTPossessableComponent::GetCurrentSequenceName() const {
    return NAME_None;
}

FString USTPossessableComponent::GetCurrentPhoneme() const {
    return TEXT("");
}

USTPossessableComponent::USTPossessableComponent() {
    this->bSubtitleExempt = false;
    this->bIsProxy = false;
    this->bIsInActiveSequence = false;
    this->bIsTalking = false;
    this->TimeLeftInAkEvent = 0.00f;
}

