#include "ORSpawnOptions.h"

FORSpawnOptions::FORSpawnOptions() {
    this->OverrideInitialTarget = false;
    this->InitialTargetPoint = NULL;
    this->DefaultSpawnOptionsIndex = 0;
    this->OverrideAwarenessState = false;
    this->AwarenessState = EORAIHostileAwareness::EHA_Unaware;
    this->OverrideKeyTarget = false;
    this->KeyTarget = false;
    this->OverridePatrolRoute = false;
    this->PatrolRoute = NULL;
    this->OverrideIdleMovement = false;
    this->IdleMovementEnabled = false;
    this->IdleMovementAnchorRange = 0.00f;
    this->OverrideCombatMovement = false;
    this->CombatAnchorRange = 0.00f;
    this->OverrideAttractionPointPathfindingGroup = false;
    this->AttractionPointPathfindingGroup = EORAttractionPointPathfindingGroup::Group1;
    this->OverrideSpawnEventTags = false;
    this->OverrideRequiredDifficulty = false;
    this->RequiredDifficultyComparison = ESQDifficultyComparisionOperation::Equal;
    this->RequiredDifficultyValue = ESQDifficultySetting::Easy;
    this->OverrideRequiredObjectiveTags = false;
    this->OverrideIgnoredObjectiveTags = false;
    this->DefaultHomeAreasIndex = 0;
    this->OverrideHomeArea = false;
    this->OverrideDeafAndDumbDuration = false;
    this->DeafAndDumbDuration = 0.00f;
    this->bSilentSpawn = false;
}

