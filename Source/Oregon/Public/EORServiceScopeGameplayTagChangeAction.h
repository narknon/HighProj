#pragma once
#include "CoreMinimal.h"
#include "EORServiceScopeGameplayTagChangeAction.generated.h"

UENUM(BlueprintType)
enum class EORServiceScopeGameplayTagChangeAction : uint8 {
    None,
    AddLooseTags,
    RemoveLooseTags,
};

