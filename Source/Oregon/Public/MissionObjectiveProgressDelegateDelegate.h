#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionObjectiveProgressDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FMissionObjectiveProgressDelegate, FGameplayTag, MissionTag, const TArray<FGameplayTag>&, NewObjectiveTags, const TArray<FGameplayTag>&, CompletedObjectiveTags);

