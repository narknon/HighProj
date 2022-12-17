#include "ORCreaturePheromoneMarker.h"

class UObject;
class AActor;
class AORCharacter;

void AORCreaturePheromoneMarker::RemovePheromoneMarker() {
}

void AORCreaturePheromoneMarker::OnTargetCharacterDied(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags) {
}

void AORCreaturePheromoneMarker::OnTargetActorDestroyed(AActor* DestroyedActor) {
}

AORCreaturePheromoneMarker::AORCreaturePheromoneMarker() {
    this->CreatureWeaponItem = NULL;
    this->TargetActor = NULL;
    this->PheromoneTime = 0.00f;
}

