#include "ORFiringResult_LezduitPrimary.h"

void UORFiringResult_LezduitPrimary::SetCameraKickScale(float NewCameraKickScale) {
}

void UORFiringResult_LezduitPrimary::ApplyChargeCompletedRecoilKick() {
}

UORFiringResult_LezduitPrimary::UORFiringResult_LezduitPrimary() {
    this->ChargeCompletedKickCurve = NULL;
    this->ChargeCompletedReticleRecoilCurve = NULL;
    this->ChargeCompletedCameraShake = NULL;
}

