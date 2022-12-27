#include "ORWidget_HUDMaster.h"

class UORWidget;
class UORWidget_HUDPrompt;
class UORWidget_BossHealthBar;


void UORWidget_HUDMaster::SetHUDVisible_Implementation(bool bVisible) {
}

void UORWidget_HUDMaster::SetHUDState(EHUDState NewState) {
}



void UORWidget_HUDMaster::SendWidgetToPool(UORWidget* Widget) {
}


EHUDState UORWidget_HUDMaster::GetHUDState() {
    return EHUDState::Minimal;
}

UORWidget_BossHealthBar* UORWidget_HUDMaster::GetBossHealthBar(EBossHealthBarType HealthBarType) {
    return NULL;
}




UORWidget_HUDPrompt* UORWidget_HUDMaster::CacheAndCreateHUDPromptWidget(EPromptWidgetType WidgetType) {
    return NULL;
}

UORWidget_HUDMaster::UORWidget_HUDMaster() {
    this->HUD_HelpText_Widget = NULL;
    this->HUDPromptPrecacheCount = 10;
    this->InfoPanelPrecacheCount = 40;
}

