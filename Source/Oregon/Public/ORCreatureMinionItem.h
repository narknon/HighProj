#pragma once
#include "CoreMinimal.h"
#include "SQInventoryItem.h"
#include "ORCreatureMinionItem.generated.h"

class AActor;
class AORAICreatureMinionCharacter;
class AORCreatureWeaponItem;
class AORCreaturePheromoneMarker;

UCLASS(Blueprintable)
class OREGON_API AORCreatureMinionItem : public ASQInventoryItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORCreatureWeaponItem* CreatureWeaponItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORAICreatureMinionCharacter* CreatureMinionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetedActor;
    
public:
    AORCreatureMinionItem();
    UFUNCTION(BlueprintCallable)
    void SetCreatureWeaponItem(AORCreatureWeaponItem* NewCreatureWeaponItem);
    
    UFUNCTION(BlueprintCallable)
    void SetCreatureMinionCharacter(AORAICreatureMinionCharacter* NewCreatureMinionCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReloadMinion();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMinionTaskComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnCreaturePheromonesApplied(AORCreaturePheromoneMarker* PheromoneMarker);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORCreatureWeaponItem* GetCreatureWeaponItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORAICreatureMinionCharacter* GetCreatureMinionCharacter() const;
    
};

