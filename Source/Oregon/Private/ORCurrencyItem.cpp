#include "ORCurrencyItem.h"

class UObject;

int32 AORCurrencyItem::GetMaxStacks(UObject* WorldContextObject) {
    return 0;
}

AORCurrencyItem::AORCurrencyItem() {
    this->MaxStacks = -1;
}

