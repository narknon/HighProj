#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORGameplayAbility.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ORGameplayAbility_GoopHealProj.generated.h"

class ASQProjectile;
class AORCharacter;
class UParticleSystem;

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_GoopHealProj : public UORGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASQProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASQProjectile> MeleeMerkProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MeleeMerkTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GooDestructionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BonesForGooRemoval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORCharacter* HitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorRemovalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle RipGoopOffTimerHandle;
    
public:
    UORGameplayAbility_GoopHealProj();
private:
    UFUNCTION(BlueprintCallable)
    void SuctionStopped();
    
    UFUNCTION(BlueprintCallable)
    void RipGoopOffCallback();
    
};

