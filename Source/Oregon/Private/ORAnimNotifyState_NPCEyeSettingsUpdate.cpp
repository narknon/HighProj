#include "ORAnimNotifyState_NPCEyeSettingsUpdate.h"

UORAnimNotifyState_NPCEyeSettingsUpdate::UORAnimNotifyState_NPCEyeSettingsUpdate() {
    this->bEyeDiversionEnabled = true;
    this->BlinkDelay = 4.00f;
    this->BlinkDelayDeviation = 4.00f;
    this->DivertFrequency = 2.00f;
    this->MaxDivertAngle = 25.00f;
    this->DivertFrequencyDeviation = 2.00f;
}

