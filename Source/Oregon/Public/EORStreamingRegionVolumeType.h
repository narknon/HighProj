#pragma once
#include "CoreMinimal.h"
#include "EORStreamingRegionVolumeType.generated.h"

UENUM(BlueprintType)
enum class EORStreamingRegionVolumeType : uint8 {
    Gameplay,
    Art,
    Priority,
};

