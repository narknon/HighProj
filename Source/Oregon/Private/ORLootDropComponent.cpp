#include "ORLootDropComponent.h"
#include "Templates/SubclassOf.h"

class UObject;
class AActor;
class AORCharacter;
class UORLootTableBase;

void UORLootDropComponent::TryLootSpawnOnDied(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags) {
}

void UORLootDropComponent::TryLootSpawn() {
}

bool UORLootDropComponent::Setup(bool IsUsingLootTable, TSubclassOf<AActor> SpecificDropItem, TSubclassOf<UORLootTableBase> LootTable, FVector LootSpawnOffset, FVector LootSpawnForce, float LootSpawnForcePower) {
    return false;
}

UORLootDropComponent::UORLootDropComponent() {
    this->bIsUsingLootTable = false;
    this->SpecifiedDrop = NULL;
    this->TableReference = NULL;
    this->LootSpawnForceMultiplier = 0.00f;
    this->MaxLootToDrop = 1;
}

