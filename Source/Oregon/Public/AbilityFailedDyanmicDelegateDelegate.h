#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityFailedDyanmicDelegateDelegate.generated.h"

class UGameplayAbility;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAbilityFailedDyanmicDelegate, const UGameplayAbility*, Ability, const FGameplayTagContainer&, FailureReason);

