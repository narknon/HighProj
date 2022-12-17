#pragma once
#include "CoreMinimal.h"
#include "EOR3DMapLegendMarkerType.generated.h"

UENUM(BlueprintType)
enum class EOR3DMapLegendMarkerType : uint8 {
    Player,
    Objective,
    Collectible,
    POI,
};

