#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SQFireLoopComponent.h"
#include "Engine/EngineTypes.h"
#include "ItemEventData.h"
#include "EWeaponAbilityFireState.h"
#include "ORFireLoop_WeaponAbility.generated.h"

class ASQFireableInventoryItem;
class UORGameplayEffect;
class UAnimMontage;

UCLASS(Blueprintable)
class OREGON_API UORFireLoop_WeaponAbility : public USQFireLoopComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASQFireableInventoryItem* ParentFireableItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FireStartMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TapFireMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HoldLoopMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HoldFireMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStartFireMontageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TapFirePrefireDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldFirePrefireDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireLoopTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle InternalPhaseTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle FireDelayTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle FireLoopTimeoutTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWeaponAbilityFireState> FireState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORGameplayEffect> SlowGEClass;
    
public:
    UORFireLoop_WeaponAbility();
protected:
    UFUNCTION(BlueprintCallable)
    void ResumeReadiness();
    
    UFUNCTION(BlueprintCallable)
    void HandleItemEvent(TArray<FItemEventData> ActiveItemEvents);
    
    UFUNCTION(BlueprintCallable)
    void FireAbility();
    
    UFUNCTION(BlueprintCallable)
    void FinishBeginPhase();
    
    UFUNCTION(BlueprintCallable)
    void EnableSlow();
    
    UFUNCTION(BlueprintCallable)
    void DisableSlow();
    
};

