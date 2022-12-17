#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/BillboardComponent.h"
#include "GameplayTagContainer.h"
#include "OREnemySpawningData.h"
#include "ORAuxillaryActorSpawnedDelegateDelegate.h"
#include "OREnemySpawnedDelegateDelegate.h"
#include "ORSpawningFinishedDelegateDelegate.h"
#include "ORSpawnPointComponent.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORSpawnPointComponent : public UBillboardComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOREnemySpawnedDelegate OnEnemySpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAuxillaryActorSpawnedDelegate OnAuxillaryActorSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORSpawningFinishedDelegate OnSpawningFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSpawnQueueActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpawnPointTag;
    
public:
    UORSpawnPointComponent();
    UFUNCTION(BlueprintCallable)
    void StopSpawning();
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnPointTag(const FGameplayTag NewSpawnPointTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpawnQueueActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingEnemiesToSpawnCount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyDelayFX();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSpawnFX();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateDelayFX();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StopSpawning();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginSpawning();
    
    UFUNCTION(BlueprintCallable)
    void AddActorToSpawnQueue(const TSubclassOf<AActor> AICharacterClass, const float Delay, const FOREnemySpawningData& SpawningData);
    
};

