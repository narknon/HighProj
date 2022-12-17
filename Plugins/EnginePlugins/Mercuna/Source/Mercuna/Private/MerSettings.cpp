#include "MerSettings.h"

UMerSettings::UMerSettings() {
    this->DebugLengthScale = 1000.00f;
    this->bAlwaysShowErrors = true;
    this->bAutoLinkNavVolumesWithGraphs = true;
    this->OctreeCellSize = 50.00f;
    this->MinPawnRadius = 1;
    this->MaxPawnRadius = 3;
    this->bAllowOctreeMerging = false;
}

