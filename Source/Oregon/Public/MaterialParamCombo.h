#pragma once
#include "CoreMinimal.h"
#include "FloatMaterialParamOverride.h"
#include "VectorMaterialParamOverride.h"
#include "ColorMaterialParamOverride.h"
#include "TextureMaterialParamOverride.h"
#include "BoolMaterialParamOverride.h"
#include "MaterialParamCombo.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FMaterialParamCombo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFloatMaterialParamOverride> FloatParameterOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVectorMaterialParamOverride> VectorParameterOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorMaterialParamOverride> ColorParameterOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextureMaterialParamOverride> TextureParameterOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoolMaterialParamOverride> BoolParameterOverrides;
    
    FMaterialParamCombo();
};

