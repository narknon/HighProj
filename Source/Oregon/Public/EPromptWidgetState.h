#pragma once
#include "CoreMinimal.h"
#include "EPromptWidgetState.generated.h"

UENUM(BlueprintType)
enum EPromptWidgetState {
    EPWS_None,
    EPWS_OutOfRange,
    EPWS_Inactive,
    EPWS_Active,
    EPWS_BestActive,
    EPWS_Disabled,
    EPWS_CloseToActive,
    EPWS_MAX UMETA(Hidden),
};

