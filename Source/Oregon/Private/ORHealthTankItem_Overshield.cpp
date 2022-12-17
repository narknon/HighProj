#include "ORHealthTankItem_Overshield.h"

AORHealthTankItem_Overshield::AORHealthTankItem_Overshield() {
    this->DecayIfZeroDelay = false;
    this->DecayIfEmpty = false;
    this->IsDecaying = false;
    this->OverhealScaleFactor = 0.50f;
    this->GameplayEffectWHileActive = NULL;
    this->CharacterEffectedComponent = NULL;
    this->WeaponEffectedComponent = NULL;
    this->bAppliedEffect = false;
}

