#include "ORFormationSpawnerComponent.h"

class AORAICharacter;

void UORFormationSpawnerComponent::StartSpawn() {
}

AORAICharacter* UORFormationSpawnerComponent::SpawnFormationActor(FVector& OutSpawnLocation) {
    return NULL;
}

UORFormationSpawnerComponent::UORFormationSpawnerComponent() {
    this->ActorClassToSpawn = NULL;
    this->SpawnCount = 1;
    this->FormationPattern = ESpawnFormationPattern::SEMICIRCLE;
    this->TimeToFormation = 1.00f;
    this->TimeToFormationDeviation = 0.00f;
    this->SpawnDelay = 0.00f;
    this->SpawnDelayDeviation = 0.00f;
    this->FormationSpacing = 500.00f;
    this->SpawnEasing = NULL;
    this->bDisableCollisionsWhileSpawning = false;
    this->bSpawnOnBeginPlay = false;
}

