#pragma once
#include "CoreMinimal.h"
#include "AnchorPullEventDelegate.generated.h"

class UORInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAnchorPullEvent, bool, bCompleted, UORInteractableComponent*, PullAnchor);

