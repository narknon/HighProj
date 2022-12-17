#pragma once
#include "CoreMinimal.h"
#include "ORWorldSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EFactionTeamIDs.h"
#include "ORAIDirectorSubsystem.generated.h"

class AActor;
class AORAICharacter;
class UORAISquad;

UCLASS(Blueprintable)
class OREGON_API UORAIDirectorSubsystem : public UORWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORAICharacter*> CachedAICharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UORAISquad*> AISquads;
    
public:
    UORAIDirectorSubsystem();
private:
    UFUNCTION(BlueprintCallable)
    void OnAISquadCleared(UORAISquad* AISquad);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorCombatTarget(AActor* TestActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSquareDistanceToNearestEnemyAI(AActor* TestActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORAICharacter* GetNearestAIWithTagsAtAngle(AActor* TestActor, const FGameplayTagContainer& RequireTags, const FGameplayTagContainer& IgnoreTags, const float MaxRange, const FVector ForwardVector, const float TestAngle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORAICharacter* GetNearestAIWithTags(AActor* TestActor, const FGameplayTagContainer& RequireTags, const FGameplayTagContainer& IgnoreTags, const float MaxRange, const FVector ForwardVector, const float TestAngle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UORAISquad* GetNearestAISquad(AActor* TestActor, const float MaxRange, const TEnumAsByte<EFactionTeamIDs> FactionTeamID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORAICharacter* GetNearestAIAtAngle(AActor* TestActor, const float MaxRange, const FVector ForwardVector, const float TestAngle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORAICharacter* GetNearestAI(AActor* TestActor, const float MaxRange, const FVector ForwardVector, const float TestAngle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UORAISquad*> GetAllAISquads() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AORAICharacter*> GetAllAICharacters() const;
    
};

