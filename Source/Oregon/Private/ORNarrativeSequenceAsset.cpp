#include "ORNarrativeSequenceAsset.h"

class UObject;
class ULevelSequence;
class AORNarrativeDirector;
class UORPossessableComponent;

void UORNarrativeSequenceAsset::PlayNDSequence_Implementation(AORNarrativeDirector* InOwningNarrativeDirector, const FGameplayTag& InSequenceDataTag, ULevelSequence* InLevelSequence, const TMap<FString, UObject*>& PossessionMap, const FName& STBlockName) {
}

void UORNarrativeSequenceAsset::OnNDSequenceEnd() {
}

UORPossessableComponent* UORNarrativeSequenceAsset::GetOwningPossessable() const {
    return NULL;
}

UORNarrativeSequenceAsset::UORNarrativeSequenceAsset() {
}

