#pragma once
#include "CoreMinimal.h"
#include "ORInnerOuterVolumeInterpolatorComponentCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FORInnerOuterVolumeInterpolatorComponentCallback, float, InterpolatedValue);

