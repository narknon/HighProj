#include "ORAnimNotifyState_MeleeAttack.h"

UORAnimNotifyState_MeleeAttack::UORAnimNotifyState_MeleeAttack() {
    this->TraceChannel = ECC_WorldStatic;
    this->bUseSweepTests = false;
    this->SweepRadius = 0.00f;
}

