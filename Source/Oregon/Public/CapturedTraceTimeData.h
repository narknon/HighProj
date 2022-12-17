#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CapturedTraceTimeData.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FCapturedTraceTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerEyeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedTime;
    
    FCapturedTraceTimeData();
};

