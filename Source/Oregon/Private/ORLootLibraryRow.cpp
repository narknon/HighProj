#include "ORLootLibraryRow.h"

FORLootLibraryRow::FORLootLibraryRow() {
    this->TypeOfLoot = ELT_Consumable;
    this->LootActor = NULL;
    this->MaxNuminInventory = 0;
    this->GlobalDropChanceModifier = 0.00f;
}

