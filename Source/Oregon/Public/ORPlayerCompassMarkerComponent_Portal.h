#pragma once
#include "CoreMinimal.h"
#include "ORPlayerCompassMarkerComponent_Standard.h"
#include "ORPlayerCompassMarkerComponent_Portal.generated.h"

class AORStreamingPortal;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORPlayerCompassMarkerComponent_Portal : public UORPlayerCompassMarkerComponent_Standard {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AORStreamingPortal> CachedOtherPortal;
    
public:
    UORPlayerCompassMarkerComponent_Portal();
protected:
    UFUNCTION(BlueprintCallable)
    void OnParentPortalLinkChanged();
    
};

