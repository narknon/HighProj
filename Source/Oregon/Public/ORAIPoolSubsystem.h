#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORStreamingPreloadInterface.h"
#include "UObject/NoExportTypes.h"
#include "ORAICharacterPool.h"
#include "Engine/EngineTypes.h"
#include "ORAIPoolSubsystem.generated.h"

class AActor;
class APawn;
class AORAICharacter;

UCLASS(Blueprintable)
class OREGON_API UORAIPoolSubsystem : public UWorldSubsystem, public IORStreamingPreloadInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMinAIs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMaxAIs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AORAICharacter>, int32> MinAIsPerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AORAICharacter>, int32> MaxAIsPerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AORAICharacter>, FORAICharacterPool> AICharacterClassToPoolData;
    
public:
    UORAIPoolSubsystem();
    UFUNCTION(BlueprintCallable)
    AORAICharacter* SpawnActorFromPool_BP(TSubclassOf<AORAICharacter> AICharacterClass, FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, APawn* Instigator);
    
    UFUNCTION(BlueprintCallable)
    bool SendActorToPool(AORAICharacter* AICharacter);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveFromPool(AORAICharacter* AICharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldBeginPlay();
    
    
    // Fix for true pure virtual functions not being implemented
};

