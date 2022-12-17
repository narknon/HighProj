#pragma once
#include "CoreMinimal.h"
#include "EncounterEndDelegateDelegate.generated.h"

class AOREncounterManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEncounterEndDelegate, const bool, EncounterComplete, AOREncounterManager*, Encounter);

