#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OnTweenCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTweenComplete, const FHitResult&, ImpactResult);

