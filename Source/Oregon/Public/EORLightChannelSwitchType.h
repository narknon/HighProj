#pragma once
#include "CoreMinimal.h"
#include "EORLightChannelSwitchType.generated.h"

UENUM(BlueprintType)
enum class EORLightChannelSwitchType : uint8 {
    DontChange,
    Set,
    Unset,
};

