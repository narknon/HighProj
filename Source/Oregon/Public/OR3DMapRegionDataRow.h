#pragma once
#include "CoreMinimal.h"
#include "OR3DMapVolumeMeshLayer.h"
#include "Engine/DataTable.h"
#include "EORHunterChallengeMapArea.h"
#include "OR3DMapRegionDataRow.generated.h"

USTRUCT(BlueprintType)
struct FOR3DMapRegionDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReadableRegionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDiscoverable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOR3DMapVolumeMeshLayer> MeshLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORHunterChallengeMapArea HunterChallengeArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSingleMasterMeshWithRegionMaterialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegionMaterialID;
    
    OREGON_API FOR3DMapRegionDataRow();
};

