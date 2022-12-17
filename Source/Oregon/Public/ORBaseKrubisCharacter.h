#pragma once
#include "CoreMinimal.h"
#include "ORAIBossCharacterChargeInterface.h"
#include "ORAIBossCharacter.h"
#include "UObject/NoExportTypes.h"
#include "ORBaseKrubisCharacter.generated.h"

class UAkAudioEvent;
class UNiagaraComponent;
class AOREncounterManager;
class UORGameplayEffectVolumeComponent;
class AORKrubisJumpPointController;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class OREGON_API AORBaseKrubisCharacter : public AORAIBossCharacter, public IORAIBossCharacterChargeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartKrubisTunneling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopKrubisTunneling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector UndergroundMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AbovegroundMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KrubisTrapControllerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORGameplayEffectVolumeComponent* ChargeAttackDamageArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* HeadSpinChargeVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* FeetSpinChargeVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RightToeJetVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LeftToeJetVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RightHeelJetVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LeftHeelJetVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DivesLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RampsOnCurrently;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool JustMovedUnderground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IsDiggingUnderGroundBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOREncounterManager* EncounterControllerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnWaveActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllAddsHaveSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunningSpearAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORKrubisJumpPointController* KrubisPointController;
    
public:
    AORBaseKrubisCharacter();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleSuctionFX(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshForTunneling(bool bGoingUnderGround);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTunnelExitedCollision(const FVector& Location, const FVector& Normal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTunnelEnteredCollision(const FVector& Location, const FVector& Normal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IncreaseKrubisStats();
    
    UFUNCTION(BlueprintCallable)
    bool HasEnemyWaveCompleted();
    
    UFUNCTION(BlueprintCallable)
    void HandleChargeMove(const FVector& PrevLocation, const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableJetBootsFX(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    bool CanResurface();
    
    UFUNCTION(BlueprintCallable)
    void CancelTunnelingCollision();
    
    UFUNCTION(BlueprintCallable)
    bool CanAttackFromUnderGround();
    
    UFUNCTION(BlueprintCallable)
    void CalcTunnelingCollision(const FVector& Start, const FVector& End, float Speed, float DigOffsetDistance);
    
    
    // Fix for true pure virtual functions not being implemented
};

