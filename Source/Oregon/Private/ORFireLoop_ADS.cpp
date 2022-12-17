#include "ORFireLoop_ADS.h"

class ASQInventoryItem;

void UORFireLoop_ADS::ParentItemEventFired(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireMode, TEnumAsByte<EInventoryTransactionType> TransactionType) {
}

UORFireLoop_ADS::UORFireLoop_ADS() {
    this->ADSState = false;
}

