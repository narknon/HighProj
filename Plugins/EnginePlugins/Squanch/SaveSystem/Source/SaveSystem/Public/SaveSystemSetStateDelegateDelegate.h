#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EState.h"
#include "SaveSystemSetStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSaveSystemSetStateDelegate, FGameplayTag, InTag, EState, InNewState);

