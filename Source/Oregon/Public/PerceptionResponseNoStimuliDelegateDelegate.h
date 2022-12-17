#pragma once
#include "CoreMinimal.h"
#include "EORAIHostileAwareness.h"
#include "PerceptionResponseNoStimuliDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPerceptionResponseNoStimuliDelegate, EORAIHostileAwareness, ProcessorHostileAwareness, float, TimeSinceLastStimuli);

