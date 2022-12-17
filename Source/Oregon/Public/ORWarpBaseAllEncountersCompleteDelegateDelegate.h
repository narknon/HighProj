#pragma once
#include "CoreMinimal.h"
#include "ORWarpBaseAllEncountersCompleteDelegateDelegate.generated.h"

class AORWarpBaseSlot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FORWarpBaseAllEncountersCompleteDelegate, AORWarpBaseSlot*, WarpBaseSlot);

