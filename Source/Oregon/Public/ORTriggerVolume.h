#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORTriggerVolumeLeaveCallbackDelegate.h"
#include "ORTriggerVolumeEnterCallbackDelegate.h"
#include "ORTriggerVolume.generated.h"

class AORTriggerVolume;
class UORTriggerVolumeComponent;

UCLASS(Blueprintable)
class OREGON_API AORTriggerVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* VolumeComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORTriggerVolumeEnterCallback OnEnterEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORTriggerVolumeLeaveCallback OnLeaveEvent;
    
    AORTriggerVolume();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeave(AActor* SourceActor, AORTriggerVolume* SourceVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnter(AActor* SourceActor, AORTriggerVolume* SourceVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled();
    
    UFUNCTION(BlueprintCallable)
    void HandleLeft(AActor* Actor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleEntered(AActor* Actor, int32 VolumeIndex);
    
};

