#include "ORProjectilePoolSubsystem.h"
#include "Templates/SubclassOf.h"

class AActor;
class APawn;
class AORProjectile;

bool UORProjectilePoolSubsystem::SendActorToPool(AORProjectile* ProjectileActor) {
    return false;
}

bool UORProjectilePoolSubsystem::RemoveFromPool(AORProjectile* ProjectileActor) {
    return false;
}

void UORProjectilePoolSubsystem::OnWorldBeginPlay() {
}

AORProjectile* UORProjectilePoolSubsystem::CacheAndCreateProjectile_BP(TSubclassOf<AORProjectile> ProjectileClass, FVector Location, FRotator Rotation, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, APawn* Instigator) {
    return NULL;
}

UORProjectilePoolSubsystem::UORProjectilePoolSubsystem() {
    this->DefaultMinProjectiles = 10;
    this->DefaultMaxProjectiles = 50;
}

