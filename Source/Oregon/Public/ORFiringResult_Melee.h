#pragma once
#include "CoreMinimal.h"
#include "SQFiringResultComponent.h"
#include "ORGlobalEventListener.h"
#include "GameplayTagContainer.h"
#include "ORFiringResult_Melee.generated.h"

class UItemImpactResult;
class UORGlobalEventPayload;

UCLASS(Blueprintable)
class OREGON_API UORFiringResult_Melee : public USQFiringResultComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FORGlobalEventListener MeleeEventListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinisherKnockbackForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterHitFreezeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileHitFreezeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemImpactResult* StaticObjectImpactResult;
    
public:
    UORFiringResult_Melee();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMeleeAttack(const UORGlobalEventPayload* EventData);
    
    UFUNCTION(BlueprintCallable)
    void MeleeAttackType(FGameplayTag MeleeType);
    
};

