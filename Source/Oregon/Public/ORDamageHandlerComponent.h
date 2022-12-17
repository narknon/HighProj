#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "OnHealthChangedDelegate.h"
#include "ORDamageHandlerComponent.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORDamageHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthChanged HealthChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasPreviouslyDead;
    
public:
    UORDamageHandlerComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealthMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TakeHealing(float Amount, UObject* Damager, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags, const FGameplayEffectSpec& EffectSpec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TakeDamage(float Amount, UObject* Damager, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags, const FGameplayEffectSpec& EffectSpec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BP_GetCurrentHealthMax();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BP_GetCurrentHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DamageAttempted(float Amount, UObject* Damager, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags, const FGameplayEffectSpec& EffectSpec);
    
};

