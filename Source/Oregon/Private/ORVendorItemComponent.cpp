#include "ORVendorItemComponent.h"
#include "Templates/SubclassOf.h"

class ASQEquippableInventoryItem;

void UORVendorItemComponent::SetupData(FText ItemName, FGameplayTag ItemTag, bool bSimpleCurrencyType, int32 ItemCount, TSubclassOf<ASQEquippableInventoryItem> ItemClass, FGameplayTag ItemSlot, TMap<FGameplayTag, int32> BuyPrice, TMap<FGameplayTag, int32> SellValue) {
}

UORVendorItemComponent::UORVendorItemComponent() {
    this->bGrantsSimpleCurrencyType = true;
    this->GrantedItemCount = 1;
    this->GrantedItemClass = NULL;
    this->Purchased = false;
}

