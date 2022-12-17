#include "ORAmbientWarpBaseManager.h"

class AORStreamingWarpBaseAnchor;

void UORAmbientWarpBaseManager::UnregisterAmbientWarpBase(TSoftObjectPtr<AORStreamingWarpBaseAnchor> ambientBase) {
}

void UORAmbientWarpBaseManager::RegisterAmbientWarpBase(TSoftObjectPtr<AORStreamingWarpBaseAnchor> ambientBase) {
}

void UORAmbientWarpBaseManager::DismissAllAmbientBases() {
}

UORAmbientWarpBaseManager::UORAmbientWarpBaseManager() {
    this->CachedStreamingSubsystem = NULL;
}

