#include "ORSpawner.h"
#include "Templates/SubclassOf.h"
#include "Components/BillboardComponent.h"

class AActor;
class AORAICharacter;
class AORAuxillarySpawnable;
class UORSpawnPointComponent;

void AORSpawner::SpawnPointFinishedSpawning(UORSpawnPointComponent* SpawnPointComponent) {
}

void AORSpawner::SpawnEnemies() {
}

void AORSpawner::PlayPreSpawningFX_Implementation() {
}

void AORSpawner::PlayPostSpawningFX_Implementation() {
}

UORSpawnPointComponent* AORSpawner::GetNextSpawnPointCompToQueue_Implementation(TSubclassOf<AActor> ActorClass, const float Delay, const FOREnemySpawningData& SpawningData) {
    return NULL;
}

void AORSpawner::FinishPreSpawningFX_Implementation() {
}

void AORSpawner::FinishPostSpawningFX_Implementation() {
}

void AORSpawner::EnemySpawned(AORAICharacter* Enemy, const FOREnemySpawningData& EnemySpawningData) {
}

void AORSpawner::AuxillaryActorSpawned(AORAuxillarySpawnable* Actor, const FOREnemySpawningData& EnemySpawningData) {
}

AORSpawner::AORSpawner() {
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->bSpawnerActive = false;
}

