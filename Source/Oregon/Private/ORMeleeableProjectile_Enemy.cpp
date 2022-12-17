#include "ORMeleeableProjectile_Enemy.h"
#include "ORInteractableComponent_Melee.h"


AORMeleeableProjectile_Enemy::AORMeleeableProjectile_Enemy() {
    this->MeleeInteractableComponent = CreateDefaultSubobject<UORInteractableComponent_Melee>(TEXT("MeleeInteractableComponent"));
    this->DeflectProjectileClass = NULL;
    this->DeflectProjectileMaxTravelDistance = 8192.00f;
}

