#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ColorMaterialParamOverride.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FColorMaterialParamOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ParameterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ParameterValueDeviation;
    
    FColorMaterialParamOverride();
};

