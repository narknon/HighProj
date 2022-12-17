#pragma once
#include "CoreMinimal.h"
#include "EMerGridDebugDrawSubmode.generated.h"

UENUM(BlueprintType)
enum class EMerGridDebugDrawSubmode : uint8 {
    NAVIGABLE,
    COST,
    SURFACE_TYPE,
    ORIENTATIONS,
    SURFACE_NORMALS,
    POLYGONS,
    CONNECTIONS,
    QUERY_COST,
    QUERY_HEURISTIC,
    QUERY_TOTAL,
    QUERY_DISTANCE_FIELD,
};

