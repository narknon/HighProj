#include "SQPhysicsProjectile.h"

class ASQFireableInventoryItem;
class UPrimitiveComponent;

bool ASQPhysicsProjectile::ShouldExplodeOnImpact_Implementation(const FHitResult& Hit) {
    return false;
}

void ASQPhysicsProjectile::OnImpact_Implementation(const FHitResult& ImpactResult) {
}

void ASQPhysicsProjectile::OnBeginShutdown_Implementation(bool bExploded) {
}

void ASQPhysicsProjectile::Init(FGameplayTag InModeType, ASQFireableInventoryItem* InOwningItem, FVector Velocity) {
}

UPrimitiveComponent* ASQPhysicsProjectile::GetPhysicsComponent_Implementation() {
    return NULL;
}

void ASQPhysicsProjectile::ApplyImpactEffects(const FHitResult& ImpactResult) {
}

ASQPhysicsProjectile::ASQPhysicsProjectile() {
    this->bIsAlive = true;
    this->bShutdownOnImpact = true;
    this->FiringType = EIFT_Unknown;
}

