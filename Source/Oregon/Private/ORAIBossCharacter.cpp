#include "ORAIBossCharacter.h"
#include "ORAkComponent.h"

class AORHealthTankItem;

bool AORAIBossCharacter::SetBossFightPhase(int32 PhaseNumber, bool bDoTransitionToPhase, bool bIsRestart) {
    return false;
}

void AORAIBossCharacter::OnBossRestartAtPhase_Implementation(int32 PhaseNumber) {
}

void AORAIBossCharacter::OnBossHealthTankUpdated_Implementation(float Current, float Max, float Change, bool DamageEvent) {
}

void AORAIBossCharacter::OnBossHealthTankEmptied_Implementation() {
}

bool AORAIBossCharacter::IsLastPhase() {
    return false;
}

void AORAIBossCharacter::HealthTankUpdated(AORHealthTankItem* Tank, float Current, float Max, float Change, bool DamageEvent) {
}

void AORAIBossCharacter::HealthTankEmptied(AORHealthTankItem* Tank) {
}

bool AORAIBossCharacter::HasFightEnded() {
    return false;
}

int32 AORAIBossCharacter::GetCurrentPhaseNumber() {
    return 0;
}

void AORAIBossCharacter::BossFightStarted_BP_Implementation() {
}

void AORAIBossCharacter::BossFightStarted() {
}

void AORAIBossCharacter::BossDeathAbilityComplete_Implementation() {
}

AORAIBossCharacter::AORAIBossCharacter() {
    this->ORAk = CreateDefaultSubobject<UORAkComponent>(TEXT("ORAk"));
    this->BossHealthBar = NULL;
    this->bShouldShowHealthBarOnStart = true;
    this->HealthBarType = EBossHealthBarType::Base;
    this->BossCharacterMusicStateValue = NULL;
}

