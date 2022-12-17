#include "OR3PAnimInstance_Drone.h"

void UOR3PAnimInstance_Drone::UpdateDroneValues() {
}

UOR3PAnimInstance_Drone::UOR3PAnimInstance_Drone() {
    this->LaserAimStartSocket = TEXT("laser_JNT");
    this->GunAimStartSocket = TEXT("lowerArm_JNT");
    this->bIsDead = false;
    this->bHasMainTarget = false;
    this->bIsInCombat = false;
    this->LaserAimPitch = 0.00f;
    this->LaserAimYaw = 0.00f;
    this->GunAimPitch = 0.00f;
    this->GunAimYaw = 0.00f;
}

