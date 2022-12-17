#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EORAICombatBehaviorStates.h"
#include "EORAIHostileAwareness.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ORAIBlackboardLibrary.generated.h"

class UObject;
class AActor;
class AORAIController;
class AORAICharacter;
class UBlackboardComponent;

UCLASS(Blueprintable)
class OREGON_API UORAIBlackboardLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UORAIBlackboardLibrary();
    UFUNCTION(BlueprintCallable)
    static bool SetTargetActorLineOfSightKey(AORAIController* InORAIController, const bool bHasLineOfSight);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTargetActorLastKnownLocationKeyByActor(AORAIController* InORAIController, const AActor* InTargetActor);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTargetActorLastKnownLocationKey(AORAIController* InORAIController, const FVector& LastKnownLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTargetActorKey(AORAIController* InORAIController, AActor* NewTargetActor);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPackLeaderKey(AORAIController* InORAIController, AORAICharacter* PackLeader);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPackLeaderDistanceKey(AORAIController* InORAIController, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPackInTroubleKey(AORAIController* InORAIController, bool bPackInTrouble);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMeanderMoveLocationKey(AORAIController* InORAIController, const FVector& NewMoveLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMeanderDistanceFromAnchorKey(AORAIController* InORAIController, const float NewDistance);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMeanderAnchorLocationKey(AORAIController* InORAIController, const FVector& NewAnchorLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLastPackRepositionTimeKey(AORAIController* InORAIController, float PackLastRepositionTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLastEnemyAliveKey(AORAIController* InORAIController, const bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static bool SetInitialAttractionPointKey(AORAIController* InORAIController, UObject* InitialAttractionPoint);
    
    UFUNCTION(BlueprintCallable)
    static bool SetHitReactDurationKey(AORAIController* InORAIController, const float NewHitReactDuration);
    
    UFUNCTION(BlueprintCallable)
    static bool SetDistanceToTargetKey(AORAIController* InORAIController, float DistanceToTarget);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCurrentHostileAwarenessKey(AORAIController* InORAIController, const EORAIHostileAwareness HostileAwareness);
    
    UFUNCTION(BlueprintCallable)
    static bool SetControllingActorKey(AORAIController* InORAIController, AActor* NewControllingActor);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCombatMoveLocationKey(AORAIController* InORAIController, const FVector& NewAnchorLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCombatDistanceFromAnchorKey(AORAIController* InORAIController, const float NewDistance);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCombatBehaviorSubStateKey(AORAIController* InORAIController, const EORAICombatBehaviorStates NewCombatSubState);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBTBehaviorMeanderKey(AORAIController* InORAIController, const bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBTBehaviorDeadKey(AORAIController* InORAIController, const bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBTBehaviorBaseOverrideKey(AORAIController* InORAIController, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardGameplayTag(UBlackboardComponent* Blackboard, const FName& BBKey, const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAssistanceTargetNeedsAssistanceKey(AORAIController* InORAIController, bool bAssistanceTargetNeedsAssistance);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAssistanceTargetKey(AORAIController* InORAIController, AORAICharacter* AssistanceTarget);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAssistanceTargetEffectRadiusKey(AORAIController* InORAIController, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAssistanceTargetEffectLocationKey(AORAIController* InORAIController, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetTargetActorLastKnownLocationKey(AORAIController* InORAIController, FVector& LastKnownLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetTargetActorKey(const AORAIController* InORAIController, AActor*& OutTargetActor);
    
    UFUNCTION(BlueprintCallable)
    static FString GetSelectorKeyValueAsString(AORAIController* InORAIController, FBlackboardKeySelector BlackboardKey);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPackLeaderDistanceKey(AORAIController* InORAIController, float& Distance);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPackInTroubleKey(AORAIController* InORAIController, bool& bPackInTrouble);
    
    UFUNCTION(BlueprintCallable)
    static bool GetLastPackRepositionTimeKey(AORAIController* InORAIController, float& PackLastRepositionTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGoopTargetKey(const AORAIController* InORAIController, AActor*& OutGoopTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDistanceToTargetKey(AORAIController* InORAIController, float& DistanceToTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCurrentHostileAwarenessKey(AORAIController* InORAIController, EORAIHostileAwareness& HostileAwareness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCombatBehaviorSubStateKey(const AORAIController* InORAIController, EORAICombatBehaviorStates& CombatSubstate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetBlackboardGameplayTag(UBlackboardComponent* Blackboard, const FName& BBKey);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAssistanceTargetKey(AORAIController* InORAIController, AORAICharacter*& AssistanceTarget);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAssistanceTargetEffectRadiusKey(AORAIController* InORAIController, float& Radius);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAssistanceTargetEffectLocationKey(AORAIController* InORAIController, FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static bool ClearTargetActorLastKnownLocationKey(AORAIController* InORAIController);
    
    UFUNCTION(BlueprintCallable)
    static bool ClearMeanderAnchorLocationKey(AORAIController* InORAIController);
    
};

