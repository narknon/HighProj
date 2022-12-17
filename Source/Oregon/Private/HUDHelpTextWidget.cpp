#include "HUDHelpTextWidget.h"

float UHUDHelpTextWidget::GetDisplayTimeRemaining() {
    return 0.0f;
}



void UHUDHelpTextWidget::DisplayHelpText(const FText& TextToDisplay, float DisplayTime) {
}

void UHUDHelpTextWidget::ClearHelpText_Implementation() {
}

UHUDHelpTextWidget::UHUDHelpTextWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HelpText = NULL;
}

