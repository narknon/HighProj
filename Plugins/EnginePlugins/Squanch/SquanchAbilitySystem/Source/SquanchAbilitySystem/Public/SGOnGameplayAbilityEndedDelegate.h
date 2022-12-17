#pragma once
#include "CoreMinimal.h"
#include "SGOnGameplayAbilityEndedDelegate.generated.h"

class UGameplayAbility;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSGOnGameplayAbilityEnded, UGameplayAbility*, Ability);

