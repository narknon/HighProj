#include "ORBattleManagerBase.h"

class AOREncounterManager;
class AORWarpBaseSlot;

void AORBattleManagerBase::WarpBaseAllEncountersComplete(AORWarpBaseSlot* WarpBaseSlot) {
}

void AORBattleManagerBase::TriggerLastManStanding() {
}

bool AORBattleManagerBase::ShouldBattleEnd() {
    return false;
}

void AORBattleManagerBase::RemoveWarpBaseSlot(AORWarpBaseSlot* WarpBaseSlot) {
}

void AORBattleManagerBase::RemoveEncounter(AOREncounterManager* EncounterManager) {
}




bool AORBattleManagerBase::IsPlayerInBoundary() const {
    return false;
}

bool AORBattleManagerBase::GetIsBattleActive() {
    return false;
}

void AORBattleManagerBase::EncounterEnd(const bool EncounterComplete, AOREncounterManager* Encounter) {
}

void AORBattleManagerBase::CheckBattleEnd() {
}

void AORBattleManagerBase::BattleEnd(const bool IsCompleted) {
}

void AORBattleManagerBase::BattleBegin() {
}

bool AORBattleManagerBase::AreEnemiesInCombat() const {
    return false;
}

void AORBattleManagerBase::AddWarpBaseSlot(TSoftObjectPtr<AORWarpBaseSlot> WarpBaseSlot) {
}

void AORBattleManagerBase::AddEncounter(AOREncounterManager* EncounterManager) {
}

AORBattleManagerBase::AORBattleManagerBase() {
    this->TimeOutOfEncounterBeforeCancel = 15.00f;
    this->StartBattleAfterIntro = true;
    this->IsBattleActive = false;
    this->OutOfBoundaryTimer = 0.00f;
    this->bShouldStartCombatMusic = true;
    this->CombatMusicEndDelay = 1.50f;
    this->LastManStandingTimerTime = 30.00f;
    this->LastManStandingLosCount = 0;
    this->LastManStandingTriggered = false;
}

