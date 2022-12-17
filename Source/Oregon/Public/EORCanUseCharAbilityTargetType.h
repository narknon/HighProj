#pragma once
#include "CoreMinimal.h"
#include "EORCanUseCharAbilityTargetType.generated.h"

UENUM(BlueprintType)
enum class EORCanUseCharAbilityTargetType : uint8 {
    None,
    Self,
    MainTargetActor,
    CustomTarget,
};

