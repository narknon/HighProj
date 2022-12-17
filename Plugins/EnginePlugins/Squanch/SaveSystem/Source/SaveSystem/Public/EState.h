#pragma once
#include "CoreMinimal.h"
#include "EState.generated.h"

UENUM(BlueprintType)
enum class EState : uint8 {
    Inactive,
    Active,
    Completed,
};

