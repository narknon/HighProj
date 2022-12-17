#include "ORItemAttach_Player.h"
#include "ORTriggerVolumeComponent.h"

class AActor;

void AORItemAttach_Player::RefreshAttachment() {
}

void AORItemAttach_Player::LookAtOverlapEnd(AActor* OtherActor, int32 VolumeIndex) {
}

void AORItemAttach_Player::LookAtOverlapBegin(AActor* OtherActor, int32 VolumeIndex) {
}

AORItemAttach_Player::AORItemAttach_Player() {
    this->LookAtTriggerComp = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("LookAtVolume"));
    this->AimAssistTraceDistance = 8192.00f;
    this->AttachmentOverride = NULL;
    this->AttachIgnoreScale = false;
    this->bMasterPoseAttach = true;
    this->AttentionComp = NULL;
}

