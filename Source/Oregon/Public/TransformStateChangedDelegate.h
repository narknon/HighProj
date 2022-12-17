#pragma once
#include "CoreMinimal.h"
#include "ETransformState.h"
#include "TransformStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTransformStateChanged, TEnumAsByte<ETransformState>, NewState);

