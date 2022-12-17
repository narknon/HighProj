#include "ORProjectile.h"
#include "ORSuctionObjectComponent.h"

class UItemImpactResult;

FVector AORProjectile::SweezyReturnMovement(FVector& CurrentLocation, float RemainingTime) {
    return FVector{};
}

void AORProjectile::SetProjectileImpactResultOverride(UItemImpactResult* ImpactResultOverride) {
}

void AORProjectile::SetOverrideMovementMode(TEnumAsByte<EOROverrideProjectileMovementType> Type) {
}

void AORProjectile::SetEnableParticleSystems_Implementation(bool bEnableSystems) {
}

bool AORProjectile::ReturnToPool(bool bImmediate) {
    return false;
}

void AORProjectile::ReinitializeMovementComponent() {
}




void AORProjectile::HandleReturnToPool() {
}

AORProjectile::AORProjectile() {
    this->bUsePooling = true;
    this->bRegisterSuction = false;
    this->ImpactAcidSize = 80.00f;
    this->SuctionComp = CreateDefaultSubobject<UORSuctionObjectComponent>(TEXT("SuctionComp"));
}

