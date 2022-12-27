#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORAICharacter.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DifficultyFloat -FallbackName=DifficultyFloat
#include "GameplayTagContainer.h"
#include "Engine/EngineTypes.h"
#include "NipulonCloneEventDelegate.h"
#include "CustomEngine/DifficultyFloat.h"
#include "ORNipulonCloneMaster.generated.h"

class UGameplayEffect;
class UAkAudioEvent;
class USceneComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class USkeletalMeshComponent;
class AORAIBossCharacter;
class UORAkComponent;
class AORProjectile;
class UORGlobalEventPayload;
class UMaterialInterface;
class UAnimMontage;
class USphereComponent;
class UParticleSystem;
class URotatingMovementComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class OREGON_API AORNipulonCloneMaster : public AORAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNipulonCloneEvent OnNipulonCloneSplitComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNipulonCloneEvent OnNipulonCloneBattleComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAkComponent* ORAk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat RingFastShuffleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat RingFastShuffleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat RingSlowShuffleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat RingSlowShuffleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat RingWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat RingWaitTimeDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat SphereFastShuffleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat SphereFastShuffleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat SphereSlowShuffleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat SphereSlowShuffleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat SphereWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat SphereWaitTimeDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CloneCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClonesFacePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CloneAnimBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CloneGunStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CloneGunSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORProjectile> CloneProjectileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CloneFiringMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CloneFireEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CloneFiringSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloneFiringSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CloneMuzzleFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CloneLaserBeamActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> LaserTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> LaserDamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat CloneFireRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloneClosestToPlayerFires;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneFireAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClonesCanRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneRespawnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneHueShiftAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneHueShiftMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneHueShiftMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CloneCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NS_CloneDeathParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NS_CloneBlurParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneDissolveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneBlurTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneBlurLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CloneMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CloneTrailMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CloneSplitMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* CloneTrailParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CloneFXSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CloneJumpsPerShuffle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneJumpDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneFlySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClonePauseWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> CloneSplitAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneSplitDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneSplitLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneSplitRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CloneSphereRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CloneSpherePivotTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneSphereFollowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneSphereSpinDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneSphereShuffleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneRingHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneRingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneRingFollowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CloneRingHitsToComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneRingShuffleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneRingWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CloneRingRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CloneRingPivotTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneMobBoundsExtentX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloneMobBoundsExtentY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> Details_CloneSceneComponentArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> Details_CloneMeshComponentArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> Details_CloneMeshSmudgeComponentArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> Details_CloneDeathEffectArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> Details_CloneBlurEffectArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URotatingMovementComponent* RotatingMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> CloneSplitPoints;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AORAIBossCharacter> RealNipulonRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereBlockingCollision;
    
public:
    AORNipulonCloneMaster();
    UFUNCTION(BlueprintCallable)
    void ToggleLaserBeams(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void StartCloneSphereSplit();
    
    UFUNCTION(BlueprintCallable)
    void StartCloneSphere();
    
    UFUNCTION(BlueprintCallable)
    void StartCloneShuffle();
    
    UFUNCTION(BlueprintCallable)
    void StartCloneRingSplit();
    
    UFUNCTION(BlueprintCallable)
    void StartCloneRing();
    
    UFUNCTION(BlueprintCallable)
    void StartCloneMob();
    
    UFUNCTION(BlueprintCallable)
    void StartCloneFireLoop();
    
    UFUNCTION(BlueprintCallable)
    void StartCloneCustom();
    
    UFUNCTION(BlueprintCallable)
    void SetRealNipulonRef(AORAIBossCharacter* NipulonCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ResetCloneManager();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMaxDamageDelayFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLasersToggled(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void OnFireEventReceived(const UORGlobalEventPayload* EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloneShuffleJump(USceneComponent* CloneComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloneShuffleEnd(USceneComponent* CloneComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloneShuffleBegin(USceneComponent* CloneComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloneShivaSplit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloneHit(USkeletalMeshComponent* HitClone, bool bWasKilled, bool bIsRealNipulon);
    
    UFUNCTION(BlueprintCallable)
    void JumpToCloneEffect();
    
    UFUNCTION(BlueprintCallable)
    void HealthTankDepleted();
    
    UFUNCTION(BlueprintCallable)
    void HandleCloneFiring();
    
    UFUNCTION(BlueprintCallable)
    void EndDamageFlash();
    
    UFUNCTION(BlueprintCallable)
    void EndCloneFireLoop();
    
};

