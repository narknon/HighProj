#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateColor.h"
#include "EPromptWidgetState.h"
#include "ORMissionWaypoint.generated.h"

class USceneComponent;
class UORTriggerVolumeComponent;
class UORWidget_HUDPrompt;

UCLASS(Blueprintable)
class OREGON_API AORMissionWaypoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchVolumeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ObjectiveTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* SearchAreaVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor OverrideColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideColor;
    
protected:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORWidget_HUDPrompt> CachedWaypointWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPromptWidgetState>, FVector> WidgetOffsetByState;
    
public:
    AORMissionWaypoint();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void HandleSearchAreaLeft(AActor* Actor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleSearchAreaEntered(AActor* Actor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWidgetLocation();
    
};

