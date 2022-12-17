#pragma once
#include "CoreMinimal.h"
#include "ESTBeginOutput.generated.h"

UENUM(BlueprintType)
enum class ESTBeginOutput : uint8 {
    then,
    OnPause,
    OnResume,
    Channel_Busy,
    Already_Played,
};

