#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnTweenMoveUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTweenMoveUpdate, const FVector&, PrevLocation, const FVector&, NewLocation);

