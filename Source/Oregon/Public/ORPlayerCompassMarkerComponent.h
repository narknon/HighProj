#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ORPlayerCompassMarkerComponent.generated.h"

class UORWidget_HUDPrompt;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORPlayerCompassMarkerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkipRelevancyRadius;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORWidget_HUDPrompt> CachedWaypointWidget;
    
    UORPlayerCompassMarkerComponent();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool bNewEnabled);
    
};

