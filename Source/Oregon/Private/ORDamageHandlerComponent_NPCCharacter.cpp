#include "ORDamageHandlerComponent_NPCCharacter.h"

UORDamageHandlerComponent_NPCCharacter::UORDamageHandlerComponent_NPCCharacter() {
    this->bAlwaysSendDamageEvents = true;
    this->HackCurrentHealthForNPCs = 1.00f;
    this->HackCurrentHealthMaxForNPCs = 1.00f;
    this->CurrentHealth = 1.00f;
    this->NPC = NULL;
}

