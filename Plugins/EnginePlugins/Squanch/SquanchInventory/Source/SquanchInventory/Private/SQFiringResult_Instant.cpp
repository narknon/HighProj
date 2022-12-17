#include "SQFiringResult_Instant.h"

TArray<FHitResult> USQFiringResult_Instant::GetHitResults_BP() {
    return TArray<FHitResult>();
}

FVector USQFiringResult_Instant::GetAimEnd_Implementation(FVector& AimStart, FVector& LookDirection, bool bUseAimCorrections) {
    return FVector{};
}

USQFiringResult_Instant::USQFiringResult_Instant() {
    this->TargetingInfo = NULL;
    this->NumGEApplicationsPerHitResult = 0;
    this->bKeepHitNormalsInFrontOfPlayer = false;
    this->bSpawnFakeProjectileFX = false;
    this->CascadeFakeProjectileFX = NULL;
    this->NiagaraFakeProjectileFX = NULL;
    this->FakeProjectileFiringSpeed = 5000.00f;
}

