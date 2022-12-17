#include "ORDamageHandlerComponent_Character.h"

float UORDamageHandlerComponent_Character::GetCurrentHealthTankMax() const {
    return 0.0f;
}

float UORDamageHandlerComponent_Character::GetCurrentHealthTankHealth() const {
    return 0.0f;
}

void UORDamageHandlerComponent_Character::GetCurrentHealthAndArmorValues(float& CurrentArmor, float& MaxArmor, float& CurrentHealth, float& MaxHealth) {
}

UORDamageHandlerComponent_Character::UORDamageHandlerComponent_Character() {
    this->bAllowTankDamageRollover = true;
}

