#pragma once
#include "CoreMinimal.h"
#include "SQActiveInterface.h"
#include "SQResource_AmmoPool.h"
#include "Engine/EngineTypes.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "EResourceState.h"
#include "EInventoryTransactionType.h"
#include "SQResource_RechargeableAmmoPool.generated.h"

class ASQInventoryItem;
class UAkAudioEvent;

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API USQResource_RechargeableAmmoPool : public USQResource_AmmoPool, public ISQActiveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesRegenWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesPlayLowAmmoSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LowAmmoSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AmmoGainPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EquippedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnequippedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LowResourceDivisor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ActivationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AmmoGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimePassed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoRefreshRate;
    
public:
    USQResource_RechargeableAmmoPool();
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemEvent(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireModeTag, TEnumAsByte<EInventoryTransactionType> TransactionType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalResourceAmount();
    
    UFUNCTION(BlueprintCallable)
    EResourceState GetState();
    
    
    // Fix for true pure virtual functions not being implemented
};

