#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORFireableInventoryItem.h"
#include "UObject/NoExportTypes.h"
#include "PheromonesAppliedSignatureDelegate.h"
#include "GameplayTagContainer.h"
#include "ORCreatureWeaponItem.generated.h"

class AActor;
class ACharacter;
class AORAICreatureMinionCharacter;
class AORCreaturePheromoneMarker;
class AORCreatureMinionItem;

UCLASS(Blueprintable)
class OREGON_API AORCreatureWeaponItem : public AORFireableInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPheromonesAppliedSignature OnPheromonesApplied;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AORCreatureMinionItem*> CreatureMinionItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AORCreaturePheromoneMarker*> PheromoneMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORCreaturePheromoneMarker* DefendLocationPheromoneMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORCreaturePheromoneMarker> PheromoneMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* ParentCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORAICreatureMinionCharacter* TargetRecallMinion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MinionFireMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimedMinionSlot;
    
public:
    AORCreatureWeaponItem();
    UFUNCTION(BlueprintCallable)
    void UpdateDefendLocationPheromones(const FVector& DefendTaskLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetRecallMinionLocked(const bool IsLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetRecallMinion(AORAICreatureMinionCharacter* NewTargetRecallMinion);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostTargetRecallMinionChanged(const AORAICreatureMinionCharacter* OldTargetRecallMinion, const AORAICreatureMinionCharacter* NewTargetRecallMinion);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsMinionSlotLoaded(int32 MinionSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORAICreatureMinionCharacter* GetTargetRecallMinion() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyPheromones(AActor* PheromoneTarget);
    
};

