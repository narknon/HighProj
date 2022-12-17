#include "ORGarmantuousPart2AnimInstance.h"

UORGarmantuousPart2AnimInstance::UORGarmantuousPart2AnimInstance() {
    this->ChargeIntroMontage = NULL;
    this->ChargeLoopingMontage = NULL;
    this->AimRightStartMontage = NULL;
    this->AimRightEndMontage = NULL;
    this->AimLeftStartMontage = NULL;
    this->AimLeftEndMontage = NULL;
    this->AimBothStartMontage = NULL;
    this->AimBothEndMontage = NULL;
    this->bAimRightHand = false;
    this->bAimLeftHand = false;
    this->bAimBothHands = false;
    this->bIsStaggered = false;
    this->bIsStunned = false;
    this->bIsInStatus = false;
    this->bStunRecover = false;
    this->bStunRecoil = false;
    this->CurrentRotationAngularSpeed = 0.00f;
}

