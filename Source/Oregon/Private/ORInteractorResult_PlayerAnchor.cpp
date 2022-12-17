#include "ORInteractorResult_PlayerAnchor.h"
#include "ORInteractorResult_PlayerAnchorPull.h"

UORInteractorResult_PlayerAnchor::UORInteractorResult_PlayerAnchor() {
    this->PostAnchorActionClass = UORInteractorResult_PlayerAnchorPull::StaticClass();
    this->AnchorStrainTime = 0.00f;
    this->AnchorHandVFX = NULL;
    this->AnchorVFX = NULL;
    this->AnchorPSCSpeed = 6000.00f;
    this->StartingOffset = -50.00f;
}

