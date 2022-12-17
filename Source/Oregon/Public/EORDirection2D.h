#pragma once
#include "CoreMinimal.h"
#include "EORDirection2D.generated.h"

UENUM(BlueprintType)
enum class EORDirection2D : uint8 {
    Unknown,
    Front,
    Right,
    Back,
    Left,
};

