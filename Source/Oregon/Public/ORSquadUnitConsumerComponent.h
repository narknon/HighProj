#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ORSquadUnitConsumerComponent.generated.h"

class UObject;
class UGameplayEffect;
class AORCharacter;
class AORAICharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORSquadUnitConsumerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QueueRefreshInteval;
    
    UPROPERTY(EditAnywhere)
    uint16 MaxMembersInQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ExclusionQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ConsumedMemberGrantedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsiderReachable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReachableOffset;
    
    UORSquadUnitConsumerComponent();
    UFUNCTION(BlueprintCallable)
    void ResetConsumedSquadMember(AORAICharacter* SquadMember);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnConsumedMemberDied(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AORAICharacter*> GetSquadMemberQueue();
    
    UFUNCTION(BlueprintCallable)
    AORAICharacter* GetNextSquadMember();
    
    UFUNCTION(BlueprintCallable)
    AORAICharacter* ConsumeSquadMember(AORAICharacter* SquadMember);
    
    UFUNCTION(BlueprintCallable)
    AORAICharacter* ConsumeNextSquadMember();
    
};

