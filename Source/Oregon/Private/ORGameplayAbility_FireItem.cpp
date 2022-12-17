#include "ORGameplayAbility_FireItem.h"

class USQFiringResultComponent;
class USQFireLoopComponent;
class ASQFireableInventoryItem;

void UORGameplayAbility_FireItem::OnFireLoopCompleteCallback(ASQFireableInventoryItem* InFireableItem, FGameplayTag InFireModeTag, USQFireLoopComponent* InFireLoop) {
}

FGameplayTag UORGameplayAbility_FireItem::GetFireModeTag() const {
    return FGameplayTag{};
}

USQFiringResultComponent* UORGameplayAbility_FireItem::GetFireableItemFireModeFiringResult() const {
    return NULL;
}

ASQFireableInventoryItem* UORGameplayAbility_FireItem::GetFireableItem() const {
    return NULL;
}

void UORGameplayAbility_FireItem::BeginFire() {
}

void UORGameplayAbility_FireItem::AutoEndTimerCallback() {
}

UORGameplayAbility_FireItem::UORGameplayAbility_FireItem() {
    this->bCancelSprint = true;
    this->bShouldAutoEnd = false;
    this->AutoEndTime = 0.00f;
    this->bAutoEndOnFireLoopComplete = false;
}

