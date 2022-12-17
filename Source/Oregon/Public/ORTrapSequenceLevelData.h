#pragma once
#include "CoreMinimal.h"
#include "ORTrapSequenceLevelData.generated.h"

USTRUCT(BlueprintType)
struct FORTrapSequenceLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SequenceNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RunSpecifiedTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrapStartDelayOverride;
    
    OREGON_API FORTrapSequenceLevelData();
};

