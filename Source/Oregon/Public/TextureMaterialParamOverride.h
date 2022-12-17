#pragma once
#include "CoreMinimal.h"
#include "TextureMaterialParamOverride.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct OREGON_API FTextureMaterialParamOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* ParameterValue;
    
    FTextureMaterialParamOverride();
};

