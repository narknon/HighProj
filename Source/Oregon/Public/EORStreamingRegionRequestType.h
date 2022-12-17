#pragma once
#include "CoreMinimal.h"
#include "EORStreamingRegionRequestType.generated.h"

UENUM(BlueprintType)
enum class EORStreamingRegionRequestType : uint8 {
    NotRequested,
    Lighting,
    Master,
    Streaming,
    Art,
    Gameplay,
    HighPriority,
};

