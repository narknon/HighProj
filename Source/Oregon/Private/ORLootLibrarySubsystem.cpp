#include "ORLootLibrarySubsystem.h"
#include "Templates/SubclassOf.h"

class AActor;

void UORLootLibrarySubsystem::SetLootGlobalDropModifier(FName Item, float GlobalModifier) {
}

void UORLootLibrarySubsystem::IncrementLootGlobalDropModifier(FName Item, float ModifierIncrement) {
}

TSubclassOf<AActor> UORLootLibrarySubsystem::GetLootItem(FName Item) {
    return NULL;
}

float UORLootLibrarySubsystem::GetLootGlobalDropModifier(FName Item) {
    return 0.0f;
}

UORLootLibrarySubsystem::UORLootLibrarySubsystem() {
    this->LootItemData = NULL;
}

