#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerFiringEventDelegate.generated.h"

class AActor;
class ASQInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPlayerFiringEvent, ASQInventoryItem*, Item, FGameplayTag, EventTag, FGameplayTag, FireMode, AActor*, Target);

