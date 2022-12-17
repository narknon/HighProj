#include "ORAIPoolSubsystem.h"
#include "Templates/SubclassOf.h"

class AActor;
class APawn;
class AORAICharacter;

AORAICharacter* UORAIPoolSubsystem::SpawnActorFromPool_BP(TSubclassOf<AORAICharacter> AICharacterClass, FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, APawn* Instigator) {
    return NULL;
}

bool UORAIPoolSubsystem::SendActorToPool(AORAICharacter* AICharacter) {
    return false;
}

bool UORAIPoolSubsystem::RemoveFromPool(AORAICharacter* AICharacter) {
    return false;
}

void UORAIPoolSubsystem::OnWorldBeginPlay() {
}

UORAIPoolSubsystem::UORAIPoolSubsystem() {
    this->DefaultMinAIs = 10;
    this->DefaultMaxAIs = 50;
}

