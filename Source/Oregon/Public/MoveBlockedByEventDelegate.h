#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MoveBlockedByEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMoveBlockedByEvent, const FHitResult&, HitResult);

