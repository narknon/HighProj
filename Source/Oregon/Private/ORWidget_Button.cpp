#include "ORWidget_Button.h"

void UORWidget_Button::SetTextColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void UORWidget_Button::SetText(FText InText) {
}


void UORWidget_Button::HandleUnhovered() {
}


void UORWidget_Button::HandleHovered() {
}


void UORWidget_Button::HandleClicked() {
}

UORWidget_Button::UORWidget_Button() {
    this->MinDesiredWidth = 0.00f;
    this->TextTransformPolicy = ETextTransformPolicy::None;
    this->Justification = ETextJustify::Left;
    this->ButtonWidget = NULL;
    this->ButtonTextBlock = NULL;
}

