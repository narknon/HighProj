#pragma once
#include "CoreMinimal.h"
#include "ORGlobalEventListener.h"
#include "ORGlobalEventsSubsystemDeferredData.generated.h"

USTRUCT(BlueprintType)
struct FORGlobalEventsSubsystemDeferredData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORGlobalEventListener Listener;
    
    OREGON_API FORGlobalEventsSubsystemDeferredData();
};

