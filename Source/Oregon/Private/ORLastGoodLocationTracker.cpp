#include "ORLastGoodLocationTracker.h"

class AActor;

void UORLastGoodLocationTracker::SetLastGoodLocation(AActor* LocationTracker) {
}

void UORLastGoodLocationTracker::SetDisabledForRespawn(bool bDisabled) {
}

void UORLastGoodLocationTracker::SetDisabledForGameplay(bool bDisabled) {
}

void UORLastGoodLocationTracker::ResetLastGoodKnownLocation() {
}

void UORLastGoodLocationTracker::OnTookDamage() {
}

void UORLastGoodLocationTracker::OnCheckpointChanged(const FVector& CheckpointLocation) {
}

bool UORLastGoodLocationTracker::GetLastGoodLocation(FVector& OutLocation, FRotator& OutRotation) {
    return false;
}

UORLastGoodLocationTracker::UORLastGoodLocationTracker() {
    this->TraceCooldown = 3.00f;
    this->EdgeSafeDistance = 50.00f;
    this->DamageTakenCooldown = 3.00f;
    this->OverlapTraceChannel = ECC_WorldStatic;
    this->GroundTraceChannel = ECC_WorldStatic;
}

