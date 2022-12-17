#pragma once
#include "CoreMinimal.h"
#include "ORTrapTemplateData.h"
#include "EORTrapSequenceRunType.h"
#include "ORTrapSequenceData.generated.h"

USTRUCT(BlueprintType)
struct FORTrapSequenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORTrapTemplateData> Traps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORTrapSequenceRunType TrapActivationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenTrapActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RespectTrapStartDelayTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrapStartDelayOverride;
    
    OREGON_API FORTrapSequenceData();
};

