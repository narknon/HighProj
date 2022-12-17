#include "SQEquippableInventoryItem.h"
#include "AbilitySystemComponent.h"

class ASQItemAttachment;

void ASQEquippableInventoryItem::UnequipItem() {
}




bool ASQEquippableInventoryItem::IsEquipOnAdd() {
    return false;
}

void ASQEquippableInventoryItem::InitializeAttachment() {
}

FGameplayTag ASQEquippableInventoryItem::GetSlotTag() const {
    return FGameplayTag{};
}

int32 ASQEquippableInventoryItem::GetOverrideItemIndex() const {
    return 0;
}

ASQItemAttachment* ASQEquippableInventoryItem::GetAttachment() {
    return NULL;
}

void ASQEquippableInventoryItem::EquipItem() {
}

void ASQEquippableInventoryItem::DestroyItemAttachment() {
}

void ASQEquippableInventoryItem::BeginUnequipItem() {
}

void ASQEquippableInventoryItem::BeginEquipItem() {
}

ASQEquippableInventoryItem::ASQEquippableInventoryItem() {
    this->bIsEquipped = false;
    this->ItemRemovedDropActor = NULL;
    this->AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("ItemAbilitySystem"));
    this->AttachmentType = NULL;
    this->OverrideItemIndex = -1;
    this->bEquipOnAdd = true;
    this->ItemAttachment = NULL;
}

