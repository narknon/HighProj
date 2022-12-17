#pragma once
#include "CoreMinimal.h"
#include "ORAIController.h"
#include "Engine/EngineTypes.h"
#include "ORTauntTriggeredDelegateDelegate.h"
#include "ORAIWeaponizedController.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class OREGON_API AORAIWeaponizedController : public AORAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReactCriticalHitThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReactAccumulatedDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTauntWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTauntWaitTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORTauntTriggeredDelegate OnTauntTriggered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreventAttractionPointReuseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle PreventReuseTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TauntTimerHandle;
    
public:
    AORAIWeaponizedController();
    UFUNCTION(BlueprintCallable)
    void TriggerTaunt();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartTauntTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAbilityTargetActor(AActor* NewTargetActor);
    
    UFUNCTION(BlueprintCallable)
    void ResetAttractionPointReuse();
    
    UFUNCTION(BlueprintCallable)
    void PreventAttractionPointReuse();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    AActor* GetAbilityTargetActor() const;
    
};

