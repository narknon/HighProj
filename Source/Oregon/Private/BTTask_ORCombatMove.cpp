#include "BTTask_ORCombatMove.h"

UBTTask_ORCombatMove::UBTTask_ORCombatMove() {
    this->AcceptableRadius = 5.00f;
    this->TickIntervalMin = 0.20f;
    this->TickIntervalMax = 0.50f;
    this->FilterClass = NULL;
    this->PrimaryAttackCooldown = 1.50f;
    this->PrimaryAttackCooldownRandomness = 0.20f;
    this->MeleeAttackCooldown = 0.50f;
    this->StateTimerRandomnessMax = 0.50f;
    this->RepositionRetryInterval = 2.00f;
    this->WaitInterval = 0.50f;
    this->AbilityAttemptTime = 1.00f;
    this->AbilityOutOfLOSMaxTime = 1.50f;
    this->PathCheckOutOfLOSMaxTime = 2.00f;
    this->OverrideYawClamp = 35.00f;
    this->RunAndShootEffectMinDistance = 0.00f;
    this->FullRunEffect = NULL;
    this->RunAndShootEffect = NULL;
    this->RepositionDistance = 700.00f;
    this->ObservedBlackboardValueTolerance = 4.75f;
    this->bObserveBlackboardValue = false;
    this->bAllowStrafe = false;
    this->bAllowPartialPath = true;
    this->bTrackMovingGoal = true;
    this->bProjectGoalLocation = true;
    this->bReachTestIncludesAgentRadius = true;
    this->bStartWithReposition = false;
    this->bAllowAttractionPoints = true;
    this->bCheckPaths = true;
    this->bReachTestIncludesGoalRadius = true;
    this->bStopOnOverlap = true;
    this->bToggleOnSprintForFullRun = true;
    this->bStopOnOverlapNeedsUpdate = true;
}

