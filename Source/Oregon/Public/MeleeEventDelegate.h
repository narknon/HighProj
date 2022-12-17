#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MeleeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMeleeEvent, FGameplayTag, Event);

