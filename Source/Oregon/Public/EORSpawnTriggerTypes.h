#pragma once
#include "CoreMinimal.h"
#include "EORSpawnTriggerTypes.generated.h"

UENUM(BlueprintType)
enum class EORSpawnTriggerTypes : uint8 {
    EST_Automatic_FractionKilled_Wave,
    EST_Automatic_FractionKilled_CurrentTotal,
    EST_Automatic_FractionKeysKilled_Wave,
    EST_Automatic_FractionKeysKilled_CurrentTotal,
    EST_Manual,
    EST_Automatic_CountKilled_Wave,
    EST_Automatic_CountKilled_CurrentTotal,
    EST_Automatic_CountKeysKilled_Wave,
    EST_Automatic_CountKeysKilled_CurrentTotal,
    EST_Automatic_CountRemaining_Wave,
    EST_Automatic_CountRemaining_CurrentTotal,
    EST_Automatic_CountKeysRemaining_Wave,
    EST_Automatic_CountKeysRemaining_CurrentTotal,
    EST_MAX UMETA(Hidden),
};

