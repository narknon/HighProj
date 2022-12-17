#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORAmbienceTriggerVolume.generated.h"

class UAkStateValue;
class UORTriggerVolumeComponent;

UCLASS(Blueprintable)
class AORAmbienceTriggerVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* TriggerComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AmbienceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkStateValue> OverrideEnter_State;
    
    AORAmbienceTriggerVolume();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerComponent_OnLeft(AActor* OtherActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void TriggerComponent_OnEntered(AActor* OtherActor, int32 VolumeIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UORTriggerVolumeComponent* GetTriggerComponent() const;
    
};

