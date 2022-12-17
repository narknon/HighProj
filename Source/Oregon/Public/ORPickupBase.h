#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORInteractableObjectInterface.h"
#include "GameplayTagContainer.h"
#include "PickupDelegateDelegate.h"
#include "ORPickupBase.generated.h"

class UAkAudioEvent;
class AORCharacter;
class UORTriggerVolumeComponent;
class UORScannableComponent;
class UStaticMeshComponent;
class UParticleSystem;

UCLASS(Blueprintable)
class AORPickupBase : public AActor, public IORInteractableObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* TriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PickupAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OnPickup_NDEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SaveStateTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupDelegate OnPlayerPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PickupVisualEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseItemPooling;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORScannableComponent* ScannableComponent;
    
public:
    AORPickupBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryPickUp(AORCharacter* PickingUpCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStackCount(int32 Stacks);
    
    UFUNCTION(BlueprintCallable)
    bool ReturnToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedFromPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnedToPool();
    
    UFUNCTION(BlueprintCallable)
    void OnOverlap(AActor* OtherActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleSpawnedFromPool();
    
    UFUNCTION(BlueprintCallable)
    void HandleReturnToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPickUp(AORCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void AttemptPickup(AORCharacter* Character);
    
    
    // Fix for true pure virtual functions not being implemented
};

