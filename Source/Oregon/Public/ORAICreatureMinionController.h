#pragma once
#include "CoreMinimal.h"
#include "ORAIController.h"
#include "Engine/EngineTypes.h"
#include "ORBTOverride.h"
#include "GameplayTagContainer.h"
#include "EORCreatureMinionTask.h"
#include "OnBeginCreatureMinionRecallDelegateDelegate.h"
#include "OnCancelCreatureMinionRecallDelegateDelegate.h"
#include "OnCreatureMinionTaskCompletedDelegateDelegate.h"
#include "ORCreatureMinionTaskChangedDelegateDelegate.h"
#include "ORAICreatureMinionController.generated.h"

class UObject;
class AActor;
class AORCharacter;
class AORCreatureWeaponItem;
class AORCreaturePheromoneMarker;

UCLASS(Blueprintable)
class OREGON_API AORAICreatureMinionController : public AORAIController {
    GENERATED_BODY()
public:
    /*UPROPERTY(BlueprintAssignable, meta=(AllowPrivateAccess=true))
    FOnBeginCreatureMinionRecallDelegate OnBeginCreatureMinionRecall;
    
    UPROPERTY(BlueprintAssignable, meta=(AllowPrivateAccess=true))
    FOnCancelCreatureMinionRecallDelegate OnCancelCreatureMinionRecall;
    
    UPROPERTY(BlueprintAssignable, meta=(AllowPrivateAccess=true))
    FOnCreatureMinionTaskCompletedDelegate OnCreatureMinionTaskCompleted;
    
    UPROPERTY(BlueprintAssignable, meta=(AllowPrivateAccess=true))
    FORCreatureMinionTaskChangedDelegate OnCreatureMinionTaskChanged;*/
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORCreatureWeaponItem* CreatureWeaponItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORCreaturePheromoneMarker* CurrentPheromoneTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORBTOverride RecallTaskBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORBTOverride DefendLocationTaskBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORBTOverride AttackCharacterTaskBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORBTOverride RetrieveTaskBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORCreatureMinionTask CurrentCreatureMinionTask;
    
public:
    AORAICreatureMinionController();
    UFUNCTION(BlueprintCallable)
    void SetCreatureWeaponItem(AORCreatureWeaponItem* NewCreatureWeaponItem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDefendLocationMarkerDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCreaturePheromonesApplied(AORCreaturePheromoneMarker* PheromoneMarker);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttackCharacterTargetDied(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidAttackTarget(AORCharacter* AttackCharacterTarget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRecalling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORCreatureWeaponItem* GetCreatureWeaponItem() const;
    
    UFUNCTION(BlueprintCallable)
    void EndTask();
    
    UFUNCTION(BlueprintCallable)
    void CompleteTask();
    
    UFUNCTION(BlueprintCallable)
    void BeginRetrieveActorTask(AActor* RetrieveTarget);
    
    UFUNCTION(BlueprintCallable)
    void BeginRecallMinionTask(const bool ForcedRecall);
    
    UFUNCTION(BlueprintCallable)
    void BeginDefendLocationTask(AORCreaturePheromoneMarker* DefendLocationMarker);
    
    UFUNCTION(BlueprintCallable)
    void BeginAttackCharacterTask(AORCharacter* AttackCharacterTarget);
    
};

