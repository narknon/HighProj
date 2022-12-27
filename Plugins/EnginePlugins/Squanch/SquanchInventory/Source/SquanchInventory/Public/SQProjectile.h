#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQProjectileImpactInterface.h"
#include "SQInventoryFalloffInterface.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EInventoryFireType.h"
#include "ProjectileSweepShape.h"
#include "SQProjectile.generated.h"

class UObject;
class USQProjectileMovementComponent;
class UItemImpactResult;
class ASQFireableInventoryItem;
class USceneComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API ASQProjectile : public AActor, public ISQProjectileImpactInterface, public ISQInventoryFalloffInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* CollisionShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAlive;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFullyNormalizeShotPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ShotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ShotNumPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag ModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInventoryFireType> FiringType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProjectileSweepShape> CollisionProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseProjectileImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShutdownOnImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemImpactResult* ProjectileImpactResult;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQProjectileMovementComponent* MovementComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShutdownLifespan;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASQFireableInventoryItem> OwningItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEffectsOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectsOffsetLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> EffectsComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoreActors;
    
public:
    ASQProjectile();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetProjectileAimingPoint(const FVector& AimingPoint);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnImpact(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginShutdown(bool bExploded);
    
    UFUNCTION(BlueprintCallable)
    void NotifyImpactedActor(const FHitResult& ImpactResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(FGameplayTag InModeType, ASQFireableInventoryItem* InOwningItem, float MaxTravelDistance, int32 InShotNum, int32 InTotalShots);
    
    UFUNCTION(BlueprintCallable)
    void Impact(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShotNumPct();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShotNum();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetProjectileOwner();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetIgnoredActors();
    
    UFUNCTION(BlueprintCallable)
    void ForceShutdown();
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DestroyAllProjectiles(UObject* WorldContextObject);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearIgnoredActors();
    
    UFUNCTION(BlueprintCallable)
    void Bounced(const FHitResult& ImpactResult, const FVector& OldVelocity);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyImpactEffects(const FHitResult& ImpactResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddIgnoredActor(AActor* ActorToIgnore);
    
    
    // Fix for true pure virtual functions not being implemented
};

