#pragma once
#include "CoreMinimal.h"
#include "EORServiceScopeChangeAction.generated.h"

UENUM(BlueprintType)
enum class EORServiceScopeChangeAction : uint8 {
    None,
    SetFalse,
    SetTrue,
};

