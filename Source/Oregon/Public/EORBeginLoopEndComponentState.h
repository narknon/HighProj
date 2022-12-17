#pragma once
#include "CoreMinimal.h"
#include "EORBeginLoopEndComponentState.generated.h"

UENUM()
enum class EORBeginLoopEndComponentState : int32 {
    Off,
    Begin,
    Loop,
    End,
};

