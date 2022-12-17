#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORMusicTriggerVolume.generated.h"

class UAkStateValue;
class UORTriggerVolumeComponent;

UCLASS(Blueprintable)
class OREGON_API AORMusicTriggerVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* TriggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkStateValue> CurrentLevel;
    
public:
    AORMusicTriggerVolume();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerComponent_OnLeft(AActor* OtherActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void TriggerComponent_OnEntered(AActor* OtherActor, int32 VolumeIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UORTriggerVolumeComponent* GetTriggerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAkStateValue> GetLevelMusicState() const;
    
};

