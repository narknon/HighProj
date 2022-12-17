#pragma once
#include "CoreMinimal.h"
#include "BoolMaterialParamOverride.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FBoolMaterialParamOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ParameterValue;
    
    FBoolMaterialParamOverride();
};

