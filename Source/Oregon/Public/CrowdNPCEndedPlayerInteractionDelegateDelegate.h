#pragma once
#include "CoreMinimal.h"
#include "CrowdNPCEndedPlayerInteractionDelegateDelegate.generated.h"

class AORNPCCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCrowdNPCEndedPlayerInteractionDelegate, AORNPCCharacter*, NPC);

