#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionObjectiveDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FMissionObjectiveDelegate, FGameplayTag, MissionTag, FGameplayTag, ObjectiveTag);

