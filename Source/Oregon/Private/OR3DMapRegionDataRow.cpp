#include "OR3DMapRegionDataRow.h"

FOR3DMapRegionDataRow::FOR3DMapRegionDataRow() {
    this->bIsDiscoverable = false;
    this->HunterChallengeArea = EORHunterChallengeMapArea::None;
    this->bUseSingleMasterMeshWithRegionMaterialID = false;
    this->RegionMaterialID = 0;
}

