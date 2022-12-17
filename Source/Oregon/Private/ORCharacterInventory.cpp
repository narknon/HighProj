#include "ORCharacterInventory.h"
#include "Templates/SubclassOf.h"

class ASQEquippableInventoryItem;
class ASQInventoryItem;
class UInventorySet;

void UORCharacterInventory::UnlockInventory() {
}

bool UORCharacterInventory::UnequipItem(FGameplayTag ItemTag) {
    return false;
}

void UORCharacterInventory::SetNewInventorySet(const UInventorySet* NewInventorySet, bool bAppend) {
}

void UORCharacterInventory::SetMaxCurrencyCount(FGameplayTag ItemTag, int32 MaxStackCount) {
}

void UORCharacterInventory::SetMaxConcurrentEquippables(FGameplayTag SlotTag, int32 MaxConcurrentEquippables) {
}

bool UORCharacterInventory::RemoveEquippable(FGameplayTag ItemTag, bool bShouldDestroy, bool bRemoveAll, TEnumAsByte<EInventoryTransactionType> TransactionType) {
    return false;
}

void UORCharacterInventory::LockInventory() {
}

void UORCharacterInventory::ItemEventFired(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag Mode, TEnumAsByte<EInventoryTransactionType> TransactionType) {
}

bool UORCharacterInventory::IsItemEquipped(FGameplayTag ItemTag, FGameplayTag SlotTag) {
    return false;
}

TArray<ASQEquippableInventoryItem*> UORCharacterInventory::GetSpecificEquippableItems(FGameplayTag ItemTag) {
    return TArray<ASQEquippableInventoryItem*>();
}

FGameplayTag UORCharacterInventory::GetPendingEquippedItem(FGameplayTag SlotTag) {
    return FGameplayTag{};
}

int32 UORCharacterInventory::GetMaxCurrencyCount(FGameplayTag ItemTag) {
    return 0;
}

ASQEquippableInventoryItem* UORCharacterInventory::GetFirstEquippedItem(FGameplayTag SlotTag) {
    return NULL;
}

TArray<ASQEquippableInventoryItem*> UORCharacterInventory::GetEquippedItems(FGameplayTag SlotTag) {
    return TArray<ASQEquippableInventoryItem*>();
}

ASQEquippableInventoryItem* UORCharacterInventory::GetEquippableItem(FGameplayTag ItemTag) {
    return NULL;
}

int32 UORCharacterInventory::GetCurrencyCount(FGameplayTag ItemTag) {
    return 0;
}

TArray<ASQEquippableInventoryItem*> UORCharacterInventory::GetAllEquippableItems(FGameplayTag SlotTag) {
    return TArray<ASQEquippableInventoryItem*>();
}

TArray<FGameplayTag> UORCharacterInventory::GetAllCurrencyItems() {
    return TArray<FGameplayTag>();
}

bool UORCharacterInventory::EquipPreviousItem(FGameplayTag SlotTag) {
    return false;
}

bool UORCharacterInventory::EquipItem(FGameplayTag ItemTag) {
    return false;
}

void UORCharacterInventory::EndFireItemByTag(FGameplayTag ItemTag, FGameplayTag FireMode) {
}

void UORCharacterInventory::EndFireItem(FGameplayTag ItemSlot, FGameplayTag FireMode) {
}

bool UORCharacterInventory::ContainsEquippableItem(FGameplayTag ItemTag) {
    return false;
}

int32 UORCharacterInventory::ConsumeCurrency(FGameplayTag ItemTag, int32 StackCount, TEnumAsByte<EInventoryTransactionType> TransactionType) {
    return 0;
}

void UORCharacterInventory::ClearInventory(bool bSkipUnequips, bool bSetupSlotData) {
}

bool UORCharacterInventory::CanFireItemByTag(FGameplayTag ItemTag, FGameplayTag FireMode) {
    return false;
}

bool UORCharacterInventory::CanFireItem(FGameplayTag ItemSlot, FGameplayTag FireMode) {
    return false;
}

void UORCharacterInventory::CancelFireItemByTag(FGameplayTag ItemTag, FGameplayTag FireMode) {
}

void UORCharacterInventory::CancelFireItem(FGameplayTag ItemSlot, FGameplayTag FireMode) {
}

void UORCharacterInventory::BeginFireItemByTag(FGameplayTag ItemTag, FGameplayTag FireMode) {
}

void UORCharacterInventory::BeginFireItem(FGameplayTag ItemSlot, FGameplayTag FireMode) {
}

ASQEquippableInventoryItem* UORCharacterInventory::AddExistingEquippable(FGameplayTag ItemTag, FGameplayTag SlotTag, ASQEquippableInventoryItem* ItemClass, TEnumAsByte<EInitialEquipState> OverrideEquipState, TEnumAsByte<EInventoryTransactionType> TransactionType) {
    return NULL;
}

ASQEquippableInventoryItem* UORCharacterInventory::AddEquippable(FGameplayTag ItemTag, FGameplayTag SlotTag, TSubclassOf<ASQEquippableInventoryItem> ItemClass, TEnumAsByte<EInitialEquipState> OverrideEquipState, TEnumAsByte<EInventoryTransactionType> TransactionType) {
    return NULL;
}

int32 UORCharacterInventory::AddCurrency(FGameplayTag ItemTag, int32 StackCount, TEnumAsByte<EInventoryTransactionType> TransactionType) {
    return 0;
}

UORCharacterInventory::UORCharacterInventory() {
    this->InventorySet = NULL;
    this->bSaveInventory = false;
    this->bDebugInventory = false;
    this->bInventoryLoaded = false;
    this->bCachePreviousEquip = true;
    this->bLockedForEdits = false;
}

