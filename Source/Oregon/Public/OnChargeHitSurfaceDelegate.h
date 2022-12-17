#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OnChargeHitSurfaceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChargeHitSurface, const FHitResult&, HitResult);

