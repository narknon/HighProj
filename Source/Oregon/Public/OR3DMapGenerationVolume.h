#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolume.h"
#include "OR3DMapGenerationVolumeMeshLayer.h"
#include "Engine/DataTable.h"
#include "OR3DMapGenerationVolume.generated.h"

UCLASS(Blueprintable)
class OREGON_API AOR3DMapGenerationVolume : public AORTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RegionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOR3DMapGenerationVolumeMeshLayer> MeshLayers;
    
    AOR3DMapGenerationVolume();
};

