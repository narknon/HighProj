#include "ORHealthDropComponent.h"

class UObject;
class AActor;
class AORCharacter;

AActor* UORHealthDropComponent::SpawnItem(const FGameplayTag& EnemyTag, const FVector SpawnLocation, const FRotator SpawnOrientation) {
    return NULL;
}

void UORHealthDropComponent::OnAttachedCharacterDied(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags) {
}

void UORHealthDropComponent::OnAttachCharacterDestroyed(AActor* DestroyedActor) {
}

void UORHealthDropComponent::DropItem(const FGameplayTag& EnemyTag) {
}

UORHealthDropComponent::UORHealthDropComponent() {
    this->HealthPickupTable = NULL;
    this->bEnabled = true;
    this->AttachedCharacter = NULL;
}

