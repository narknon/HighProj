#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeUVTransformMapping.h"
#include "SkelMeshMergeSectionMapping_BP.h"
#include "OROnSkeletalMeshMergedDelegate.h"
#include "ORSkeletalMeshMergeParams.generated.h"

class USkeletalMeshComponent;
class USkeleton;

USTRUCT(BlueprintType)
struct FORSkeletalMeshMergeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeSectionMapping_BP> MeshSectionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> MeshesToMerge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StripTopLODS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeedsCpuAccess: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkeletonBefore: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAsync: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnSkeletalMeshMerged MeshFinalizedDelegate;
    
    OREGON_API FORSkeletalMeshMergeParams();
};

