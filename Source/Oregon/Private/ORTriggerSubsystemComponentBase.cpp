#include "ORTriggerSubsystemComponentBase.h"

void UORTriggerSubsystemComponentBase::SetSphereRadius(float InSphereRadius) {
}

void UORTriggerSubsystemComponentBase::SetShape(EORTriggerSystemShape InShape) {
}

void UORTriggerSubsystemComponentBase::SetCapsuleRadius(float InCapsuleRadius) {
}

void UORTriggerSubsystemComponentBase::SetCapsuleHalfHeight(float InCapsuleHalfHeight) {
}

void UORTriggerSubsystemComponentBase::SetBoxExtents(const FVector& InBoxExtents) {
}

EORTriggerSystemShape UORTriggerSubsystemComponentBase::GetShape() const {
    return EORTriggerSystemShape::Box;
}

UORTriggerSubsystemComponentBase::UORTriggerSubsystemComponentBase() {
    this->bShouldDebugDraw = false;
    this->Shape = EORTriggerSystemShape::Box;
    this->SphereRadius = 100.00f;
    this->CapsuleRadius = 25.00f;
    this->CapsuleHalfHeight = 50.00f;
    this->LineThickness = 2.00f;
    this->bShowInGame = false;
    this->bDrawOnlyIfSelected = false;
    this->bDrawSolid = false;
}

