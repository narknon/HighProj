#include "OREnvQueryTest_DesiredRangeDistance.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UOREnvQueryTest_DesiredRangeDistance::UOREnvQueryTest_DesiredRangeDistance() {
    this->TestMode = EEnvTestDistance::Distance3D;
    this->DistanceTo = UEnvQueryContext_Querier::StaticClass();
}

