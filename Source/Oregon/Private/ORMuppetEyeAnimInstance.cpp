#include "ORMuppetEyeAnimInstance.h"

void UORMuppetEyeAnimInstance::OnEyesDivertedEvent(float Yaw, float Pitch) {
}

void UORMuppetEyeAnimInstance::OnBlinkEvent() {
}

void UORMuppetEyeAnimInstance::OnBlinkEnded() {
}

UORMuppetEyeAnimInstance::UORMuppetEyeAnimInstance() {
    this->AdjacentAnimInstance = NULL;
    this->bHasLookAt = false;
    this->bHasDied = false;
    this->bShouldBlink = false;
    this->EyeRotationAlpha = 0.00f;
}

