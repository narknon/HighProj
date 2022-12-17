#include "SQFiringResult_PhysicsProjectile.h"
#include "Templates/SubclassOf.h"

class ASQPhysicsProjectile;

void USQFiringResult_PhysicsProjectile::GetSpawnTransform_Implementation(FVector& OutLocation, FRotator& OutRotation, int32 Shot, int32 TotalShots, bool bUseOverrideLocation, FVector OverrideStartLocation) {
}

TSubclassOf<ASQPhysicsProjectile> USQFiringResult_PhysicsProjectile::GetProjectileType_Implementation() {
    return NULL;
}


USQFiringResult_PhysicsProjectile::USQFiringResult_PhysicsProjectile() {
    this->ProjectileType = NULL;
}

