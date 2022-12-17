#include "ORPlayerInputComponent.h"

void UORPlayerInputComponent::SetMouseSensitivity(float NewSensitivity) {
}

void UORPlayerInputComponent::SetGamepadSensitivity(float NewSensitivity) {
}

void UORPlayerInputComponent::MouseSensitivityChanged(float NewMouseSensitivity) {
}

void UORPlayerInputComponent::MouseADSSensitivityChanged(float NewMouseSensitivity) {
}

void UORPlayerInputComponent::InvertMouseYChanged(bool bNewInvertY) {
}

void UORPlayerInputComponent::InvertGamepadYChanged(bool bNewInvertY) {
}

void UORPlayerInputComponent::InvertCameraAxes(bool bInvert) {
}

bool UORPlayerInputComponent::GetActionIsHeld(FName ActionName) {
    return false;
}

void UORPlayerInputComponent::GamepadSensitivityChanged(float NewGamepadSensitivity) {
}

void UORPlayerInputComponent::GamepadADSSensitivityChanged(float NewGamepadSensitivity) {
}

UORPlayerInputComponent::UORPlayerInputComponent() {
    this->bAbilityFiringEnabled = true;
    this->bMovementEnabled = true;
    this->bSwapInputDirections = false;
    this->CurrentDeviceType = EIDT_KeyboardMouse;
    this->RadialAimAssistHandler = NULL;
    this->RadialAimSensitivityHandler = NULL;
    this->NarrativeAimHandler = NULL;
    this->NarrativeFollowHandler = NULL;
    this->RingStartIdx = 0;
    this->RingEndIdx = 0;
    this->bAllowMovementInput = true;
    this->bAllowCameraInput = true;
    this->MouseSensitivity = 1.00f;
    this->GamepadSensitivity = 1.00f;
    this->bCameraFocused = false;
}

