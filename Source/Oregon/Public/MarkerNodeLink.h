#pragma once
#include "CoreMinimal.h"
#include "MarkerNodeLink.generated.h"

class AActor;
class UORPlayerCompassMarkerComponent;

USTRUCT(BlueprintType)
struct FMarkerNodeLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> NodeLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkWeight;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UORPlayerCompassMarkerComponent> NodeLinkRuntimeRef;
    
    OREGON_API FMarkerNodeLink();
};

