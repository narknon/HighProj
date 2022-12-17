#include "ORItemAcquisitionHandlerComponent.h"

class ASQInventoryItem;

void UORItemAcquisitionHandlerComponent::TryProcessAcquisitionRules(const FGameplayTag& ItemTag) {
}




void UORItemAcquisitionHandlerComponent::OnPlayerOwnedItemChanged(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireMode, TEnumAsByte<EInventoryTransactionType> TransactionType) {
}

void UORItemAcquisitionHandlerComponent::OnPlayerCurrencyChanged(FGameplayTag Currency, int32 PreviousCount, int32 NewCount, TEnumAsByte<EInventoryTransactionType> TransactionType) {
}

void UORItemAcquisitionHandlerComponent::GetAllAcquiredProgress(const FGameplayTag& ItemTag, float& OutAmountOwned, float& OutAmountRequired) {
}

UORItemAcquisitionHandlerComponent::UORItemAcquisitionHandlerComponent() {
    this->AcquisitionRulesTable = NULL;
}

