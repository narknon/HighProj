#pragma once
#include "CoreMinimal.h"
#include "EPromptWidgetDirection.generated.h"

UENUM(BlueprintType)
enum class EPromptWidgetDirection : uint8 {
    Center,
    Left,
    Right,
    Up,
    Down,
};

