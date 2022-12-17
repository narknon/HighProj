#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SaveSystemSetStateRawDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSaveSystemSetStateRawDelegate, FGameplayTag, InTag, int32, InNewState);

