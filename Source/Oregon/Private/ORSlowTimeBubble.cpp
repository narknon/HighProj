#include "ORSlowTimeBubble.h"
#include "ORTriggerVolumeComponent.h"

class AActor;

void AORSlowTimeBubble::OnExitedVolume(AActor* SourceActor, int32 VolumeIndex) {
}

void AORSlowTimeBubble::OnEnteredVolume(AActor* SourceActor, int32 VolumeIndex) {
}



float AORSlowTimeBubble::GetBubbleRadius_Implementation() {
    return 0.0f;
}

AORSlowTimeBubble::AORSlowTimeBubble() {
    this->TriggerVolumeComponent = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("ORTriggerVolume"));
    this->SlowCharacterEffect = NULL;
    this->ImmuneVFX = NULL;
    this->bImmediateUnslow = false;
}

