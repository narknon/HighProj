#include "ORFireLoop_CreatureMindControl.h"
#include "Templates/SubclassOf.h"

class ASQProjectile;

TSubclassOf<ASQProjectile> UORFireLoop_CreatureMindControl::GetProjectileType() const {
    return NULL;
}

float UORFireLoop_CreatureMindControl::GetLaunchSpeed() const {
    return 0.0f;
}

FRotator UORFireLoop_CreatureMindControl::GetFiringRotationOffset() const {
    return FRotator{};
}

float UORFireLoop_CreatureMindControl::GetChargeSpeedMod() const {
    return 0.0f;
}

UORFireLoop_CreatureMindControl::UORFireLoop_CreatureMindControl() {
    this->CreatureWeaponItem = NULL;
    this->MyFiringResult = NULL;
    this->ChargeByTickSC = NULL;
    this->PreviewSC = NULL;
    this->ChargeLaunchSpeedCurve = NULL;
    this->ChargeRotationOffsetCurve = NULL;
}

