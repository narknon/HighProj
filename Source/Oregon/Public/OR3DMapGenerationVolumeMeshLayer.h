#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OR3DMapGenerationVolumeMeshLayer.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FOR3DMapGenerationVolumeMeshLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> GeneratedRegionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GeneratedMeshWorldLocation;
    
    OREGON_API FOR3DMapGenerationVolumeMeshLayer();
};

