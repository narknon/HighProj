#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolumeEnterCallbackDelegate.generated.h"

class AActor;
class AORTriggerVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FORTriggerVolumeEnterCallback, AActor, OnEnterEvent, AORTriggerVolume*, SourceVolume);

