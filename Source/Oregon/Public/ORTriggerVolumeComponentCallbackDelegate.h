#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolumeComponentCallbackDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FORTriggerVolumeComponentCallback, AActor*, SourceActor, int32, VolumeIndex);

