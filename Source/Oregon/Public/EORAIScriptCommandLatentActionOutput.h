#pragma once
#include "CoreMinimal.h"
#include "EORAIScriptCommandLatentActionOutput.generated.h"

UENUM(BlueprintType)
enum class EORAIScriptCommandLatentActionOutput : uint8 {
    then,
    OnStart,
    OnComplete,
    OnAbort,
};

