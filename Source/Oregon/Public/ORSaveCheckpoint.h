#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "GameplayTagContainer.h"
#include "ORSaveCheckpoint.generated.h"

class AActor;
class UORTriggerVolumeComponent;
class UORStreamingAddressBookCheckpointComponent;

UCLASS(Blueprintable)
class OREGON_API AORSaveCheckpoint : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Checkpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CheckpointRegionAddress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* TriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORStreamingAddressBookCheckpointComponent* AddressBookComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceActivateOnBeginPlay;
    
    AORSaveCheckpoint();
    UFUNCTION(BlueprintCallable)
    bool SetAsCurrentCheckpoint();
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlap(AActor* OtherActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoLongerCurrentCheckpoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBecameCurrentCheckpoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentCheckpoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActiveStateChanged(bool bNewState);
    
};

