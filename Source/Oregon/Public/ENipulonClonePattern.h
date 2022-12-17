#pragma once
#include "CoreMinimal.h"
#include "ENipulonClonePattern.generated.h"

UENUM(BlueprintType)
enum class ENipulonClonePattern : uint8 {
    Split,
    Wait,
    Move,
    Shuffle,
    COUNT,
};

