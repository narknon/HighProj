#pragma once
#include "CoreMinimal.h"
#include "EActorIKTraceType.generated.h"

UENUM(BlueprintType)
enum class EActorIKTraceType : uint8 {
    RightFoot,
    LeftFoot,
    RightHand,
    LeftHand,
};

