#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORSplineTriggerVolumeLeaveCallbackDelegate.h"
#include "ORSplineTriggerVolumeEnterCallbackDelegate.h"
#include "ORSplineTriggerVolume.generated.h"

class AORSplineTriggerVolume;
class UORSplineTriggerVolumeComponent;

UCLASS(Blueprintable)
class AORSplineTriggerVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORSplineTriggerVolumeComponent* SplineTriggerVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORSplineTriggerVolumeEnterCallback OnEnterEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORSplineTriggerVolumeLeaveCallback OnLeaveEvent;
    
    AORSplineTriggerVolume();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeave(AActor* SourceActor, AORSplineTriggerVolume* SourceVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnter(AActor* SourceActor, AORSplineTriggerVolume* SourceVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled();
    
    UFUNCTION(BlueprintCallable)
    void HandleLeft(AActor* Actor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleEntered(AActor* Actor, int32 VolumeIndex);
    
};

