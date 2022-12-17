#pragma once
#include "CoreMinimal.h"
#include "KnifeyTalkingStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKnifeyTalkingStateChanged, bool, bIsTalking);

