#include "SQFireableInventoryItem.h"
#include "Templates/SubclassOf.h"

class USQFiringResultComponent;
class USQFireLoopComponent;
class USQFireableItemComponent;
class USQResourceComponent;
class UItemImpactResult;
class USkeletalMeshComponent;

void ASQFireableInventoryItem::SkipSpawningNextDrop() {
}

void ASQFireableInventoryItem::OverrideImpactResult(FGameplayTag FireModeTag, UItemImpactResult* NewImpactResult) {
}

void ASQFireableInventoryItem::OverrideFireModeComponent(FGameplayTag FireModeTag, TSubclassOf<USQFireableItemComponent> NewFireableItemComponent) {
}


bool ASQFireableInventoryItem::ItemCanFire(FGameplayTag Mode) {
    return false;
}

USQResourceComponent* ASQFireableInventoryItem::GetResourceComponent(FGameplayTag Mode) {
    return NULL;
}

TArray<TSubclassOf<USQFireableItemComponent>> ASQFireableInventoryItem::GetItemComponents(FGameplayTag Mode) {
    return TArray<TSubclassOf<USQFireableItemComponent>>();
}

TMap<FGameplayTag, UItemImpactResult*> ASQFireableInventoryItem::GetImpactResultList() {
    return TMap<FGameplayTag, UItemImpactResult*>();
}

UItemImpactResult* ASQFireableInventoryItem::GetImpactResult(FGameplayTag Mode) {
    return NULL;
}

USQFiringResultComponent* ASQFireableInventoryItem::GetFiringResult(FGameplayTag Mode) {
    return NULL;
}

TMap<FGameplayTag, FFireMode> ASQFireableInventoryItem::GetFireModeList() {
    return TMap<FGameplayTag, FFireMode>();
}

USQFireLoopComponent* ASQFireableInventoryItem::GetFireLoopComponent(FGameplayTag Mode) {
    return NULL;
}

USkeletalMeshComponent* ASQFireableInventoryItem::GetAttachmentSkMesh() {
    return NULL;
}

void ASQFireableInventoryItem::EndItemFire(FGameplayTag Mode) {
}

void ASQFireableInventoryItem::CancelItemFire(FGameplayTag Mode) {
}

void ASQFireableInventoryItem::CancelAllFireModes() {
}

bool ASQFireableInventoryItem::BeginItemFire(FGameplayTag Mode) {
    return false;
}

void ASQFireableInventoryItem::ActivateFiringResult(FGameplayTag Mode) {
}

ASQFireableInventoryItem::ASQFireableInventoryItem() {
    this->bSkipSpawningDrop = false;
}

