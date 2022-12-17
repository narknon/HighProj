#include "ORWidget_HealthHUD.h"

class AORHealthTankItem;


void UORWidget_HealthHUD::OnHealthTankUpdated(AORHealthTankItem* Tank, float Current, float Max, float Change, bool DamageEvent) {
}

void UORWidget_HealthHUD::OnHealthTankEmpty(AORHealthTankItem* Tank) {
}



void UORWidget_HealthHUD::BindTankCallbacks() {
}

UORWidget_HealthHUD::UORWidget_HealthHUD() {
    this->ActiveHealthTankIndex = 0;
}

