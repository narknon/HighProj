#include "ORFiringResult_EnemyMortarProj.h"

class AActor;
class AORCharacter;

AActor* UORFiringResult_EnemyMortarProj::GetAIControllerTargetActor() const {
    return NULL;
}

bool UORFiringResult_EnemyMortarProj::FiringAnglePitchCalculation(const float Distance2D, const float HeightDifference, const float GravitySpeed, const float ProjectileSpeed, float& OutHighAngleDeg, float& OutLowAngleDeg) const {
    return false;
}

FVector UORFiringResult_EnemyMortarProj::CalculateTargetPosition(const AORCharacter* TargetCharacter, const bool bLeadTarget, const float LeadTime, const float FudgeDistance) const {
    return FVector{};
}

UORFiringResult_EnemyMortarProj::UORFiringResult_EnemyMortarProj() {
}

