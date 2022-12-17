#include "ORFireLoop_CreatureMinionFire.h"
#include "Templates/SubclassOf.h"

class ASQProjectile;

TSubclassOf<ASQProjectile> UORFireLoop_CreatureMinionFire::GetProjectileType() const {
    return NULL;
}

float UORFireLoop_CreatureMinionFire::GetLaunchSpeed() const {
    return 0.0f;
}

FRotator UORFireLoop_CreatureMinionFire::GetFiringRotationOffset() const {
    return FRotator{};
}

float UORFireLoop_CreatureMinionFire::GetChargeSpeedMod() const {
    return 0.0f;
}

UORFireLoop_CreatureMinionFire::UORFireLoop_CreatureMinionFire() {
    this->CreatureWeaponItem = NULL;
    this->MyFiringResult = NULL;
    this->ChargeByTickSC = NULL;
    this->PreviewSC = NULL;
    this->ChargeLaunchSpeedCurve = NULL;
    this->ChargeRotationOffsetCurve = NULL;
}

