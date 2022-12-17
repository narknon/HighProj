#include "ORStreamingSettings.h"

UORStreamingSettings::UORStreamingSettings() {
    this->bEnableEmergencyHitch = false;
    this->EmergencyHitchTimeout = 30.00f;
    this->MasterLevels.AddDefaulted(18);
    this->WarpBases.AddDefaulted(52);
    this->GloballyLoadedLevels.AddDefaulted(1);
    this->ReducedAsyncLoadingTimeLimit = 2.00f;
    this->ReducedLevelStreamingActorsUpdateTimeLimit = 2.00f;
    this->PhysXTreeRebuildRateWhileStreaming = 100;
}

