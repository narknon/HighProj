#include "ORFireLoop_WeaponAbility.h"

void UORFireLoop_WeaponAbility::ResumeReadiness() {
}

void UORFireLoop_WeaponAbility::HandleItemEvent(TArray<FItemEventData> ActiveItemEvents) {
}

void UORFireLoop_WeaponAbility::FireAbility() {
}

void UORFireLoop_WeaponAbility::FinishBeginPhase() {
}

void UORFireLoop_WeaponAbility::EnableSlow() {
}

void UORFireLoop_WeaponAbility::DisableSlow() {
}

UORFireLoop_WeaponAbility::UORFireLoop_WeaponAbility() {
    this->ParentFireableItem = NULL;
    this->FireStartMontage = NULL;
    this->TapFireMontage = NULL;
    this->HoldLoopMontage = NULL;
    this->HoldFireMontage = NULL;
    this->bUseStartFireMontageTime = false;
    this->FireStartTime = 0.25f;
    this->TapFirePrefireDelay = 0.00f;
    this->HoldFirePrefireDelay = 0.00f;
    this->FireLoopTimeout = 0.50f;
    this->bShouldFire = false;
    this->FireState = EWAFS_Ready;
    this->SlowGEClass = NULL;
}

