#include "ORItemAttach_Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "ORPossessableComponent.h"

class ASQInventoryItem;
class AORCharacter;

void AORItemAttach_Character::ParentItemEventFired(ASQInventoryItem* Item, FGameplayTag Event, FGameplayTag FireMode, EInventoryTransactionType TransactionType) {
}

AORCharacter* AORItemAttach_Character::GetOwningCharacter() {
    return NULL;
}


AORItemAttach_Character::AORItemAttach_Character() {
    this->ItemMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemMesh"));
    this->ORPossessableComp = CreateDefaultSubobject<UORPossessableComponent>(TEXT("ORPossessableComp"));
    this->EquipTime = 0.25f;
    this->UnequipTime = 0.25f;
}

