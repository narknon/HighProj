#include "ORCreatureWeaponItem.h"

class AActor;
class AORAICreatureMinionCharacter;

void AORCreatureWeaponItem::UpdateDefendLocationPheromones(const FVector& DefendTaskLocation) {
}

void AORCreatureWeaponItem::SetTargetRecallMinionLocked(const bool IsLocked) {
}

void AORCreatureWeaponItem::SetTargetRecallMinion(AORAICreatureMinionCharacter* NewTargetRecallMinion) {
}


bool AORCreatureWeaponItem::IsMinionSlotLoaded(int32 MinionSlotIndex) {
    return false;
}

AORAICreatureMinionCharacter* AORCreatureWeaponItem::GetTargetRecallMinion() const {
    return NULL;
}

void AORCreatureWeaponItem::ApplyPheromones(AActor* PheromoneTarget) {
}

AORCreatureWeaponItem::AORCreatureWeaponItem() {
    this->DefendLocationPheromoneMarker = NULL;
    this->PheromoneMarkerClass = NULL;
    this->ParentCharacter = NULL;
    this->TargetRecallMinion = NULL;
    this->PrimedMinionSlot = 0;
}

