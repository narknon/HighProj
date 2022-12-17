#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "OREliteArmorComponent.generated.h"

class UObject;
class USkeletalMeshComponent;
class AORCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UOREliteArmorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimaryFireDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RechargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RechargeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ArmorMesh;
    
    UOREliteArmorComponent();
    UFUNCTION(BlueprintCallable)
    void StartRecharge();
    
    UFUNCTION(BlueprintCallable)
    void OnDied(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmorRechargeStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmorRechargeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmorHit(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmorHealthChanged(float HealthPCT);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmorDestroyed();
    
    UFUNCTION(BlueprintCallable)
    float MitigateDamage(UObject* Damager, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecharging() const;
    
    UFUNCTION(BlueprintCallable)
    void InitArmorMesh(USkeletalMeshComponent* InMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorHealthPCT();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorDestroyedPCT();
    
};

