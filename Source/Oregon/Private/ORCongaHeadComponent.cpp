#include "ORCongaHeadComponent.h"

void UORCongaHeadComponent::StopControllingBody() {
}

void UORCongaHeadComponent::HeadMovedCallback(float DeltaSeconds, FVector OldLocation, FVector OldVelocity) {
}

UORCongaHeadComponent::UORCongaHeadComponent() {
    this->SpaceBetween = 0;
    this->NumBodyMytes = 0;
    this->BodyMyteClass = NULL;
    this->WigglePeriodSeconds = 0.00f;
    this->WiggleWidth = 0.00f;
    this->WiggleDegreeLag = 0.00f;
    this->SetFacing = true;
    this->DoWiggle = true;
    this->UpLook = 0.00f;
    this->BodyPose = NULL;
    this->XYMinVelocity = 100.00f;
    this->XYMaxVelocity = 200.00f;
    this->ZMinVelocity = 100.00f;
    this->ZMaxVelocity = 200.00f;
}

