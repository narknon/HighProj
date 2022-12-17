#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMissionDelegate, FGameplayTag, Tag);

