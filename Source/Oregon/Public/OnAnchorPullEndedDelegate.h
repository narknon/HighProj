#pragma once
#include "CoreMinimal.h"
#include "OnAnchorPullEndedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnchorPullEnded, bool, bCancelled);

