#include "ORWidget_HUDPrompt.h"

class UActorComponent;


void UORWidget_HUDPrompt::SetState(TEnumAsByte<EPromptWidgetState> NewState) {
}

void UORWidget_HUDPrompt::SetOverrideTint(FSlateColor NewOverrideColor) {
}

void UORWidget_HUDPrompt::Init(UActorComponent* LinkedSceneComponent) {
}

TEnumAsByte<EPromptWidgetState> UORWidget_HUDPrompt::GetState() {
    return EPWS_None;
}

void UORWidget_HUDPrompt::EnableOverrideTint(bool Enabled) {
}




UORWidget_HUDPrompt::UORWidget_HUDPrompt() {
    this->WidgetType = EPWT_None;
    this->CurrentState = EPWS_None;
    this->IntendedState = EPWS_None;
    this->PromptDirection = EPromptWidgetDirection::Center;
    this->ScreenXPadding = 100.00f;
    this->ScreenYPadding = 100.00f;
    this->bUseOverrideTint = false;
}

