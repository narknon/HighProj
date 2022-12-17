#pragma once
#include "CoreMinimal.h"
#include "EORLevelState.generated.h"

UENUM(BlueprintType)
enum class EORLevelState : uint8 {
    NotRequested,
    Unloaded,
    Loaded,
    Visible,
};

