#pragma once
#include "CoreMinimal.h"
#include "STInterruptEvent.h"
#include "InterruptEventContainer.generated.h"

USTRUCT(BlueprintType)
struct FInterruptEventContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSTInterruptEvent> InterruptEvents;
    
    SQUANCHTHEATER_API FInterruptEventContainer();
};

