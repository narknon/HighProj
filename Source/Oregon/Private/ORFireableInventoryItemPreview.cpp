#include "ORFireableInventoryItemPreview.h"

class USQFiringResultComponent;
class UProjectileMovementComponent;
class ASQProjectile;

bool UORFireableInventoryItemPreview::ShouldBounce_Implementation(const FHitResult& Hit, ASQProjectile* ProjectileCDO) const {
    return false;
}

void UORFireableInventoryItemPreview::SetPreviewSimFrequency(const float InPreviewSimFrequency) {
}

void UORFireableInventoryItemPreview::SetMaxPreviewSimTime(const float InMaxPreviewSimTime) {
}

float UORFireableInventoryItemPreview::GetProjectileLaunchSpeed_Implementation(ASQProjectile* ProjectileCDO) const {
    return 0.0f;
}

float UORFireableInventoryItemPreview::GetPreviewSimFrequency() const {
    return 0.0f;
}

TArray<FPredictProjectilePathResult> UORFireableInventoryItemPreview::GetPredictProjectilePathResults() const {
    return TArray<FPredictProjectilePathResult>();
}

float UORFireableInventoryItemPreview::GetMaxPreviewSimTime() const {
    return 0.0f;
}

FPredictProjectilePathResult UORFireableInventoryItemPreview::GetLastPredictProjectilePathResults() const {
    return FPredictProjectilePathResult{};
}

USQFiringResultComponent* UORFireableInventoryItemPreview::GetFireResult() {
    return NULL;
}

FVector UORFireableInventoryItemPreview::CalculateBounceVelocity_Implementation(const FHitResult& Hit, const FVector& BounceVelocity, UProjectileMovementComponent* ProjectileMovementComponent) const {
    return FVector{};
}

UORFireableInventoryItemPreview::UORFireableInventoryItemPreview() {
    this->ParentFireableItem = NULL;
    this->FiringResult = NULL;
    this->bCheckAllowBounce = true;
    this->MaxBounces = 0;
}

