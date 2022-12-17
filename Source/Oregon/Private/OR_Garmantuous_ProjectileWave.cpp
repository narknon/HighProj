#include "OR_Garmantuous_ProjectileWave.h"

FOR_Garmantuous_ProjectileWave::FOR_Garmantuous_ProjectileWave() {
    this->ProjectileClass = NULL;
    this->ProjectileType = EORGarmProjectileMovementType::HWave;
    this->bUseSameTargetVelocityForAllShots = false;
    this->bUseVelocityAverage = false;
    this->bUseRandomVelocityScale = false;
    this->bAimShotsAtTarget = false;
    this->bSetHomingTarget = false;
    this->AimPredictionMod = 0.00f;
    this->MaxTravelDistance = 0.00f;
    this->bIgnorePredictionZ = false;
    this->MaxAimPredictionZFactor = 0.00f;
    this->TargetVelocityLookBackTime = 0.00f;
    this->GravityScaleOverride = 0.00f;
    this->WaveOffset = 0.00f;
    this->WaveVerticalOffset = 0.00f;
    this->WaveSizeParam = 0.00f;
    this->WaveOuterRadiusParam = 0.00f;
    this->WaveInterpTimeParam = 0.00f;
    this->WaveRotationRate = 0.00f;
    this->InitialCannonOffset = 0;
    this->ShotsPerCannon = 0;
    this->CannonSkip = 0;
    this->NiagaraFiringVFX = NULL;
    this->FiringVFX = NULL;
    this->FireSFX = NULL;
    this->FireLoopingEndSFX = NULL;
    this->bFireSFXLooping = false;
}

