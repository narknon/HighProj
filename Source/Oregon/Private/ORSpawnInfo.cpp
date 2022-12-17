#include "ORSpawnInfo.h"

FORSpawnInfo::FORSpawnInfo() {
    this->ConditionalSpawnType = EORSpawnSelectionTypes::ESS_Random;
    this->Delay = 0.00f;
    this->LoadedCharacterClass = NULL;
    this->SpawnInfoID = 0;
}

