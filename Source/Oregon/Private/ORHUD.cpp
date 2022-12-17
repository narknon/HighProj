#include "ORHUD.h"

void AORHUD::SetHUDWidgetVisibility(bool bShowHUDWidget) {
}

void AORHUD::SetHUDState(EHUDState NewHUDState) {
}

ESlateVisibility AORHUD::GetHUDWidgetVisibility() {
    return ESlateVisibility::Visible;
}

EHUDState AORHUD::GetHUDState() {
    return EHUDState::Minimal;
}

AORHUD::AORHUD() {
    this->MainWidgetClass = NULL;
    this->MainWidget = NULL;
    this->DebugDrawTexture = NULL;
    this->HudDrawSystem = NULL;
}

