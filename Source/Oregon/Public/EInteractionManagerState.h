#pragma once
#include "CoreMinimal.h"
#include "EInteractionManagerState.generated.h"

UENUM(BlueprintType)
enum class EInteractionManagerState : uint8 {
    Inactive,
    Entering,
    Exiting,
    Focused,
    FreeLook,
    CameraTransition,
    COUNT,
};

