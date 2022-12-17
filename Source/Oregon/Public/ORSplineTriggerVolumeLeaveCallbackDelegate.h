#pragma once
#include "CoreMinimal.h"
#include "ColorMaterialParamOverride.h"
#include "ORSplineTriggerVolumeLeaveCallbackDelegate.generated.h"

class AActor;
class AORSplineTriggerVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FORSplineTriggerVolumeLeaveCallback, AActor, OnLeaveEvent, AORSplineTriggerVolume*, SourceVolume, AActor*, SourceActor);

