#pragma once
#include "CoreMinimal.h"
#include "EncounterBeginDelegateDelegate.generated.h"

class AOREncounterManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEncounterBeginDelegate, AOREncounterManager*, Encounter);

