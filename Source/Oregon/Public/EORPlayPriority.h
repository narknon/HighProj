#pragma once
#include "CoreMinimal.h"
#include "EORPlayPriority.generated.h"

UENUM(BlueprintType)
enum class EORPlayPriority : uint8 {
    GamePlayCritical,
    ALine,
    BLine,
};

