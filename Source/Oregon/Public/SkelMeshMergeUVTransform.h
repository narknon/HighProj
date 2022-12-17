#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkelMeshMergeUVTransform.generated.h"

USTRUCT(BlueprintType)
struct FSkelMeshMergeUVTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> UVTransforms;
    
    OREGON_API FSkelMeshMergeUVTransform();
};

