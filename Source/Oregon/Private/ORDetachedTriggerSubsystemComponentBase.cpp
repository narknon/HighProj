#include "ORDetachedTriggerSubsystemComponentBase.h"

void UORDetachedTriggerSubsystemComponentBase::SetSphereRadius(float InSphereRadius) {
}

void UORDetachedTriggerSubsystemComponentBase::SetShape(EORTriggerSystemShape InShape) {
}

void UORDetachedTriggerSubsystemComponentBase::SetCapsuleRadius(float InCapsuleRadius) {
}

void UORDetachedTriggerSubsystemComponentBase::SetCapsuleHalfHeight(float InCapsuleHalfHeight) {
}

void UORDetachedTriggerSubsystemComponentBase::SetBoxExtents(const FVector& InBoxExtents) {
}

EORTriggerSystemShape UORDetachedTriggerSubsystemComponentBase::GetShape() const {
    return EORTriggerSystemShape::Box;
}

UORDetachedTriggerSubsystemComponentBase::UORDetachedTriggerSubsystemComponentBase() {
    this->Shape = EORTriggerSystemShape::Box;
    this->SphereRadius = 100.00f;
    this->CapsuleRadius = 25.00f;
    this->CapsuleHalfHeight = 50.00f;
    this->LineThickness = 2.00f;
    this->bShowInGame = false;
    this->bDrawOnlyIfSelected = false;
    this->bDrawSolid = false;
}

