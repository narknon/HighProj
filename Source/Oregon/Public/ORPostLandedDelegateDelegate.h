#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ORPostLandedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FORPostLandedDelegate, TEnumAsByte<EMovementMode>, NewMovementMode, uint8, NewCustomMovement);

