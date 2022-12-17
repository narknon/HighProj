#include "ORNipulonCloneMaster.h"
#include "ORAkComponent.h"
#include "Components/SphereComponent.h"

class AORAIBossCharacter;
class UORGlobalEventPayload;

void AORNipulonCloneMaster::ToggleLaserBeams(bool bActive) {
}

void AORNipulonCloneMaster::StartCloneSphereSplit() {
}

void AORNipulonCloneMaster::StartCloneSphere() {
}

void AORNipulonCloneMaster::StartCloneShuffle() {
}

void AORNipulonCloneMaster::StartCloneRingSplit() {
}

void AORNipulonCloneMaster::StartCloneRing() {
}

void AORNipulonCloneMaster::StartCloneMob() {
}

void AORNipulonCloneMaster::StartCloneFireLoop() {
}

void AORNipulonCloneMaster::StartCloneCustom() {
}

void AORNipulonCloneMaster::SetRealNipulonRef(AORAIBossCharacter* NipulonCharacter) {
}

void AORNipulonCloneMaster::ResetCloneManager() {
}

void AORNipulonCloneMaster::OnMaxDamageDelayFinished() {
}


void AORNipulonCloneMaster::OnFireEventReceived(const UORGlobalEventPayload* EventData) {
}






void AORNipulonCloneMaster::JumpToCloneEffect() {
}

void AORNipulonCloneMaster::HealthTankDepleted() {
}

void AORNipulonCloneMaster::HandleCloneFiring() {
}

void AORNipulonCloneMaster::EndDamageFlash() {
}

void AORNipulonCloneMaster::EndCloneFireLoop() {
}

AORNipulonCloneMaster::AORNipulonCloneMaster() {
    this->ORAk = CreateDefaultSubobject<UORAkComponent>(TEXT("ORAk"));
    this->CloneCount = 16;
    this->bIsFlying = true;
    this->bClonesFacePlayer = false;
    this->CloneAnimBlueprintClass = NULL;
    this->CloneGunStaticMesh = NULL;
    this->CloneGunSocket = TEXT("Weapon_R");
    this->CloneProjectileType = NULL;
    this->CloneFiringMontage = NULL;
    this->CloneFiringSocket = TEXT("FX_Barrel");
    this->CloneFiringSFX = NULL;
    this->CloneMuzzleFlash = NULL;
    this->CloneLaserBeamActor = NULL;
    this->LaserTraceChannel = ECC_WorldStatic;
    this->LaserDamageEffect = NULL;
    this->bCloneClosestToPlayerFires = false;
    this->CloneFireAngleThreshold = 0.50f;
    this->bClonesCanRespawn = true;
    this->CloneRespawnRate = 1.00f;
    this->CloneHueShiftAmount = 0.01f;
    this->CloneHueShiftMinValue = 0.25f;
    this->CloneHueShiftMaxValue = 0.75f;
    this->CloneCollisionProfile = TEXT("BlockPlayerOnly");
    this->NS_CloneDeathParticle = NULL;
    this->NS_CloneBlurParticle = NULL;
    this->CloneDissolveTime = 1.23f;
    this->CloneBlurTransitionTime = 0.50f;
    this->CloneBlurLength = 2.50f;
    this->CloneTrailParticle = NULL;
    this->CloneFXSocket = TEXT("FX_Head");
    this->CloneJumpsPerShuffle = 8;
    this->CloneJumpDelay = 0.20f;
    this->CloneFlySpeed = 50.00f;
    this->ClonePauseWaitTime = 5.00f;
    this->CloneSplitDelay = 3.00f;
    this->CloneSplitLerpTime = 2.00f;
    this->CloneSplitRadius = 1000.00f;
    this->CloneSphereRadius = 300.00f;
    this->CloneSphereFollowSpeed = 0.25f;
    this->CloneSphereSpinDuration = 10.00f;
    this->CloneSphereShuffleDuration = 5.00f;
    this->CloneRingHeightOffset = 500.00f;
    this->CloneRingRadius = 1000.00f;
    this->CloneRingFollowSpeed = 1.00f;
    this->CloneRingHitsToComplete = 4;
    this->CloneRingShuffleTime = 8.00f;
    this->CloneRingWaitTime = 4.00f;
    this->CloneMobBoundsExtentX = 1000.00f;
    this->CloneMobBoundsExtentY = 500.00f;
    this->MaxDistanceToPlayer = 2000.00f;
    this->Details_CloneSceneComponentArray.AddDefaulted(16);
    this->Details_CloneMeshComponentArray.AddDefaulted(16);
    this->Details_CloneDeathEffectArray.AddDefaulted(16);
    this->Details_CloneBlurEffectArray.AddDefaulted(16);
    this->RotatingMovementComponent = NULL;
    this->SphereBlockingCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereBarrier"));
}

