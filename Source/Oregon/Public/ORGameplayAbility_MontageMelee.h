#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORGameplayAbility_Montage.h"
#include "Engine/EngineTypes.h"
#include "ORGlobalEventListener.h"
#include "ORGameplayAbility_MontageMelee.generated.h"

class AActor;
class UGameplayEffect;
class UORGlobalEventPayload;

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_MontageMelee : public UORGameplayAbility_Montage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GameEffectClassesOnHitTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FORGlobalEventListener HitEventListener;
    
public:
    UORGameplayAbility_MontageMelee();
    UFUNCTION(BlueprintCallable)
    void OnMeleeAttackHit(const UORGlobalEventPayload* EventData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ProcessMeleeAttackHit(AActor* Instigator, const FHitResult& HitResult);
    
};

