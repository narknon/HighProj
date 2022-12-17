#include "ORAIDirectorSubsystem.h"

class AActor;
class AORAICharacter;
class UORAISquad;

void UORAIDirectorSubsystem::OnAISquadCleared(UORAISquad* AISquad) {
}

bool UORAIDirectorSubsystem::IsActorCombatTarget(AActor* TestActor) const {
    return false;
}

float UORAIDirectorSubsystem::GetSquareDistanceToNearestEnemyAI(AActor* TestActor) const {
    return 0.0f;
}

AORAICharacter* UORAIDirectorSubsystem::GetNearestAIWithTagsAtAngle(AActor* TestActor, const FGameplayTagContainer& RequireTags, const FGameplayTagContainer& IgnoreTags, const float MaxRange, const FVector ForwardVector, const float TestAngle) const {
    return NULL;
}

AORAICharacter* UORAIDirectorSubsystem::GetNearestAIWithTags(AActor* TestActor, const FGameplayTagContainer& RequireTags, const FGameplayTagContainer& IgnoreTags, const float MaxRange, const FVector ForwardVector, const float TestAngle) const {
    return NULL;
}

UORAISquad* UORAIDirectorSubsystem::GetNearestAISquad(AActor* TestActor, const float MaxRange, const TEnumAsByte<EFactionTeamIDs> FactionTeamID) const {
    return NULL;
}

AORAICharacter* UORAIDirectorSubsystem::GetNearestAIAtAngle(AActor* TestActor, const float MaxRange, const FVector ForwardVector, const float TestAngle) const {
    return NULL;
}

AORAICharacter* UORAIDirectorSubsystem::GetNearestAI(AActor* TestActor, const float MaxRange, const FVector ForwardVector, const float TestAngle) const {
    return NULL;
}

TArray<UORAISquad*> UORAIDirectorSubsystem::GetAllAISquads() const {
    return TArray<UORAISquad*>();
}

TArray<AORAICharacter*> UORAIDirectorSubsystem::GetAllAICharacters() const {
    return TArray<AORAICharacter*>();
}

UORAIDirectorSubsystem::UORAIDirectorSubsystem() {
}

