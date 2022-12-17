#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SequenceInterrupedDelegateDelegate.generated.h"

class ULevelSequence;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSequenceInterrupedDelegate, FGameplayTag, EventTag, ULevelSequence*, ExitSequence);

