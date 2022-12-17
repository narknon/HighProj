#include "ORWidget_AnimatingBar.h"

void UORWidget_AnimatingBar::SetMaxValue(float InMaxValue) {
}

void UORWidget_AnimatingBar::SetBarPercentage(float NewPercent) {
}

UORWidget_AnimatingBar::UORWidget_AnimatingBar() : UUserWidget(FObjectInitializer::Get()) {
    this->Panel = NULL;
    this->ChangeBar = NULL;
    this->PrimaryBar = NULL;
    this->BackgroundBar = NULL;
    this->MaterialPercentValueName = TEXT("Percent");
    this->MaterialMaxValueName = TEXT("MaxAmmo");
    this->Speed = 5.00f;
    this->ChangeDelayMax = 0.50f;
}

