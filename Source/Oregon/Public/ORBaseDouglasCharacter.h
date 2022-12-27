#pragma once
#include "CoreMinimal.h"
#include "ORAIBossCharacterChargeInterface.h"
#include "ORAIBossCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DifficultyFloat -FallbackName=DifficultyFloat
#include "GameplayTagContainer.h"
#include "CustomEngine/DifficultyFloat.h"
#include "ORBaseDouglasCharacter.generated.h"

class UNiagaraComponent;
class AORDouglasHookPointController;
class UORGameplayEffectVolumeComponent;

UCLASS(Blueprintable)
class OREGON_API AORBaseDouglasCharacter : public AORAIBossCharacter, public IORAIBossCharacterChargeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TriggerMagwallJumpBBKey;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpinAttackBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORGameplayEffectVolumeComponent* ChargeAttackDamageArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeAttackInkRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* RightArmSpinVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* LeftArmSpinVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* FeetSpinVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* JumpingVFX;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat TweenSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORDouglasHookPointController* HookPointController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HitWithDisc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GusDiskHitTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInkShotVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InkShotVelocityReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentInkShotVelocity;
    
public:
    AORBaseDouglasCharacter();
    UFUNCTION(BlueprintCallable)
    void SetUpInkShot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayDouglasDamageVO();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInkShotStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGusDiskHitDouglas();
    
    UFUNCTION(BlueprintCallable)
    bool NextInkShotSetUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MeleeAttackStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChargeShotFired();
    
    
    // Fix for true pure virtual functions not being implemented
};

