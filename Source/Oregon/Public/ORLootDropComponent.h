#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "LootDropInfo.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ORLootDropComponent.generated.h"

class UObject;
class AActor;
class AORCharacter;
class UORLootTableBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORLootDropComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsingLootTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpecifiedDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLootDropInfo DefaultDropInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FLootDropInfo> OverrideDropInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORLootTableBase> TableReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LootSpawnLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LootSpawnForceDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootSpawnForceMultiplier;
    
    UPROPERTY(EditAnywhere)
    int64 MaxLootToDrop;
    
    UORLootDropComponent();
    UFUNCTION(BlueprintCallable)
    void TryLootSpawnOnDied(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable)
    void TryLootSpawn();
    
    UFUNCTION(BlueprintCallable)
    bool Setup(bool IsUsingLootTable, TSubclassOf<AActor> SpecificDropItem, TSubclassOf<UORLootTableBase> LootTable, FVector LootSpawnOffset, FVector LootSpawnForce, float LootSpawnForcePower);
    
};

