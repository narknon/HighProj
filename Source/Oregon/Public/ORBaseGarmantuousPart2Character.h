#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORAIBossCharacter.h"
#include "ORGarmProjectileSourceInterface.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AORBaseGarmantuousPart2CharacterStunResult.h"
#include "ORBaseGarmantuousPart2Character_StunDamageThresholdReachedDelegate.h"
#include "ORBaseGarmantuousPart2Character.generated.h"

class UActorComponent;
class AActor;
class UGameplayEffect;
class UAkAudioEvent;
class UNiagaraSystem;
class AORTriggerVolume;

UCLASS(Blueprintable)
class OREGON_API AORBaseGarmantuousPart2Character : public AORAIBossCharacter, public IORGarmProjectileSourceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer VulnerableIfStunnedGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMitigationIfNotStunned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusStunDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StaggerDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> StaggerGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StunAlwaysDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StunIfStaggeredDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> StunGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DefaultFireVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultFireSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORTriggerVolume* ActiveChargeArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSlideGunkActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDeactivateSlideGunkWhenStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsStaggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsStunned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORBaseGarmantuousPart2CharacterStunResult StunResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTaunting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinOutVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedToRotationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StunRotationDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StaggerDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StunWeakpointDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunWeakpointDamageThreshold;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORBaseGarmantuousPart2Character_StunDamageThresholdReached OnStunDamageThesholdReached;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LeapTargetLocation;
    
    AORBaseGarmantuousPart2Character();
    UFUNCTION(BlueprintCallable)
    void TriggerStun(AActor* Damager, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void TriggerStagger(AActor* Damager, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldContinueStun();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlideGunkDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlideGunkActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsStunWeakpointComponent(UActorComponent* HitComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsArmClogged(int32 ArmIndex);
    
    UFUNCTION(BlueprintCallable)
    AORBaseGarmantuousPart2CharacterStunResult GetStunExpiredResult();
    
    UFUNCTION(BlueprintCallable)
    void EndStun(AORBaseGarmantuousPart2CharacterStunResult Result);
    
    UFUNCTION(BlueprintCallable)
    void EndStagger();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateSlideGunk();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateStunWeakpoint(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ActivateSlideGunk();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateChargeFX(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateChargeCollision(bool bEnable);
    
    
    // Fix for true pure virtual functions not being implemented
};

