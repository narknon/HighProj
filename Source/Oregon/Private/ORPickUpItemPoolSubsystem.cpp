#include "ORPickUpItemPoolSubsystem.h"
#include "Templates/SubclassOf.h"

class AActor;
class APawn;
class AORPickupBase;

bool UORPickUpItemPoolSubsystem::SendItemToPool(AORPickupBase* PickUpItemActor) {
    return false;
}

bool UORPickUpItemPoolSubsystem::RemoveFromPool(AORPickupBase* PickUpItemActor) {
    return false;
}

AORPickupBase* UORPickUpItemPoolSubsystem::CacheAndCreatePickUpItem_BP(TSubclassOf<AORPickupBase> PickupItemClass, FVector Location, FRotator Rotation, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, APawn* Instigator) {
    return NULL;
}

UORPickUpItemPoolSubsystem::UORPickUpItemPoolSubsystem() {
    this->DefaultMinPickUpItems = 5;
    this->DefaultMaxPickUpItems = 10;
}

