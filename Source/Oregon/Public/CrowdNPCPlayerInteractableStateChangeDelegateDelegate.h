#pragma once
#include "CoreMinimal.h"
#include "CrowdNPCPlayerInteractableStateChangeDelegateDelegate.generated.h"

class AORNPCCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCrowdNPCPlayerInteractableStateChangeDelegate, AORNPCCharacter*, NPC, bool, bNewPlayerInteractableState);

