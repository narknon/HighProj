#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORStreamingPreloadInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PickUpItemPool.h"
#include "Engine/EngineTypes.h"
#include "ORPickUpItemPoolSubsystem.generated.h"

class AActor;
class APawn;
class AORPickupBase;

UCLASS(Blueprintable)
class OREGON_API UORPickUpItemPoolSubsystem : public UWorldSubsystem, public IORStreamingPreloadInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMinPickUpItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMaxPickUpItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AORPickupBase>, int32> MinPickUpItemsPerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AORPickupBase>, int32> MaxPickUpItemsPerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AORPickupBase>, FPickUpItemPool> PickUpItemClassToPoolData;
    
public:
    UORPickUpItemPoolSubsystem();
    UFUNCTION(BlueprintCallable)
    bool SendItemToPool(AORPickupBase* PickUpItemActor);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveFromPool(AORPickupBase* PickUpItemActor);
    
    UFUNCTION(BlueprintCallable)
    AORPickupBase* CacheAndCreatePickUpItem_BP(TSubclassOf<AORPickupBase> PickupItemClass, FVector Location, FRotator Rotation, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, APawn* Instigator);
    
    
    // Fix for true pure virtual functions not being implemented
};

