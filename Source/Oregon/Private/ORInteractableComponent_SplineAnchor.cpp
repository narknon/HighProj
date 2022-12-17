#include "ORInteractableComponent_SplineAnchor.h"

void UORInteractableComponent_SplineAnchor::BuildIfUnbuilt() {
}

void UORInteractableComponent_SplineAnchor::BuildCylinderList() {
}

UORInteractableComponent_SplineAnchor::UORInteractableComponent_SplineAnchor() {
    this->RestrictTangentToExitDirection = false;
    this->MinIntendedCylinderLength = 100.00f;
    this->CylinderSize = 1024.00f;
    this->TanDotThreshold = 0.95f;
    this->MinClampDistance = 0.00f;
    this->MaxClampDistance = -1.00f;
    this->SplineLength = 0.00f;
}

