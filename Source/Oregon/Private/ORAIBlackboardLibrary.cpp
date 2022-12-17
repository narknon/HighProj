#include "ORAIBlackboardLibrary.h"

class UObject;
class AActor;
class AORAIController;
class AORAICharacter;
class UBlackboardComponent;

bool UORAIBlackboardLibrary::SetTargetActorLineOfSightKey(AORAIController* InORAIController, const bool bHasLineOfSight) {
    return false;
}

bool UORAIBlackboardLibrary::SetTargetActorLastKnownLocationKeyByActor(AORAIController* InORAIController, const AActor* InTargetActor) {
    return false;
}

bool UORAIBlackboardLibrary::SetTargetActorLastKnownLocationKey(AORAIController* InORAIController, const FVector& LastKnownLocation) {
    return false;
}

bool UORAIBlackboardLibrary::SetTargetActorKey(AORAIController* InORAIController, AActor* NewTargetActor) {
    return false;
}

bool UORAIBlackboardLibrary::SetPackLeaderKey(AORAIController* InORAIController, AORAICharacter* PackLeader) {
    return false;
}

bool UORAIBlackboardLibrary::SetPackLeaderDistanceKey(AORAIController* InORAIController, float Distance) {
    return false;
}

bool UORAIBlackboardLibrary::SetPackInTroubleKey(AORAIController* InORAIController, bool bPackInTrouble) {
    return false;
}

bool UORAIBlackboardLibrary::SetMeanderMoveLocationKey(AORAIController* InORAIController, const FVector& NewMoveLocation) {
    return false;
}

bool UORAIBlackboardLibrary::SetMeanderDistanceFromAnchorKey(AORAIController* InORAIController, const float NewDistance) {
    return false;
}

bool UORAIBlackboardLibrary::SetMeanderAnchorLocationKey(AORAIController* InORAIController, const FVector& NewAnchorLocation) {
    return false;
}

bool UORAIBlackboardLibrary::SetLastPackRepositionTimeKey(AORAIController* InORAIController, float PackLastRepositionTime) {
    return false;
}

bool UORAIBlackboardLibrary::SetLastEnemyAliveKey(AORAIController* InORAIController, const bool Enable) {
    return false;
}

bool UORAIBlackboardLibrary::SetInitialAttractionPointKey(AORAIController* InORAIController, UObject* InitialAttractionPoint) {
    return false;
}

bool UORAIBlackboardLibrary::SetHitReactDurationKey(AORAIController* InORAIController, const float NewHitReactDuration) {
    return false;
}

bool UORAIBlackboardLibrary::SetDistanceToTargetKey(AORAIController* InORAIController, float DistanceToTarget) {
    return false;
}

bool UORAIBlackboardLibrary::SetCurrentHostileAwarenessKey(AORAIController* InORAIController, const EORAIHostileAwareness HostileAwareness) {
    return false;
}

bool UORAIBlackboardLibrary::SetControllingActorKey(AORAIController* InORAIController, AActor* NewControllingActor) {
    return false;
}

bool UORAIBlackboardLibrary::SetCombatMoveLocationKey(AORAIController* InORAIController, const FVector& NewAnchorLocation) {
    return false;
}

bool UORAIBlackboardLibrary::SetCombatDistanceFromAnchorKey(AORAIController* InORAIController, const float NewDistance) {
    return false;
}

bool UORAIBlackboardLibrary::SetCombatBehaviorSubStateKey(AORAIController* InORAIController, const EORAICombatBehaviorStates NewCombatSubState) {
    return false;
}

bool UORAIBlackboardLibrary::SetBTBehaviorMeanderKey(AORAIController* InORAIController, const bool Enable) {
    return false;
}

bool UORAIBlackboardLibrary::SetBTBehaviorDeadKey(AORAIController* InORAIController, const bool Enable) {
    return false;
}

bool UORAIBlackboardLibrary::SetBTBehaviorBaseOverrideKey(AORAIController* InORAIController, bool Enable) {
    return false;
}

void UORAIBlackboardLibrary::SetBlackboardGameplayTag(UBlackboardComponent* Blackboard, const FName& BBKey, const FGameplayTag& Tag) {
}

bool UORAIBlackboardLibrary::SetAssistanceTargetNeedsAssistanceKey(AORAIController* InORAIController, bool bAssistanceTargetNeedsAssistance) {
    return false;
}

bool UORAIBlackboardLibrary::SetAssistanceTargetKey(AORAIController* InORAIController, AORAICharacter* AssistanceTarget) {
    return false;
}

bool UORAIBlackboardLibrary::SetAssistanceTargetEffectRadiusKey(AORAIController* InORAIController, float Radius) {
    return false;
}

bool UORAIBlackboardLibrary::SetAssistanceTargetEffectLocationKey(AORAIController* InORAIController, const FVector& Location) {
    return false;
}

bool UORAIBlackboardLibrary::GetTargetActorLastKnownLocationKey(AORAIController* InORAIController, FVector& LastKnownLocation) {
    return false;
}

bool UORAIBlackboardLibrary::GetTargetActorKey(const AORAIController* InORAIController, AActor*& OutTargetActor) {
    return false;
}

FString UORAIBlackboardLibrary::GetSelectorKeyValueAsString(AORAIController* InORAIController, FBlackboardKeySelector BlackboardKey) {
    return TEXT("");
}

bool UORAIBlackboardLibrary::GetPackLeaderDistanceKey(AORAIController* InORAIController, float& Distance) {
    return false;
}

bool UORAIBlackboardLibrary::GetPackInTroubleKey(AORAIController* InORAIController, bool& bPackInTrouble) {
    return false;
}

bool UORAIBlackboardLibrary::GetLastPackRepositionTimeKey(AORAIController* InORAIController, float& PackLastRepositionTime) {
    return false;
}

bool UORAIBlackboardLibrary::GetGoopTargetKey(const AORAIController* InORAIController, AActor*& OutGoopTarget) {
    return false;
}

bool UORAIBlackboardLibrary::GetDistanceToTargetKey(AORAIController* InORAIController, float& DistanceToTarget) {
    return false;
}

bool UORAIBlackboardLibrary::GetCurrentHostileAwarenessKey(AORAIController* InORAIController, EORAIHostileAwareness& HostileAwareness) {
    return false;
}

bool UORAIBlackboardLibrary::GetCombatBehaviorSubStateKey(const AORAIController* InORAIController, EORAICombatBehaviorStates& CombatSubstate) {
    return false;
}

FGameplayTag UORAIBlackboardLibrary::GetBlackboardGameplayTag(UBlackboardComponent* Blackboard, const FName& BBKey) {
    return FGameplayTag{};
}

bool UORAIBlackboardLibrary::GetAssistanceTargetKey(AORAIController* InORAIController, AORAICharacter*& AssistanceTarget) {
    return false;
}

bool UORAIBlackboardLibrary::GetAssistanceTargetEffectRadiusKey(AORAIController* InORAIController, float& Radius) {
    return false;
}

bool UORAIBlackboardLibrary::GetAssistanceTargetEffectLocationKey(AORAIController* InORAIController, FVector& Location) {
    return false;
}

bool UORAIBlackboardLibrary::ClearTargetActorLastKnownLocationKey(AORAIController* InORAIController) {
    return false;
}

bool UORAIBlackboardLibrary::ClearMeanderAnchorLocationKey(AORAIController* InORAIController) {
    return false;
}

UORAIBlackboardLibrary::UORAIBlackboardLibrary() {
}

