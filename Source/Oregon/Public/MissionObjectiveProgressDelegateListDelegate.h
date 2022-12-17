#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionObjectiveProgressDelegateListDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMissionObjectiveProgressDelegateList, FGameplayTag, MissionTag, const TArray<FGameplayTag>&, NewObjectiveTags, const TArray<FGameplayTag>&, CompletedObjectiveTags);

