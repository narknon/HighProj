#pragma once
#include "CoreMinimal.h"
#include "EORCreatureMinionTask.generated.h"

UENUM(BlueprintType)
enum class EORCreatureMinionTask : uint8 {
    ECMT_None,
    ECMT_RecallMinion,
    ECMT_DefendLocation,
    ECMT_AttackCharacter,
    ECMT_RetrieveItem,
    ECMT_MAX UMETA(Hidden),
};

