#include "ORSpawnPointComponent.h"
#include "Templates/SubclassOf.h"

class AActor;

void UORSpawnPointComponent::StopSpawning() {
}

void UORSpawnPointComponent::SetSpawnPointTag(const FGameplayTag NewSpawnPointTag) {
}

bool UORSpawnPointComponent::GetSpawnQueueActive() const {
    return false;
}

int32 UORSpawnPointComponent::GetRemainingEnemiesToSpawnCount() const {
    return 0;
}





void UORSpawnPointComponent::BeginSpawning() {
}

void UORSpawnPointComponent::AddActorToSpawnQueue(const TSubclassOf<AActor> AICharacterClass, const float Delay, const FOREnemySpawningData& SpawningData) {
}

UORSpawnPointComponent::UORSpawnPointComponent() {
    this->bSpawnQueueActive = false;
}

