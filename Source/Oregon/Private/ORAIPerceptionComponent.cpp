#include "ORAIPerceptionComponent.h"

class AActor;

bool UORAIPerceptionComponent::SetPerceptionProcessorHostileAwareness(EORAIHostileAwareness NewHostileAwareness) {
    return false;
}

void UORAIPerceptionComponent::OnTargetPerceptionUpdatedHandler(AActor* UpdateActor, FAIStimulus Stimulus) {
}

float UORAIPerceptionComponent::GetTimeSinceLastHostileStimuli() const {
    return 0.0f;
}

bool UORAIPerceptionComponent::GetTimeRemainingToSightDetectPlayer(float& TimeRemainingForDetection, EORAIHostileAwareness& ActiveProcessorHostileAwareness) {
    return false;
}

bool UORAIPerceptionComponent::GetSightStimulusForActor(AActor* Actor, FAIStimulus& SightStimulus) const {
    return false;
}

EORAIHostileAwareness UORAIPerceptionComponent::GetActiveProcessorHostileAwareness() const {
    return EORAIHostileAwareness::EHA_Unaware;
}

UORAIPerceptionComponent::UORAIPerceptionComponent() {
}

