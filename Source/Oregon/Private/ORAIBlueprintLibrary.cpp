#include "ORAIBlueprintLibrary.h"

class AActor;
class AORAICharacter;

AORAICharacter* UORAIBlueprintLibrary::GetFirstHealableCandidate(const TArray<AORAICharacter*>& Candidates, const FGameplayTagQuery& ExclusionQuery, AActor* SelfObject, bool bCheckIsReachable, const FVector& ReachableOffset) {
    return NULL;
}

AORAICharacter* UORAIBlueprintLibrary::GetBestHealableCandidate(const TArray<AORAICharacter*>& Candidates, const FGameplayTagQuery& ExclusionQuery, AActor* SelfObject, bool bCheckMinimumDistance, bool bCheckIsReachable, const FVector& ReachableOffset) {
    return NULL;
}

UORAIBlueprintLibrary::UORAIBlueprintLibrary() {
}

