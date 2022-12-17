#pragma once
#include "CoreMinimal.h"
#include "ORAIMainTargetActorChangeDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FORAIMainTargetActorChange, AActor*, OldMainTarget, AActor*, NewMainTarget);

