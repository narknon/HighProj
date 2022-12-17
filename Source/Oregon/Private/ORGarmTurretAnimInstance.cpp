#include "ORGarmTurretAnimInstance.h"

void UORGarmTurretAnimInstance::SetState(EORGarmWeaponState NewState) {
}

void UORGarmTurretAnimInstance::SetDestroyed(bool bInDestroyed) {
}



UORGarmTurretAnimInstance::UORGarmTurretAnimInstance() {
    this->State = EORGarmWeaponState::AimPlayer;
    this->bDestroyed = false;
    this->AimHorizontal = 0.00f;
    this->AimVertical = 0.00f;
}

