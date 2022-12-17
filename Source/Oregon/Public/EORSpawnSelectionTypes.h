#pragma once
#include "CoreMinimal.h"
#include "EORSpawnSelectionTypes.generated.h"

UENUM(BlueprintType)
enum class EORSpawnSelectionTypes : uint8 {
    ESS_Random,
    ESS_RandomInFrontOfCamera,
    ESS_RandomInCameraView,
    ESS_ClosestToCenterOfCameraView,
    ESS_ClosestToPlayer,
    ESS_ClosestToPlayerInFrontOfCamera,
    ESS_ClosestToPlayerInCameraView,
    ESS_FarthestFromPlayer,
    ESS_FarthestFromPlayerInFrontOfCamera,
    ESS_FarthestFromPlayerInCameraView,
    ESS_MAX UMETA(Hidden),
};

