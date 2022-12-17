#include "ORPossessableComponent.h"

class UObject;
class ULevelSequence;
class AORNarrativeDirector;

void UORPossessableComponent::PlayNDSequence_Implementation(AORNarrativeDirector* InOwningNarrativeDirector, const FGameplayTag& InSequenceDataTag, ULevelSequence* InLevelSequence, const TMap<FString, UObject*>& PossessionMap, const FName& STBlockName) {
}

void UORPossessableComponent::OnNDSequenceStart_Implementation(AORNarrativeDirector* InOwningNarrativeDirector, const FGameplayTag& InSequenceDataTag, ULevelSequence* InLevelSequence) {
}

void UORPossessableComponent::OnNDSequenceEnd_Implementation() {
}

void UORPossessableComponent::ForceAside(FSequenceState& AsideBinding) {
}

void UORPossessableComponent::EndNDSequence() {
}

UORPossessableComponent::UORPossessableComponent() {
    this->NarrativeSequenceAssetClass = NULL;
    this->NarrativeSequenceAsset = NULL;
    this->bCanSpeak = true;
    this->bAllowSpeakingWhenDead = false;
    this->bHasSpeakingIndicator = true;
    this->bSelectSpeakerTagFromSet = false;
}

