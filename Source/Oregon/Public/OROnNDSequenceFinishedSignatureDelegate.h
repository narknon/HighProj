#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OROnNDSequenceFinishedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOROnNDSequenceFinishedSignature, const FGameplayTag&, SequenceTag, int32, SequenceIndex);

