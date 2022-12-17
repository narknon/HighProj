#pragma once
#include "CoreMinimal.h"
#include "EORStreamingLevelType.generated.h"

UENUM(BlueprintType)
enum class EORStreamingLevelType : uint8 {
    Master,
    Global,
    Streaming,
    Lighting,
    Art,
    Gameplay,
    Custom,
    Mission,
};

