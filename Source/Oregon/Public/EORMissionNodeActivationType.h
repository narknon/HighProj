#pragma once
#include "CoreMinimal.h"
#include "EORMissionNodeActivationType.generated.h"

UENUM(BlueprintType)
enum class EORMissionNodeActivationType : uint8 {
    RuntimeOnly,
    BeginPlayAndRuntime,
    DebugOnly,
    BeginPlayOnly,
};

