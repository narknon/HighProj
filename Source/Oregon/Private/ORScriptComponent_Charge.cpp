#include "ORScriptComponent_Charge.h"

void UORScriptComponent_Charge::StopCharge() {
}

void UORScriptComponent_Charge::StartCharge() {
}

void UORScriptComponent_Charge::SetChargeLevel(int32 ChargeLevel) {
}

bool UORScriptComponent_Charge::IsMaxChargeLevel() {
    return false;
}

UORScriptComponent_Charge::UORScriptComponent_Charge() {
    this->MinChargeLevel = 1;
    this->MaxChargeLevel = 3;
    this->CurrentChargeLevel = -1;
    this->bIsActive = false;
}

