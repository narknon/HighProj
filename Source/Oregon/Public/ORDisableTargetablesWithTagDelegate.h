#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ORDisableTargetablesWithTagDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FORDisableTargetablesWithTag, const FGameplayTag, TargetableTag);

