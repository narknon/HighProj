#include "ORSaveFileSettings.h"

UORSaveFileSettings::UORSaveFileSettings() {
    this->bResetSaveFile = false;
    this->Difficulty = ESQDifficultySetting::Normal;
    this->bCapFrameRateTo30 = false;
    this->bSkipBossIntros = false;
    this->bEnableNDLoad = true;
}

