#include "ORScriptComponent_ChargeByTick.h"

void UORScriptComponent_ChargeByTick::Tick(float DeltaTime) {
}

float UORScriptComponent_ChargeByTick::GetFullChargePercent() const {
    return 0.0f;
}

UORScriptComponent_ChargeByTick::UORScriptComponent_ChargeByTick() {
    this->ChargeDurationPerLevel = 1.00f;
    this->ChargeDuration = 0.00f;
}

