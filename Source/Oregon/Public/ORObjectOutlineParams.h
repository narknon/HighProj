#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ORObjectOutlineParams.generated.h"

USTRUCT(BlueprintType)
struct FORObjectOutlineParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float EmissiveStrength;
    
    OREGON_API FORObjectOutlineParams();
};

