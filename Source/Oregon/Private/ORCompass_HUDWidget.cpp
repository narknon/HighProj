#include "ORCompass_HUDWidget.h"

class AActor;
class UWorld;
class UORScannableComponent;

void UORCompass_HUDWidget::UpdateCompassMarkers() {
}

void UORCompass_HUDWidget::SetupNewMarker(UWorld* WorldContextObj, AActor* InTrackedActor, bool isCombatMarker, UORScannableComponent* InOptionalScannableComponent, bool bIgnoreDistanceCheck) {
}

UORCompass_HUDWidget::UORCompass_HUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ScanningInterval = 1.00f;
    this->MarkerWidget = NULL;
    this->Marker_Overlay = NULL;
}

