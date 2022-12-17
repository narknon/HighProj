#pragma once
#include "CoreMinimal.h"
#include "EInputModeTypes.generated.h"

UENUM(BlueprintType)
enum EInputModeTypes {
    InputMode_None,
    InputMode_GameOnly,
    InputMode_GameAndUI,
    InputMode_UIOnly,
    InputMode_MAX UMETA(Hidden),
};

