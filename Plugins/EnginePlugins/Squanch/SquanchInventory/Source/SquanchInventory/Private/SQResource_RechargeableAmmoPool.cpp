#include "SQResource_RechargeableAmmoPool.h"

class ASQInventoryItem;

void USQResource_RechargeableAmmoPool::OnItemEvent(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireModeTag, TEnumAsByte<EInventoryTransactionType> TransactionType) {
}

float USQResource_RechargeableAmmoPool::GetTotalResourceAmount() {
    return 0.0f;
}

EResourceState USQResource_RechargeableAmmoPool::GetState() {
    return EResourceState::Normal;
}

USQResource_RechargeableAmmoPool::USQResource_RechargeableAmmoPool() {
    this->bDoesRegenWhileActive = false;
    this->bDoesPlayLowAmmoSound = true;
    this->LowAmmoSound = NULL;
    this->LowResourceDivisor = 3;
    this->bIsActive = true;
    this->AmmoGained = 0.00f;
    this->TimePassed = 0.00f;
    this->AmmoRefreshRate = 1.00f;
}

