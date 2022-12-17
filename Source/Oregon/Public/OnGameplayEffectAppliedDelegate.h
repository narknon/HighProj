#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "OnGameplayEffectAppliedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameplayEffectApplied, FActiveGameplayEffectHandle, ActiveEffectHandle, FGameplayEffectSpecHandle, EffectSpecHandle);

