#include "ORDebugHealthTextWidget.h"

void UORDebugHealthTextWidget::UpdateHealthText(const float CurrentHealth, const float MaxHealth, const float MaxWithoutUpgrades) {
}

UORDebugHealthTextWidget::UORDebugHealthTextWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HealthText = NULL;
}

