#include "ORAICreatureMinionCharacter.h"

class AORCreatureWeaponItem;

void AORAICreatureMinionCharacter::SetCreatureWeaponItem(AORCreatureWeaponItem* NewCreatureWeaponItem) {
}


AORCreatureWeaponItem* AORAICreatureMinionCharacter::GetCreatureWeaponItem() const {
    return NULL;
}

AORAICreatureMinionCharacter::AORAICreatureMinionCharacter() {
    this->bIsMindControlMinion = false;
    this->CreatureWeaponItem = NULL;
}

