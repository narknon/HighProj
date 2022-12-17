#include "ORAISystemBPLibrary.h"
#include "Templates/SubclassOf.h"

class AActor;
class AORAIController;
class UAISense;
class UAIPerceptionComponent;

void UORAISystemBPLibrary::UpdateSightTrackingSightAndTimes(FORSightTrackingData& SightData, bool HasLineOfSight, float GameTime) {
}

bool UORAISystemBPLibrary::SightTrackingHasLineOfSightMinTimeCheck(const FORSightTrackingData& SightData, float MinTimeSeenTarget, float GameTime) {
    return false;
}

void UORAISystemBPLibrary::SetAllSensesEnabled(UAIPerceptionComponent* PerceptionComp, const bool bEnable) {
}

bool UORAISystemBPLibrary::IsStimulusExpired(const FAIStimulus& InStimulus) {
    return false;
}

bool UORAISystemBPLibrary::HasAnyKnownStimulusForActor(UAIPerceptionComponent* PerceptionComp, AActor* Actor) {
    return false;
}

bool UORAISystemBPLibrary::HasAnyCurrentStimulusForActor(UAIPerceptionComponent* PerceptionComp, AActor* Actor) {
    return false;
}

AORAIController* UORAISystemBPLibrary::GetORAIController(AActor* ControlledActor) {
    return NULL;
}

bool UORAISystemBPLibrary::GetActorsPerceptionForSense(UAIPerceptionComponent* PerceptionComp, AActor* Actor, const TSubclassOf<UAISense> SenseToUse, FAIStimulus& OutSenseStimulusData) {
    return false;
}

UORAISystemBPLibrary::UORAISystemBPLibrary() {
}

