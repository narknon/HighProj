#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PlayerGroundPoundTargetUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerGroundPoundTargetUpdated, FHitResult, HitResult);

