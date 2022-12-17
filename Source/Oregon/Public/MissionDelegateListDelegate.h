#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionDelegateListDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionDelegateList, FGameplayTag, Tag);

