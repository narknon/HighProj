#include "ORBaseSplineFollowingActor.h"
#include "ORSplineFollowerComponent.h"


void AORBaseSplineFollowingActor::Despawning() {
}

AORBaseSplineFollowingActor::AORBaseSplineFollowingActor() {
    this->bUseSignificanceManagement = true;
    this->SignificanceManagementTickThrottleThreshold = 0.20f;
    this->ThrottledTickRate = 0.10f;
    this->SplineFollowerComp = CreateDefaultSubobject<UORSplineFollowerComponent>(TEXT("SplineFollowerComp"));
}

