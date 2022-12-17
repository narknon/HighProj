#include "ORRicochetProjectile.h"

class AActor;


float AORRicochetProjectile::GetRicochetSpeed_Implementation(const FHitResult& ImpactResult) {
    return 0.0f;
}

float AORRicochetProjectile::CalcRicochetTargetScore_Implementation(AActor* Target, const FHitResult& ImpactResult) {
    return 0.0f;
}

bool AORRicochetProjectile::AllowRicochetWithActor_Implementation(AActor* OtherActor) {
    return false;
}

AORRicochetProjectile::AORRicochetProjectile() {
    this->LOSCollisionChannel = ECC_WorldStatic;
    this->DistanceScoreWeight = 1.00f;
    this->PlayerCameraDotScoreWeight = 1.00f;
    this->VisibilityTraceCount = 0;
}

