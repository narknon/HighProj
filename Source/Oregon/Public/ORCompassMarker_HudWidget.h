#pragma once
#include "CoreMinimal.h"
#include "ORWidget.h"
#include "ORCompassMarker_HudWidget.generated.h"

class AActor;
class UORScannableComponent;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORCompassMarker_HudWidget : public UORWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCombatMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldIgnoreDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldReturnToPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> TrackedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrackedName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UORScannableComponent> OptionalScannableComponent;
    
public:
    UORCompassMarker_HudWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateTracker();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMarkerMaterial(bool InCombat);
    
    UFUNCTION(BlueprintCallable)
    void StopTracking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMarker(float NewAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideMarker();
    
};

