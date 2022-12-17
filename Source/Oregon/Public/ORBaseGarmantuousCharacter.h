#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORAIBossCharacter.h"
#include "ORGarmProjectileSourceInterface.h"
#include "EORGarmWeaponState.h"
#include "EORBaseGarmantuousCharacterLaserState.h"
#include "ORBaseGarmantuousCharacter.generated.h"

class UActorComponent;
class UGameplayEffect;
class UAkAudioEvent;
class UNiagaraComponent;
class UNiagaraSystem;
class USkeletalMeshComponent;
class UORAkComponent;
class UORGarmFlightController;

UCLASS(Blueprintable)
class OREGON_API AORBaseGarmantuousCharacter : public AORAIBossCharacter, public IORGarmProjectileSourceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> CannonMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORGarmFlightController* FlightController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORBaseGarmantuousCharacterLaserState LaserState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LaserStartSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LaserWarningStartSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LaserLoopingSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LaserStopSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DefaultFireVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultFireSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserDamageCooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaserBeamStartParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaserBeamEndParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaserEnvironmentCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaserPlayerCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> LaserDamageGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> TurretsDestroyed;
    
    AORBaseGarmantuousCharacter();
    UFUNCTION(BlueprintCallable)
    void UpdateLasers(USkeletalMeshComponent* Sled, const TArray<FName>& SocketNames, const TArray<UNiagaraComponent*>& LaserVFX, const TArray<UNiagaraComponent*>& LaserImpactVFX, const TArray<UNiagaraComponent*>& LaserWarningVFX, const TArray<UNiagaraComponent*>& LaserWarningImpactVFX, const TArray<UORAkComponent*> LaserAKComponents);
    
    UFUNCTION(BlueprintCallable)
    void SetTurretState(EORGarmWeaponState InTurretState);
    
    UFUNCTION(BlueprintCallable)
    void SetTurretDestroyed(int32 TurretIndex, bool bInDestroyed);
    
    UFUNCTION(BlueprintCallable)
    void SetLaserState(EORBaseGarmantuousCharacterLaserState InLaserState);
    
    UFUNCTION(BlueprintCallable)
    void SetCannonMeshes(const TArray<USkeletalMeshComponent*>& Meshes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTurretDestroyed(int32 TurretIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCannonAttackStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCannonAttackEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UActorComponent*> GetCannonMeshesForSocketType(FName SocketName, bool& Success);
    
    
    // Fix for true pure virtual functions not being implemented
};

