#include "ORRadialAimSensitivityHandler.h"

void UORRadialAimSensitivityHandler::TransformStateChanged(TEnumAsByte<ETransformState> NewState) {
}

void UORRadialAimSensitivityHandler::EquippedItemChanged(FGameplayTag ItemTag) {
}

UORRadialAimSensitivityHandler::UORRadialAimSensitivityHandler() {
    this->PitchSensitivityCurve = NULL;
    this->YawSensitivityCurve = NULL;
    this->RadialDeadzone = 0.05f;
    this->AxialDeadzoneX = 0.02f;
    this->AxialDeadzoneY = 0.02f;
    this->AccelerationThreshold = 0.95f;
    this->AccelerationTimeCurve = NULL;
    this->PitchAccelerationCurve = NULL;
    this->YawAccelerationCurve = NULL;
    this->ItemPitchSensitivityMod = NULL;
    this->ItemYawSensitivityMod = NULL;
}

