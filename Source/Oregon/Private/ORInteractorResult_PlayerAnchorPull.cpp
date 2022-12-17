#include "ORInteractorResult_PlayerAnchorPull.h"
#include "ORInteractorResult_PlayerAnchorRetract.h"

void UORInteractorResult_PlayerAnchorPull::SwitchToLeftArm() {
}

void UORInteractorResult_PlayerAnchorPull::AnchorSwingComplete(bool bCancelled) {
}

UORInteractorResult_PlayerAnchorPull::UORInteractorResult_PlayerAnchorPull() {
    this->PostAnchorActionClass = UORInteractorResult_PlayerAnchorRetract::StaticClass();
}

