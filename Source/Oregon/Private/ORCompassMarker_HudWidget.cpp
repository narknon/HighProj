#include "ORCompassMarker_HudWidget.h"

void UORCompassMarker_HudWidget::UpdateTracker() {
}


void UORCompassMarker_HudWidget::StopTracking() {
}



UORCompassMarker_HudWidget::UORCompassMarker_HudWidget() {
    this->isCombatMarker = true;
    this->MarkerAngle = 0.00f;
    this->bShouldIgnoreDistance = false;
    this->bShouldReturnToPool = false;
}

