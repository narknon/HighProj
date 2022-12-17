#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ORCreaturePheromoneMarker.generated.h"

class UObject;
class AORCharacter;
class AORCreatureWeaponItem;

UCLASS(Blueprintable)
class OREGON_API AORCreaturePheromoneMarker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORCreatureWeaponItem* CreatureWeaponItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PheromoneTime;
    
public:
    AORCreaturePheromoneMarker();
protected:
    UFUNCTION(BlueprintCallable)
    void RemovePheromoneMarker();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTargetCharacterDied(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetActorDestroyed(AActor* DestroyedActor);
    
};

