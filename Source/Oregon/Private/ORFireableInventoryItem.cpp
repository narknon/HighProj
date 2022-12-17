#include "ORFireableInventoryItem.h"

void AORFireableInventoryItem::SetADSState_Implementation(bool ADSOn) {
}

FVector AORFireableInventoryItem::GetFiringLocation_Implementation(FName SocketName) {
    return FVector{};
}

void AORFireableInventoryItem::GameplayTagsChanged(const FGameplayTag Tag, int32 Count) {
}


AORFireableInventoryItem::AORFireableInventoryItem() {
    this->ReloadNextFire = false;
    this->HitScanImpactAcidSize = 80.00f;
}

