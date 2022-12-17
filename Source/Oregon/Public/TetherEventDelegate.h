#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TetherEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTetherEvent, FGameplayTag, Event);

