#pragma once
#include "CoreMinimal.h"
#include "EORStreamingLoadState.generated.h"

UENUM(BlueprintType)
enum class EORStreamingLoadState : uint8 {
    InitialLoad,
    InitialRegionLoad,
    NotLoading,
    BlockingTransition,
    UnloadAll,
};

