#include "STWorldSubsystem.h"

class USTPossessableComponent;

bool USTWorldSubsystem::IsSpeakerTalking(FGameplayTag SpeakerTag) const {
    return false;
}

bool USTWorldSubsystem::IsChannelActive(ESTGroup CHannelToCheck) const {
    return false;
}

bool USTWorldSubsystem::HasDialogueChoice() const {
    return false;
}

float USTWorldSubsystem::GetTimeLeftInDialogueChoice() const {
    return 0.0f;
}

float USTWorldSubsystem::GetSpeakerTimeLeft(FGameplayTag SpeakerTag) const {
    return 0.0f;
}

USTPossessableComponent* USTWorldSubsystem::GetPossessableComponentForTag(FGameplayTag SpeakerTag, bool bTryFindNonTalking) const {
    return NULL;
}

FName USTWorldSubsystem::GetDialogueChoiceID() const {
    return NAME_None;
}

void USTWorldSubsystem::ChooseDialogueChoice(ESTChoiceOutput Choice, int32 ChoiceIndex) {
}

USTWorldSubsystem::USTWorldSubsystem() {
}

