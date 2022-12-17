#include "ORXenoslaughterSubsystem.h"

class UObject;
class AActor;
class AORCharacter;
class UMaterialInterface;

void UORXenoslaughterSubsystem::UnloadXenoslaughter() {
}

void UORXenoslaughterSubsystem::ResetXenoslaughter() {
}

void UORXenoslaughterSubsystem::OwnerDiedEventFired(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags) {
}

void UORXenoslaughterSubsystem::LoadXenoslaughter(AActor* XenoslaughterMachine) {
}

bool UORXenoslaughterSubsystem::IsActive() {
    return false;
}

UMaterialInterface* UORXenoslaughterSubsystem::GetXSRenderMaterial() {
    return NULL;
}

UORXenoslaughterSubsystem::UORXenoslaughterSubsystem() {
    this->ActiveXenoslaughterMachine = NULL;
    this->CachedXenoslaughterController = NULL;
    this->CachedXenoslaughterPawn = NULL;
}

