#include "NipulonCloneAnimInstance.h"


UNipulonCloneAnimInstance::UNipulonCloneAnimInstance() {
    this->CharacterReference = NULL;
    this->bIsFlying = false;
    this->bCloneSplitActive = false;
    this->bCloneRingActive = false;
    this->bCloneSphereActive = false;
    this->bCloneMobActive = false;
    this->SideFlySpeed = 0.00f;
    this->ForwardFlySpeed = 0.00f;
    this->UpFlySpeed = 0.00f;
    this->CurrentAimPitch = 0.00f;
    this->CurrentAimYaw = 0.00f;
}

