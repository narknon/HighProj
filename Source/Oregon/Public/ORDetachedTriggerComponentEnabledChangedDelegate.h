#pragma once
#include "CoreMinimal.h"
#include "ORDetachedTriggerComponentEnabledChangedDelegate.generated.h"

class UORDetachedTriggerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FORDetachedTriggerComponentEnabledChanged, UORDetachedTriggerComponent*, Interactable, bool, bIsEnabled);

