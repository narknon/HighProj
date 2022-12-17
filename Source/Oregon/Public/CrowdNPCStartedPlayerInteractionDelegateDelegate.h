#pragma once
#include "CoreMinimal.h"
#include "CrowdNPCStartedPlayerInteractionDelegateDelegate.generated.h"

class AORNPCCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCrowdNPCStartedPlayerInteractionDelegate, AORNPCCharacter*, NPC);

