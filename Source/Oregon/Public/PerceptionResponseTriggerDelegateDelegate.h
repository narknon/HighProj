#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "EORAIHostileAwareness.h"
#include "PerceptionResponseTriggerDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPerceptionResponseTriggerDelegate, AActor*, Actor, FAIStimulus, Stimulus, EORAIHostileAwareness, ProcessorHostileAwareness);

