#include "ORCreatureMinionItem.h"

class AORAICreatureMinionCharacter;
class AORCreatureWeaponItem;
class AORCreaturePheromoneMarker;

void AORCreatureMinionItem::SetCreatureWeaponItem(AORCreatureWeaponItem* NewCreatureWeaponItem) {
}

void AORCreatureMinionItem::SetCreatureMinionCharacter(AORAICreatureMinionCharacter* NewCreatureMinionCharacter) {
}

void AORCreatureMinionItem::ReloadMinion_Implementation() {
}

void AORCreatureMinionItem::OnMinionTaskComplete() {
}

void AORCreatureMinionItem::OnCreaturePheromonesApplied(AORCreaturePheromoneMarker* PheromoneMarker) {
}

AORCreatureWeaponItem* AORCreatureMinionItem::GetCreatureWeaponItem() const {
    return NULL;
}

AORAICreatureMinionCharacter* AORCreatureMinionItem::GetCreatureMinionCharacter() const {
    return NULL;
}

AORCreatureMinionItem::AORCreatureMinionItem() {
    this->CreatureWeaponItem = NULL;
    this->CreatureMinionCharacter = NULL;
    this->TargetedActor = NULL;
}

