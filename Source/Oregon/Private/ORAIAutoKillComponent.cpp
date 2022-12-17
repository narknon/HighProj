#include "ORAIAutoKillComponent.h"

class AActor;
class AORCharacter;

void UORAIAutoKillComponent::TargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void UORAIAutoKillComponent::SetNoLOSAutoKillEnabled(const bool Enabled) {
}

void UORAIAutoKillComponent::SetForceAutoKillEnabled(const bool Enabled) {
}

void UORAIAutoKillComponent::KillOwningCharacter() {
}

void UORAIAutoKillComponent::AICharacterSpawnedFromPool(AORCharacter* SpawnedCharacter) {
}

void UORAIAutoKillComponent::AICharacterReturnedToPool(AORCharacter* SpawnedCharacter) {
}

UORAIAutoKillComponent::UORAIAutoKillComponent() {
    this->OwningAICharacter = NULL;
    this->OwningAIController = NULL;
    this->NoLOSAutoKillEnabled = false;
    this->NoLOSAutoKillTime = -1.00f;
    this->ForceAutoKillEnabled = false;
    this->ForceAutoKillTime = -1.00f;
}

