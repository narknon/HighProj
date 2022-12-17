#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "AIProximityEvent.h"
#include "AISense_Proximity.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable)
class OREGON_API UAISense_Proximity : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIProximityEvent> RegisteredEvents;
    
    UAISense_Proximity();
    UFUNCTION(BlueprintCallable)
    static void RequestProximityEvent(APawn* Requestor, AActor* ProximityActor);
    
};

