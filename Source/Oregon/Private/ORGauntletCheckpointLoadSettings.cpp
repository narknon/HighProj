#include "ORGauntletCheckpointLoadSettings.h"

UORGauntletCheckpointLoadSettings::UORGauntletCheckpointLoadSettings() {
    this->TimeAtEachCheckpoint = 10.00f;
    this->YawRotationRate = 80.00f;
    this->CheatPlayerUndetectable = EBoolSetOrToggleOptions::SetTrue;
    this->CheatPlayerGodMode = EBoolSetOrToggleOptions::SetTrue;
}

