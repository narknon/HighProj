#pragma once
#include "CoreMinimal.h"
#include "ESpawnFormationPattern.generated.h"

UENUM(BlueprintType)
enum class ESpawnFormationPattern : uint8 {
    SEMICIRCLE,
    VERTICALCIRCLE,
    FLANKARC,
    LINE,
};

