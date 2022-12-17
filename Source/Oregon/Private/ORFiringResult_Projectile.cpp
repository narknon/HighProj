#include "ORFiringResult_Projectile.h"

bool UORFiringResult_Projectile::GetHasSpawnObstruction() {
    return false;
}

bool UORFiringResult_Projectile::GetCharacterSpawnTransform(FVector& OutLocation, FRotator& OutPreSpreadRotation, FRotator& OutPostSpreadRotation, FVector& OutEffectsOffset, int32 Shot, int32 TotalShots, bool bUseOverrideLocation, FVector OverrideStartLocation) {
    return false;
}

UORFiringResult_Projectile::UORFiringResult_Projectile() {
    this->AimTraceChannel = ECC_GameTraceChannel1;
    this->InstantHitTraceChannel = ECC_GameTraceChannel11;
    this->AimAssistCorrectionDistanceCurve = NULL;
    this->bAllowAimCorrection = true;
    this->bAllowAimCorrectionKeyboardMouse = false;
    this->bAllowInstantHits = false;
    this->DontAimShots = false;
    this->AimPredictionLOSTimeCurve = NULL;
    this->IgnoreAimPredictionZ = false;
    this->MaxAimPredictionZFactor = 0.30f;
    this->TargetVelocityLookBackTime = 1.00f;
    this->bUseSameTargetVelocityForAllShots = false;
    this->bUseVelocityAverage = false;
    this->bUseRandomHorizontalOffset = false;
    this->bUseRandomVelocityScale = false;
    this->bOriginateFromPlayerCamera = false;
    this->bOriginateFromPlayerCameraIfSpawnObstructed = false;
    this->SpawnObstructionDistanceOffset = 0.00f;
}

