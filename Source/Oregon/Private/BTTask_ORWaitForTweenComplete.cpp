#include "BTTask_ORWaitForTweenComplete.h"

void UBTTask_ORWaitForTweenComplete::OnTweenComplete(const FHitResult& ImpactResult) {
}

UBTTask_ORWaitForTweenComplete::UBTTask_ORWaitForTweenComplete() {
    this->MyOwnerComp = NULL;
    this->MaxTimeToWait = 0.00f;
}

