#pragma once
#include "CoreMinimal.h"
#include "EORGarmFlightControllerMoveFacingType.generated.h"

UENUM(BlueprintType)
enum class EORGarmFlightControllerMoveFacingType : uint8 {
    FacePlayer,
    FaceForward,
    Spin,
    Fucky,
};

