#pragma once
#include "CoreMinimal.h"
#include "DeformationAssetInfluenceData.generated.h"

class UDeformationDataAsset;

USTRUCT(BlueprintType)
struct SQUANCHDEFORMER_API FDeformationAssetInfluenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeformationDataAsset* DeformationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Influence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomInfluenceMargin;
    
    FDeformationAssetInfluenceData();
};

