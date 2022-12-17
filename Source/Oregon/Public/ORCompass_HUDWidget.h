#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Blueprint/UserWidget.h"
#include "GameplayTagContainer.h"
#include "ORCompass_HUDWidget.generated.h"

class AActor;
class UWorld;
class UORCompassMarker_HudWidget;
class UORScannableComponent;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORCompass_HUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanningInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExplorationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORCompassMarker_HudWidget> MarkerWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Marker_Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORCompassMarker_HudWidget*> MarkerPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<FName, UORCompassMarker_HudWidget*> TrackedActors;
    
public:
    UORCompass_HUDWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateCompassMarkers();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObj"))
    void SetupNewMarker(UWorld* WorldContextObj, AActor* InTrackedActor, bool isCombatMarker, UORScannableComponent* InOptionalScannableComponent, bool bIgnoreDistanceCheck);
    
};

