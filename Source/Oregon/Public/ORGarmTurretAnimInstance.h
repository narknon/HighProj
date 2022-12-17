#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EORGarmWeaponState.h"
#include "ORGarmTurretAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UORGarmTurretAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EORGarmWeaponState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimVertical;
    
    UORGarmTurretAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetState(EORGarmWeaponState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetDestroyed(bool bInDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestored();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroyed();
    
};

