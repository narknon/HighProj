#include "ORAIDamageDroneCharacter.h"
#include "ORInteractableComponent_Melee.h"


AORAIDamageDroneCharacter::AORAIDamageDroneCharacter() {
    this->MeleeInteract = CreateDefaultSubobject<UORInteractableComponent_Melee>(TEXT("MeleeInteract"));
    this->SpotLight = NULL;
    this->ExplosionActorClass = NULL;
    this->SparkIntervalMin = 0.25f;
    this->SparkIntervalMax = 0.50f;
    this->WobbleDiveBombSpeedFactor = 3.00f;
    this->WobbleSpeed = 50.00f;
    this->WobbleFalloffSpeed = 30.00f;
    this->WobbleMagintude = 20.00f;
    this->FocusChangeMaxTimer = 2.50f;
    this->FocusChangeLerpTimer = 0.50f;
    this->bExplodeOnContact = false;
}

