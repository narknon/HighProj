#pragma once
#include "CoreMinimal.h"
#include "ESTError.generated.h"

UENUM(BlueprintType)
enum class ESTError : uint8 {
    NoName,
    STBegin_PriorityFail,
    STPlay_ActorAudioOverlap,
    STPlay_FailedToPossess,
    STBegin_ChannelFail,
    STBegin_AlreadyCompleted,
};

