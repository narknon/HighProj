#include "ORGusMeleeableProjectile.h"
#include "GameFramework/RotatingMovementComponent.h"

AORGusMeleeableProjectile::AORGusMeleeableProjectile() {
    this->DiskProjectileType = NULL;
    this->RotatingMovementComp = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovementComponent"));
}

