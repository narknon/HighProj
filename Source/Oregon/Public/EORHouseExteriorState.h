#pragma once
#include "CoreMinimal.h"
#include "EORHouseExteriorState.generated.h"

UENUM(BlueprintType)
enum class EORHouseExteriorState : uint8 {
    Unloaded,
    Loading,
    Loaded,
};

