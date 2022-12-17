#pragma once
#include "CoreMinimal.h"
#include "OnOverlapEndDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOverlapEnd, AActor*, OverlappingActor);

