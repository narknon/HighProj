#pragma once
#include "CoreMinimal.h"
#include "MorphTargetData.generated.h"

USTRUCT(BlueprintType)
struct SQUANCHDEFORMER_API FMorphTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MorphTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MorphTargetBlend;
    
    FMorphTargetData();
};

