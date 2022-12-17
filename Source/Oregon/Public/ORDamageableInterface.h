#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Interface.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ORDamageableInterface.generated.h"

class UObject;
class UGameplayEffect;
class UORDamageHandlerComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UORDamageableInterface : public UInterface {
    GENERATED_BODY()
};

class IORDamageableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldBlockDamage(UObject* Damager, const FHitResult& HitResult, float Damage, UPARAM(Ref) FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHealingTaken(UObject* Damager, const FHitResult& HitResult, float Healing, const FGameplayTagContainer& HealingTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDied(UObject* Killer, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDamageTaken(UObject* Damager, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDamageMitigated(UObject* Damager, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDamageBlocked(UObject* Damager, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDamageAttempted(UObject* Damager, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDamageAmplified(UObject* Damager, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ModifyFinalDamage(UObject* Damager, const FHitResult& HitResult, float Damage, UPARAM(Ref) FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ModifyDamage(UObject* Damager, const FHitResult& HitResult, float Damage, UPARAM(Ref) FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasDied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<TSubclassOf<UGameplayEffect>> GetKillerGameplayEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UORDamageHandlerComponent* GetDamageHandler();
    
};

