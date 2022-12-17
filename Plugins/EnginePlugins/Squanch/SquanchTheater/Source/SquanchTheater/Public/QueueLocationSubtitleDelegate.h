#pragma once
#include "CoreMinimal.h"
#include "QueueLocationSubtitleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQueueLocationSubtitle, const FText&, Subtitles, float, CueDuration);

