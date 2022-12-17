#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORAkStateVolume.generated.h"

class UAkStateValue;
class UORTriggerVolumeComponent;

UCLASS(Blueprintable)
class OREGON_API AORAkStateVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* TriggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* EnteredState;
    
public:
    AORAkStateVolume();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerComponent_OnEntered(AActor* OtherActor, int32 VolumeIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UORTriggerVolumeComponent* GetTriggerComponent() const;
    
};

