#pragma once
#include "CoreMinimal.h"
#include "ORPlayerCompassMarkerComponent.h"
#include "MarkerNodeLink.h"
#include "ORPlayerCompassMarkerComponent_Standard.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORPlayerCompassMarkerComponent_Standard : public UORPlayerCompassMarkerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarkerNodeLink> NodeLinks;
    
public:
    UORPlayerCompassMarkerComponent_Standard();
};

