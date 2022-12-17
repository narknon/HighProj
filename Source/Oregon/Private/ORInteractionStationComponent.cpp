#include "ORInteractionStationComponent.h"

class UORWidget_InteractStationCanvas;

void UORInteractionStationComponent::OnExitedStation_Implementation() {
}

void UORInteractionStationComponent::OnEnteredStationComplete_Implementation() {
}

void UORInteractionStationComponent::OnEnteredStation_Implementation() {
}

UORWidget_InteractStationCanvas* UORInteractionStationComponent::GetInteractionCanvasWidget() {
    return NULL;
}

UORInteractionStationComponent::UORInteractionStationComponent() {
    this->SceneComponent = NULL;
    this->bIsDefaultFocus = false;
    this->bMoveToCamera = false;
}

