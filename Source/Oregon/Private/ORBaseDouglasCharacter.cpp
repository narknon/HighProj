#include "ORBaseDouglasCharacter.h"
#include "NiagaraComponent.h"
#include "ORGameplayEffectVolumeComponent.h"

void AORBaseDouglasCharacter::SetUpInkShot() {
}

void AORBaseDouglasCharacter::PlayDouglasDamageVO_Implementation() {
}

void AORBaseDouglasCharacter::OnInkShotStarted_Implementation() {
}

void AORBaseDouglasCharacter::OnGusDiskHitDouglas_Implementation() {
}

bool AORBaseDouglasCharacter::NextInkShotSetUp() {
    return false;
}

void AORBaseDouglasCharacter::MeleeAttackStarted_Implementation() {
}

void AORBaseDouglasCharacter::ChargeShotFired_Implementation() {
}

AORBaseDouglasCharacter::AORBaseDouglasCharacter() {
    this->ChargeAttackDamageArea = CreateDefaultSubobject<UORGameplayEffectVolumeComponent>(TEXT("Damage Volume"));
    this->ChargeAttackInkRadius = 200.00f;
    this->RightArmSpinVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RightArmSpinVFX"));
    this->LeftArmSpinVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LeftArmSpinVFX"));
    this->FeetSpinVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FeetSpinVFX"));
    this->JumpingVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("JumpingVFX"));
    this->HookPointController = NULL;
    this->HitWithDisc = false;
    this->MaxInkShotVelocity = 700.00f;
    this->InkShotVelocityReduction = 100.00f;
    this->CurrentInkShotVelocity = 0.00f;
}

