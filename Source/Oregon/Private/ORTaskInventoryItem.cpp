#include "ORTaskInventoryItem.h"

class UORCharacterInventory;

bool AORTaskInventoryItem::DropItem(UORCharacterInventory* FromInventory) {
    return false;
}



AORTaskInventoryItem::AORTaskInventoryItem() {
    this->bIsDroppable = false;
    this->TaskItemPickupClass = NULL;
}

