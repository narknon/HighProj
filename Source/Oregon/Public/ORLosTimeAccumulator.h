#pragma once
#include "CoreMinimal.h"
#include "ORLosTimeAccumulator.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OREGON_API FORLosTimeAccumulator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> SensedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AccumulatedLosTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TickedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHadLosOnLastUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDetected;
    
    FORLosTimeAccumulator();
};

