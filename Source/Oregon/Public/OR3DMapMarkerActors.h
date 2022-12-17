#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OR3DMapMarkerActors.generated.h"

class AOR3DMapMarker;

USTRUCT(BlueprintType)
struct OREGON_API FOR3DMapMarkerActors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MarkerTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOR3DMapMarker*> MarkerActors;
    
    FOR3DMapMarkerActors();
};

