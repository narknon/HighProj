#include "SQResource_AmmoPool.h"

void USQResource_AmmoPool::GiveBonusRegen(float Amount) {
}

float USQResource_AmmoPool::GetRegenProgress() {
    return 0.0f;
}

void USQResource_AmmoPool::AmmoPoolModified(float Change, float NewValue) {
}

USQResource_AmmoPool::USQResource_AmmoPool() {
    this->InfiniteReserve = false;
    this->bSaveProcessTowardsRegenIfAtFull = false;
    this->ReserveCurrentSize = 0;
    this->CurrentAmmo = 0;
    this->ParentFireableItem = NULL;
    this->bResetRegenOnFire = false;
    this->IgnoreLowAmmo = false;
}

