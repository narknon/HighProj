#pragma once
#include "CoreMinimal.h"
#include "PheromonesAppliedSignatureDelegate.generated.h"

class AORCreaturePheromoneMarker;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FPheromonesAppliedSignature, AORCreaturePheromoneMarker*, TaskMarker);

