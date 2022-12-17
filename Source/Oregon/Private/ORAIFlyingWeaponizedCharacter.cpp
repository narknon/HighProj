#include "ORAIFlyingWeaponizedCharacter.h"
#include "ORAkComponent.h"

void AORAIFlyingWeaponizedCharacter::SetupDynamicMaterialInstances() {
}

void AORAIFlyingWeaponizedCharacter::HandleHeadshotVFX(const FGameplayTagContainer& TagContainer) {
}

void AORAIFlyingWeaponizedCharacter::HandleHeadshotDeath(const FGameplayTagContainer& TagContainer) {
}

void AORAIFlyingWeaponizedCharacter::AttachMouthAkComponent() {
}

AORAIFlyingWeaponizedCharacter::AORAIFlyingWeaponizedCharacter() {
    this->HeadshotDeathFX = NULL;
    this->Death_AkEvent = NULL;
    this->HeadshotDeath_AkEvent = NULL;
    this->MouthAkComponent = CreateDefaultSubobject<UORAkComponent>(TEXT("Mouth"));
}

