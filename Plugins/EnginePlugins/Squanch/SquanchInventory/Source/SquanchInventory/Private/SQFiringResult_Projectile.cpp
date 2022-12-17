#include "SQFiringResult_Projectile.h"
#include "Templates/SubclassOf.h"

class ASQProjectile;

void USQFiringResult_Projectile::GetSpawnTransform_Implementation(FVector& OutLocation, FRotator& OutRotation, FVector& OutEffectsOffset, int32 Shot, int32 TotalShots, bool bUseOverrideLocation, FVector OverrideStartLocation) {
}

int32 USQFiringResult_Projectile::GetShotsToFire_Implementation() {
    return 0;
}

TSubclassOf<ASQProjectile> USQFiringResult_Projectile::GetProjectileType_Implementation() {
    return NULL;
}



void USQFiringResult_Projectile::ApplyInstantHit_Implementation() {
}

USQFiringResult_Projectile::USQFiringResult_Projectile() {
    this->ProjectileType = NULL;
    this->bTreatAsSingleProjectile = false;
}

