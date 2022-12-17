#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORStreamingPreloadInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ProjectilePool.h"
#include "Engine/EngineTypes.h"
#include "ORProjectilePoolSubsystem.generated.h"

class AActor;
class APawn;
class ASQProjectile;
class AORProjectile;

UCLASS(Blueprintable)
class OREGON_API UORProjectilePoolSubsystem : public UWorldSubsystem, public IORStreamingPreloadInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMinProjectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMaxProjectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ASQProjectile>, int32> MinProjectilesPerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ASQProjectile>, int32> MaxProjectilesPerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ASQProjectile>, FProjectilePool> ProjectileClassToPoolData;
    
public:
    UORProjectilePoolSubsystem();
    UFUNCTION(BlueprintCallable)
    bool SendActorToPool(AORProjectile* ProjectileActor);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveFromPool(AORProjectile* ProjectileActor);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldBeginPlay();
    
    UFUNCTION(BlueprintCallable)
    AORProjectile* CacheAndCreateProjectile_BP(TSubclassOf<AORProjectile> ProjectileClass, FVector Location, FRotator Rotation, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, APawn* Instigator);
    
    
    // Fix for true pure virtual functions not being implemented
};

