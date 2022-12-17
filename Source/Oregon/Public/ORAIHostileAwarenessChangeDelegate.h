#pragma once
#include "CoreMinimal.h"
#include "EORAIHostileAwareness.h"
#include "ORAIHostileAwarenessChangeDelegate.generated.h"

class AORAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FORAIHostileAwarenessChange, AORAIController*, ORAIController, const EORAIHostileAwareness, OldAwareness, const EORAIHostileAwareness, NewAwareness);

