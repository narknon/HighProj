#pragma once
#include "CoreMinimal.h"
#include "ENarrativeInfluenceFollowMode.generated.h"

UENUM(BlueprintType)
enum class ENarrativeInfluenceFollowMode : uint8 {
    Drag,
    Boundary,
    Override,
    COUNT,
};

