#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MeshSpecificCombinationConfig.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FMeshSpecificCombinationConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Query;
    
    FMeshSpecificCombinationConfig();
};

