#include "ORFiringResult_ArcProjectile.h"

class AActor;
class AORAIController;
class UAnimSequence;

bool UORFiringResult_ArcProjectile::HasClearViewToProbableShotApexFromSocket(UAnimSequence* AnimSequence, FName BoneName, int32 FrameIndex, FVector TargetOffset) {
    return false;
}

bool UORFiringResult_ArcProjectile::HasClearViewToProbableShotApex() {
    return false;
}

AORAIController* UORFiringResult_ArcProjectile::GetORAIController() const {
    return NULL;
}

AActor* UORFiringResult_ArcProjectile::GetAIControllerTargetActor() const {
    return NULL;
}

UORFiringResult_ArcProjectile::UORFiringResult_ArcProjectile() {
    this->bUseTravelTimeConfiguration = true;
}

