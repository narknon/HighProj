#pragma once
#include "CoreMinimal.h"
#include "ESTLogEvent.generated.h"

UENUM(BlueprintType)
enum class ESTLogEvent : uint8 {
    STBlock_Begin,
    STBlock_Queued,
    STBlock_End,
    STBlock_Interrupted,
    STPlay_Started,
    STPlay_Finished,
};

