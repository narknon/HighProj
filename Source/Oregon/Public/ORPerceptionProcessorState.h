#pragma once
#include "CoreMinimal.h"
#include "EORAIHostileAwareness.h"
#include "ORPerceptionProcessorState.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FORPerceptionProcessorState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EORAIHostileAwareness CurrentHostileAwareness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentStateEnterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastHostileStimulusTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSentNoStimuliEvent;
    
    FORPerceptionProcessorState();
};

