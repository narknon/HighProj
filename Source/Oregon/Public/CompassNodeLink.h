#pragma once
#include "CoreMinimal.h"
#include "CompassNodeLink.generated.h"

class AORPlayerCompassMarker;

USTRUCT(BlueprintType)
struct FCompassNodeLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AORPlayerCompassMarker> NodeLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkWeight;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AORPlayerCompassMarker> NodeLinkRuntimeRef;
    
    OREGON_API FCompassNodeLink();
};

