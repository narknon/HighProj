#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "SQInventoryFalloffInterface.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "Engine/EngineTypes.h"
#include "SQExplosionActor.generated.h"

class UGameplayEffect;
class UPrimitiveComponent;
class UCameraShakeSourceComponent;

UCLASS(Abstract, Blueprintable)
class SQUANCHINVENTORY_API ASQExplosionActor : public AActor, public ISQInventoryFalloffInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint32 SpawnFrame;
    
    UPROPERTY(EditAnywhere)
    uint32 InitialEffectsSlackFrames;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLOSCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> LOSTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraShakeSourceComponent* CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ExplosionImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ExplosionCharacterLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> InitialExplosionEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> PersistentExplosionEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> ExitEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle LivingTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ExplosionLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ExplosionDeathtime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInheritSpawningFalloff;
    
    ASQExplosionActor();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerExplosionDeath();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldApplyEffects(AActor* OtherActor, UPrimitiveComponent* OtherComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveEffectsForActor(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void RefreshLifetime();
    
    UFUNCTION(BlueprintCallable)
    void OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void FinalizeDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExplosionShutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExplosionDestroy();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExplosionCreated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExplosionAttachedToActor(AActor* ParentAttachment);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AttachParentDied(AActor* AttachParent);
    
    UFUNCTION(BlueprintCallable)
    void AddToLifetime(float AdditionalLifetime);
    
    
    // Fix for true pure virtual functions not being implemented
};

