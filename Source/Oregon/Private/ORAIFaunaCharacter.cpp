#include "ORAIFaunaCharacter.h"

void AORAIFaunaCharacter::LeapAtLocation(FVector LeapLocation) {
}

AORAIFaunaCharacter::AORAIFaunaCharacter() {
    this->DeathFX = NULL;
    this->RemoveFX = NULL;
    this->Armored = false;
    this->Death_AkEvent = NULL;
    this->CombatSpeedUpEffect = NULL;
    this->AmIControlled = false;
    this->OverrideForwardSpeed = 0.00f;
    this->ManholeUpMontage = NULL;
}

