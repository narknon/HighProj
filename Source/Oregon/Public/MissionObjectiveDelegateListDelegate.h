#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionObjectiveDelegateListDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionObjectiveDelegateList, FGameplayTag, MissionTag, FGameplayTag, ObjectiveTag);

