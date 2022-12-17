#include "ORFireLoop_EnemyBase.h"

void UORFireLoop_EnemyBase::StopCleanFireChargeUpFx_Implementation() {
}

void UORFireLoop_EnemyBase::PlayFireChargeUpFx_Implementation() {
}

float UORFireLoop_EnemyBase::GetPCTProgressTowardsNextFire() const {
    return 0.0f;
}

UORFireLoop_EnemyBase::UORFireLoop_EnemyBase() {
    this->bCanCancelFireLoopOnEndFire = false;
    this->TargetVelocityLookBackTime = 0.50f;
    this->RandomOffsetTargetRadiusScale = 2.00f;
}

