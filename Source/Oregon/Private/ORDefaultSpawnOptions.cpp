#include "ORDefaultSpawnOptions.h"

FORDefaultSpawnOptions::FORDefaultSpawnOptions() {
    this->InitialTargetPoint = NULL;
    this->AwarenessState = EORAIHostileAwareness::EHA_Unaware;
    this->KeyTarget = false;
    this->PatrolRoute = NULL;
    this->IdleMovementEnabled = false;
    this->IdleMovementAnchorRange = 0.00f;
    this->CombatAnchorRange = 0.00f;
    this->DeafAndDumbDuration = 0.00f;
    this->AttractionPointPathfindingGroup = EORAttractionPointPathfindingGroup::Group1;
    this->RequiredDifficultyComparison = ESQDifficultyComparisionOperation::Equal;
    this->RequiredDifficultyValue = ESQDifficultySetting::Easy;
}

