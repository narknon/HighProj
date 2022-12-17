#pragma once
#include "CoreMinimal.h"
#include "EBoolSetOrToggleOptions.generated.h"

UENUM(BlueprintType)
enum class EBoolSetOrToggleOptions : uint8 {
    DoNotModify,
    SetFalse,
    SetTrue,
    Toggle,
};

