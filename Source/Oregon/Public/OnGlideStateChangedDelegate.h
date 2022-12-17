#pragma once
#include "CoreMinimal.h"
#include "EOregonGlidePhase.h"
#include "OnGlideStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGlideStateChanged, TEnumAsByte<EOregonGlidePhase>, NewGlidePhase);

