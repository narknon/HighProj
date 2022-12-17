#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FORGameplayTagChangeState.h"
#include "GameplayTagAddRemoveDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameplayTagAddRemoveDelegate, const FGameplayTag&, Tag, TEnumAsByte<FORGameplayTagChangeState>, TagState);

