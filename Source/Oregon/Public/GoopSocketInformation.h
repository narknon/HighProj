#pragma once
#include "CoreMinimal.h"
#include "GoopSocketInformation.generated.h"

USTRUCT(BlueprintType)
struct FGoopSocketInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumTimesHit;
    
    OREGON_API FGoopSocketInformation();
};

