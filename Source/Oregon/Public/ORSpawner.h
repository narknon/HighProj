#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "ORSpawnerInterface.h"
#include "GameplayTagContainer.h"
#include "OREnemySpawningData.h"
#include "ORAuxillaryActorSpawnedDelegateDelegate.h"
#include "OREnemySpawnedDelegateDelegate.h"
#include "ORSpawner.generated.h"

class AORAICharacter;
class AORAuxillarySpawnable;
class UBillboardComponent;
class UORSpawnPointComponent;

UCLASS(Blueprintable)
class OREGON_API AORSpawner : public AActor, public IORSpawnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOREnemySpawnedDelegate OnEnemySpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAuxillaryActorSpawnedDelegate OnAuxillaryActorSpawned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpawnPointTagOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSpawnerActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORSpawnPointComponent*> SpawnPointComponents;
    
public:
    AORSpawner();
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnPointFinishedSpawning(UORSpawnPointComponent* SpawnPointComponent);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEnemies();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayPreSpawningFX();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayPostSpawningFX();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UORSpawnPointComponent* GetNextSpawnPointCompToQueue(TSubclassOf<AActor> ActorClass, const float Delay, const FOREnemySpawningData& SpawningData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishPreSpawningFX();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishPostSpawningFX();
    
    UFUNCTION(BlueprintCallable)
    void EnemySpawned(AORAICharacter* Enemy, const FOREnemySpawningData& EnemySpawningData);
    
    UFUNCTION(BlueprintCallable)
    void AuxillaryActorSpawned(AORAuxillarySpawnable* Actor, const FOREnemySpawningData& EnemySpawningData);
    
    
    // Fix for true pure virtual functions not being implemented
};

