#pragma once
#include "CoreMinimal.h"
#include "AIProximityEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OREGON_API FAIProximityEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Requestor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ProximityActor;
    
    FAIProximityEvent();
};

