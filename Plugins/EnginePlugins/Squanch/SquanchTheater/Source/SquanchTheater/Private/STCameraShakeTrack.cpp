#include "STCameraShakeTrack.h"

USTCameraShakeTrack::USTCameraShakeTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireEventsAtPosition::AfterSpawn;
    this->CameraShake = NULL;
}

