#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORGlobalEventsSubsystemDeferredData.h"
#include "ORGlobalEvent.h"
#include "ORGlobalEventsSubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGlobalEventsSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FORGlobalEvent> EventsByName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORGlobalEventsSubsystemDeferredData> DeferredData;
    
public:
    UORGlobalEventsSubsystem();
};

