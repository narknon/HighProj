#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeUVTransform.h"
#include "SkelMeshMergeUVTransformMapping.generated.h"

USTRUCT(BlueprintType)
struct FSkelMeshMergeUVTransformMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeUVTransform> UVTransformsPerMesh;
    
    OREGON_API FSkelMeshMergeUVTransformMapping();
};

