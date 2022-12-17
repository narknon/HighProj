#pragma once
#include "CoreMinimal.h"
#include "FloatMaterialParamOverride.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FFloatMaterialParamOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParameterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParameterValueDeviation;
    
    FFloatMaterialParamOverride();
};

