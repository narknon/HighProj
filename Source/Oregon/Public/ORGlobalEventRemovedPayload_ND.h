#pragma once
#include "CoreMinimal.h"
#include "ORGlobalEventPayload.h"
#include "ORGlobalEventRemovedPayload_ND.generated.h"

class AActor;

UCLASS(Blueprintable)
class OREGON_API UORGlobalEventRemovedPayload_ND : public UORGlobalEventPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorOverride;
    
    UORGlobalEventRemovedPayload_ND();
};

