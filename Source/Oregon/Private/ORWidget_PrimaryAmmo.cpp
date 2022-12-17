#include "ORWidget_PrimaryAmmo.h"

void UORWidget_PrimaryAmmo::UpdatePrimaryAmmoHUD_Implementation(int32 CurrentAmmo, int32 MaxAmmo, int32 ReserveAmmo) {
}

void UORWidget_PrimaryAmmo::HandleGunEvents(TArray<FItemEventData> ActiveItemEvents) {
}

int32 UORWidget_PrimaryAmmo::GetCurrentLowAmmoValue() {
    return 0;
}

UORWidget_PrimaryAmmo::UORWidget_PrimaryAmmo() : UUserWidget(FObjectInitializer::Get()) {
    this->KennyLow = 4;
    this->SweezyLow = 6;
    this->GusLow = 1;
    this->CreatureLow = 2;
    this->LezduitLow = 25;
}

