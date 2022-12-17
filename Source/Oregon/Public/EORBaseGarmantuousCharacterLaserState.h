#pragma once
#include "CoreMinimal.h"
#include "EORBaseGarmantuousCharacterLaserState.generated.h"

UENUM(BlueprintType)
enum class EORBaseGarmantuousCharacterLaserState : uint8 {
    Inactive,
    Warning,
    Active,
};

