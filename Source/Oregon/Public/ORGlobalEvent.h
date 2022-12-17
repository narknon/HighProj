#pragma once
#include "CoreMinimal.h"
#include "ORGlobalEventListener.h"
#include "ORGlobalEvent.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FORGlobalEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORGlobalEventListener> Listeners;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UObject> WorldContext;
    
    OREGON_API FORGlobalEvent();
};

