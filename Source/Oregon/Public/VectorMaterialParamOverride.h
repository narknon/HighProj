#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VectorMaterialParamOverride.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FVectorMaterialParamOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ParameterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ParameterValueDeviation;
    
    FVectorMaterialParamOverride();
};

