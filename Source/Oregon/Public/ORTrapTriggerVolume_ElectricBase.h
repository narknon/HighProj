#pragma once
#include "CoreMinimal.h"
#include "ORTrapTriggerVolume.h"
#include "ORTrapTriggerVolume_ElectricBase.generated.h"

class AActor;
class AORTriggerVolume;
class UORTriggerVolumeComponent;

UCLASS(Blueprintable)
class OREGON_API AORTrapTriggerVolume_ElectricBase : public AORTrapTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* WarmupVolumeComponent;
    
    AORTrapTriggerVolume_ElectricBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaveWarmupVolume(AActor* SourceActor, AORTriggerVolume* SourceVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterWarmupVolume(AActor* SourceActor, AORTriggerVolume* SourceVolume);
    
    UFUNCTION(BlueprintCallable)
    void HandleLeftWarmupVolume(AActor* Actor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleEnteredWarmupVolume(AActor* Actor, int32 VolumeIndex);
    
};

