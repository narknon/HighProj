#pragma once
#include "CoreMinimal.h"
#include "ORInnerOuterVolumeInterpolatorCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FORInnerOuterVolumeInterpolatorCallback, float, InterpolatedValue);

