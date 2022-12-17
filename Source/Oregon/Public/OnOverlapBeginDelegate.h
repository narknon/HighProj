#pragma once
#include "CoreMinimal.h"
#include "OnOverlapBeginDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOverlapBegin, AActor*, OverlappingActor);

