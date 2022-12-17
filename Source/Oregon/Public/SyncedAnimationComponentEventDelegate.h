#pragma once
#include "CoreMinimal.h"
#include "SyncedAnimationComponentEventDelegate.generated.h"

class USyncedPlayerAnimationComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSyncedAnimationComponentEvent, USyncedPlayerAnimationComponent*, SyncedAnimationComponent);

