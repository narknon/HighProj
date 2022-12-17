#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ORGameplayAbility_HeavyArmor.generated.h"

class UObject;
class UActorComponent;
class AORCharacter;
class UORDamageHandlerComponent_Character;
class AORHealthTankItem;

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_HeavyArmor : public UORGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> ArmorMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideArmorMeshes;
    
    UORGameplayAbility_HeavyArmor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHeavyArmorTookDamage(float HeavyArmorTankHealth, UObject* Damager, AORCharacter* Damaged, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHeavyArmorRestored();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHeavyArmorDestroyed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHealthTankEmptiedListener(UORDamageHandlerComponent_Character* DamageHandler, AORHealthTankItem* HealthTank, float DamageToTank, UObject* Damager, float BaseDamageAmt, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthTankChangedListener(UObject* Damager, AORCharacter* Damaged, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags);
    
public:
    UFUNCTION(BlueprintCallable)
    float GetHeavyArmorTankHealthMax();
    
    UFUNCTION(BlueprintCallable)
    float GetHeavyArmorTankHealth();
    
    UFUNCTION(BlueprintCallable)
    void AICharacterSpawnedFromPool(AORCharacter* SpawnedCharacter);
    
};

