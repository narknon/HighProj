#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TargetData.h"
#include "LezduitTargetData.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FLezduitTargetData : public FTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppliedHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult SuppliedHitResult;
    
    FLezduitTargetData();
};

