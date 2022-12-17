#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OREnableTargetablesWithTagDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOREnableTargetablesWithTag, const FGameplayTag, TargetableTag);

