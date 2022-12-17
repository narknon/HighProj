#include "ORAIFurgle.h"
#include "ORTriggerVolumeComponent.h"

AORAIFurgle::AORAIFurgle() {
    this->bShouldRandomizeBurrowDistance = true;
    this->bUseSignificanceManagement = true;
    this->SignificanceManagementTickThrottleThreshold = 50000000.00f;
    this->ThrottledTickRate = 0.10f;
    this->SignificanceManagementTickThreshold = 100000000.00f;
    this->OutOfSightSigBoost = 10.00f;
    this->TriggerVolume = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("TriggerVolume"));
}

