#include "ORBlinkComponent.h"

void UORBlinkComponent::SetBlinkingDisabled(bool bInIsDisabled) {
}

void UORBlinkComponent::PlayBlink_Implementation() {
}

void UORBlinkComponent::OnTalkingChanged(bool bIsTalking) {
}

void UORBlinkComponent::OnBlinkTimerFinished() {
}

UORBlinkComponent::UORBlinkComponent() {
    this->MinTimeBetweenBlinks = 0.50f;
    this->MaxTimeBetweenBlinks = 2.00f;
    this->bStopBlinksWhenSpeaking = false;
    this->BlinkMontage = NULL;
    this->bIsBlinkingDisabled = false;
}

