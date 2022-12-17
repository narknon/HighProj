#include "ORGameModeBase.h"

class UWorld;
class ULevel;

void AORGameModeBase::TimedFreezeEffect(float FreezeTime) {
}

void AORGameModeBase::OnLevelAddedToWorld(ULevel* InLevel, UWorld* InWorld) {
}

AORGameModeBase::AORGameModeBase() {
    this->ResetAudioEvent = NULL;
    this->ResetSlomoAudioEvent = NULL;
}

