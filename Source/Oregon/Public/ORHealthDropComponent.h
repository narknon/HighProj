#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ORHealthDropComponent.generated.h"

class UObject;
class AActor;
class AORCharacter;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORHealthDropComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HealthPickupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORCharacter* AttachedCharacter;
    
public:
    UORHealthDropComponent();
protected:
    UFUNCTION(BlueprintCallable)
    AActor* SpawnItem(const FGameplayTag& EnemyTag, const FVector SpawnLocation, const FRotator SpawnOrientation);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedCharacterDied(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachCharacterDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void DropItem(const FGameplayTag& EnemyTag);
    
};

