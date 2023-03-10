#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolumeLeaveCallbackDelegate.generated.h"

class AActor;
class AORTriggerVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FORTriggerVolumeLeaveCallback, AActor, OnLeaveEvent, AORTriggerVolume*, SourceVolume);

