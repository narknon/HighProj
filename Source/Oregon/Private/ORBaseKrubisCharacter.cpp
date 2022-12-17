#include "ORBaseKrubisCharacter.h"
#include "NiagaraComponent.h"
#include "ORGameplayEffectVolumeComponent.h"
#include "Particles/ParticleSystemComponent.h"


void AORBaseKrubisCharacter::SetMeshForTunneling(bool bGoingUnderGround) {
}




bool AORBaseKrubisCharacter::HasEnemyWaveCompleted() {
    return false;
}

void AORBaseKrubisCharacter::HandleChargeMove(const FVector& PrevLocation, const FVector& NewLocation) {
}

void AORBaseKrubisCharacter::EnableJetBootsFX_Implementation(bool Enabled) {
}

bool AORBaseKrubisCharacter::CanResurface() {
    return false;
}

void AORBaseKrubisCharacter::CancelTunnelingCollision() {
}

bool AORBaseKrubisCharacter::CanAttackFromUnderGround() {
    return false;
}

void AORBaseKrubisCharacter::CalcTunnelingCollision(const FVector& Start, const FVector& End, float Speed, float DigOffsetDistance) {
}

AORBaseKrubisCharacter::AORBaseKrubisCharacter() {
    this->StartKrubisTunneling = NULL;
    this->StopKrubisTunneling = NULL;
    this->ChargeAttackDamageArea = CreateDefaultSubobject<UORGameplayEffectVolumeComponent>(TEXT("Damage Volume"));
    this->HeadSpinChargeVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("HeadSpinChargeVFX"));
    this->FeetSpinChargeVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FeetSpinChargeVFX"));
    this->RightToeJetVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RightToeJetVFX"));
    this->LeftToeJetVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LeftToeJetVFX"));
    this->RightHeelJetVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RightHeelJetVFX"));
    this->LeftHeelJetVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LeftHeelJetVFX"));
    this->DivesLeft = 0;
    this->RampsOnCurrently = 0;
    this->JustMovedUnderground = false;
    this->EncounterControllerRef = NULL;
    this->bSpawnWaveActive = false;
    this->bAllAddsHaveSpawned = false;
    this->bRunningSpearAttack = false;
    this->KrubisPointController = NULL;
}

