#include "SQInputComponent.h"
#include "SQBindManager.h"

void USQInputComponent::SetNewActionBind_BP(FName ActionName, FKeyCombo NewKeyCombo) {
}

void USQInputComponent::ResetAllKeybinds_BP(TArray<FName> ActionsToReset) {
}

TArray<FInputAxisKeyMapping> USQInputComponent::GetKeysFromAxis(FName AxisName) {
    return TArray<FInputAxisKeyMapping>();
}

TArray<FKeyCombo> USQInputComponent::GetKeyCombosFromAction(FName ActionName) {
    return TArray<FKeyCombo>();
}

TArray<FName> USQInputComponent::GetAllActionBindNames() {
    return TArray<FName>();
}

bool USQInputComponent::ComboContainsMatchingKey(FKeyCombo Combo, FKeyCombo OtherCombo) {
    return false;
}

void USQInputComponent::ActivateAction(FName Action, FKeyCombo Combo) {
}

USQInputComponent::USQInputComponent() {
    this->BindManagerClass = USQBindManager::StaticClass();
    this->BindManager = NULL;
}

