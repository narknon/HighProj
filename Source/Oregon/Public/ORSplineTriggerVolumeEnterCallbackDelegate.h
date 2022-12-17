#pragma once
#include "CoreMinimal.h"
#include "ORSplineTriggerVolumeEnterCallbackDelegate.generated.h"

class AActor;
class AORSplineTriggerVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FORSplineTriggerVolumeEnterCallback, AActor, SourceActor, AORSplineTriggerVolume*, SourceVolume);

