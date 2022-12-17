#pragma once
#include "CoreMinimal.h"
#include "ORHarvesterTrailData.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FORHarvesterTrailData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    OREGON_API FORHarvesterTrailData();
};

