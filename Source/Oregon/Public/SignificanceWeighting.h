#pragma once
#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "SignificanceWeighting.generated.h"

USTRUCT(BlueprintType)
struct FSignificanceWeighting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat FullTickrateBucket;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat ReducedTickrateBucket;
    
    OREGON_API FSignificanceWeighting();
};

