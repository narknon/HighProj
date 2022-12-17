#pragma once
#include "CoreMinimal.h"
#include "EGraphicsQuality.generated.h"

UENUM(BlueprintType)
enum class EGraphicsQuality : uint8 {
    Low,
    Medium,
    High,
    Epic,
    COUNT,
};

