#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "EORAIHostileAwareness.h"
#include "OREnemyPerceptionUpdatedDelegateDelegate.generated.h"

class AActor;
class AORAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOREnemyPerceptionUpdatedDelegate, AORAICharacter*, Enemy, AActor*, Causer, FAIStimulus, Stimulus, EORAIHostileAwareness, AwarenessState);

