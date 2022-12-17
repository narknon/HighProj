#include "ORMusicSubsystem.h"

class UAkAudioEvent;
class UAkStateValue;

void UORMusicSubsystem::SwitchStates(UAkStateValue* StateValue) {
}

void UORMusicSubsystem::StopMusic() {
}

void UORMusicSubsystem::StopCombatMusic() {
}

void UORMusicSubsystem::StartMusic() {
}

void UORMusicSubsystem::ReturnToPreviousState() {
}

void UORMusicSubsystem::ResumeMusic() {
}

void UORMusicSubsystem::PostMusicSystemEvent(UAkAudioEvent* AkEvent) {
}

void UORMusicSubsystem::PlayStingerBossDefeated() {
}

void UORMusicSubsystem::PlayCombatMusic() {
}

void UORMusicSubsystem::PlayBossCombatMusic() {
}

void UORMusicSubsystem::PlayBackgroundMusic() {
}

void UORMusicSubsystem::PauseMusic() {
}

void UORMusicSubsystem::MusicLevelCompletedLoading() {
}

void UORMusicSubsystem::MusicEventCompletedLoading() {
}

void UORMusicSubsystem::InitAfterGameMode() {
}

UORMusicSubsystem::UORMusicSubsystem() {
    this->MusicSettings = NULL;
    this->StartMusicEvent = NULL;
    this->StopMusicEvent = NULL;
    this->BossStingerMusicEvent = NULL;
    this->PreviousLevelState = NULL;
    this->CurrentLevelState = NULL;
    this->ExplorationState = NULL;
    this->CombatState = NULL;
}

