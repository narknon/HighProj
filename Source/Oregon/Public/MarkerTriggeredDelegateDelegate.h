#pragma once
#include "CoreMinimal.h"
#include "MarkerTriggeredDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMarkerTriggeredDelegate, const FString&, MarkerTag);

