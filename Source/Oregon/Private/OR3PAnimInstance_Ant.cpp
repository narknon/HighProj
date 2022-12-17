#include "OR3PAnimInstance_Ant.h"



UOR3PAnimInstance_Ant::UOR3PAnimInstance_Ant() {
    this->bIsDead = false;
    this->bIsKnockedUp = false;
    this->bIsBeingSuctioned = false;
    this->bIsAiming = false;
    this->bIsAlwaysAiming = false;
    this->bIsGrenadeAiming = false;
    this->bIsTakingCover = false;
    this->bIsMovingFast = false;
    this->bIsScaredFlailing = false;
    this->bCombatSubstateIsPanicking = false;
    this->bIsAlerted = false;
    this->FastMovingThreshold = 40.00f;
    this->bUseIdleOverride = false;
    this->VacScale = 0.00f;
    this->VacScalingFactor = 700.00f;
    this->AngularRotationSpeed = 0.00f;
    this->DismemberComponent = NULL;
    this->HeadshotDeath = NULL;
}

