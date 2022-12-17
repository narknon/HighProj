#pragma once
#include "CoreMinimal.h"
#include "ORTargetRememberSetupData.generated.h"

USTRUCT(BlueprintType)
struct FORTargetRememberSetupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRememberForever;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetRememberTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTargetProximityMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetProximityMemoryDistance;
    
    OREGON_API FORTargetRememberSetupData();
};

