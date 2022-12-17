#include "OREncounterManager.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"

class UObject;
class AActor;
class AORCharacter;
class AORAICharacter;
class AORAuxillarySpawnable;

void AOREncounterManager::UnregisterEnemy(AORAICharacter* Enemy) {
}

void AOREncounterManager::TryEncounterAdvance() {
}

void AOREncounterManager::TriggerLastManStanding() {
}

bool AOREncounterManager::ShouldShowAllEnemiesOnCompass() const {
    return false;
}

void AOREncounterManager::SetPartyHomeArea(FGameplayTag PartyID, FORHomeArea HomeArea) {
}

void AOREncounterManager::SetPartyAllowPointsOutsideHomeArea(FGameplayTag PartyID, bool bNewAllow) {
}

void AOREncounterManager::SetEncounterTriggeredAlready(const bool NewEncounterTriggeredAlready) {
}

void AOREncounterManager::SetEncounterActive(const bool NewActive) {
}

void AOREncounterManager::SetActiveWaveIndex(const int32 NewActiveWaveIndex) {
}

void AOREncounterManager::RegisterEnemy(AORAICharacter* Enemy, const int32 Wave, const bool IsEncounterSpawn) {
}

bool AOREncounterManager::IsPlayerInBoundary() const {
    return false;
}

FName AOREncounterManager::GetWaveName(const int32 WaveIndex) const {
    return NAME_None;
}

TArray<FORWaveInfo> AOREncounterManager::GetWaveInfos() {
    return TArray<FORWaveInfo>();
}

FORWaveInfo AOREncounterManager::GetWave(const FName& WaveName) const {
    return FORWaveInfo{};
}

int32 AOREncounterManager::GetRemainingReinforcementsCountInWave(const int32 WaveIndex) const {
    return 0;
}

int32 AOREncounterManager::GetRemainingEnemyCountInWave(const int32 WaveIndex) const {
    return 0;
}

int32 AOREncounterManager::GetRemainingEnemyCount() const {
    return 0;
}

TArray<FORWaveInfo> AOREncounterManager::GetPartyWaves(FGameplayTag PartyID) {
    return TArray<FORWaveInfo>();
}

TArray<AORAICharacter*> AOREncounterManager::GetPartyEnemies(FGameplayTag PartyID) {
    return TArray<AORAICharacter*>();
}

bool AOREncounterManager::GetEncounterTriggeredAlready() const {
    return false;
}

bool AOREncounterManager::GetEncounterActive() const {
    return false;
}

int32 AOREncounterManager::GetActiveWaveIndex() const {
    return 0;
}

TArray<AORAICharacter*> AOREncounterManager::GetActiveEnemiesInEncounter() const {
    return TArray<AORAICharacter*>();
}

void AOREncounterManager::EnemyTookDamage(UObject* Damager, AORCharacter* Damaged, const FHitResult& HitResult, const float Damage, const FGameplayTagContainer& DamageTags) {
}

void AOREncounterManager::EnemySpawnFailed(const FOREnemySpawningData& EnemySpawningData) {
}

void AOREncounterManager::EnemySpawned(AORAICharacter* Enemy, const FOREnemySpawningData& EnemySpawningData) {
}

void AOREncounterManager::EnemyPerceptionUpdated(AORAICharacter* Enemy, AActor* Causer, const FAIStimulus& StimulusData, const EORAIHostileAwareness CurrentHostileAwareness) {
}

void AOREncounterManager::EnemyDied(AORAICharacter* Enemy, UObject* Killer) {
}

void AOREncounterManager::EnemyDestroyed(AORAICharacter* DestroyedActor) {
}

bool AOREncounterManager::EncounterTriggerWave(const int32 WaveIndex) {
    return false;
}

void AOREncounterManager::EncounterSpawnWave() {
}

void AOREncounterManager::EncounterReset(const bool Complete) {
}

bool AOREncounterManager::EncounterReinforce(FORReinforcementInfo ReinforcementInfo) {
    return false;
}

void AOREncounterManager::EncounterEnd(const bool Complete) {
}

void AOREncounterManager::EncounterBegin() {
}

void AOREncounterManager::EncounterAdvance() {
}

void AOREncounterManager::ClearPartyHomeArea(FGameplayTag PartyID) {
}

void AOREncounterManager::ClearEnemies() {
}

bool AOREncounterManager::CanEncounterBegin_Implementation() {
    return false;
}

bool AOREncounterManager::CanEncounterAdvance_Implementation() {
    return false;
}

bool AOREncounterManager::BP_GetDefensiveCenterPointLocation(FVector& DefensiveCenterPointLocation) const {
    return false;
}

void AOREncounterManager::AuxillaryActorSpawned(AORAuxillarySpawnable* Actor, const FOREnemySpawningData& EnemySpawningData) {
}

bool AOREncounterManager::AreEnemiesInCombat() const {
    return false;
}

bool AOREncounterManager::AllWavesTriggered() const {
    return false;
}

AOREncounterManager::AOREncounterManager() {
    this->OnlySpawnAheadOfPlayer = false;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->DefensiveCenterPoint = CreateDefaultSubobject<USceneComponent>(TEXT("DefensiveCenterPoint"));
    this->AICharacterLookupTable = NULL;
    this->bUseDefensiveCenterPoint = false;
    this->EncounterActive = false;
    this->EncounterRetriggerable = false;
    this->ClearEnemiesOnDestroy = true;
    this->AggroSlots = 0;
    this->LastManStandingTimerTime = 30.00f;
    this->LastManStandingLosCount = 0;
    this->LastManStandingTriggered = false;
    this->NavMeshAutoKillEnabled = true;
    this->FallingAutoKillEnabled = true;
    this->NoLOSAutoKillTimerTrigger = EORSpawnTriggerTypes::EST_Automatic_CountRemaining_CurrentTotal;
    this->NoLOSAutoKillTimerTriggerValue = 1.00f;
    this->ForceKillAutoKillTimerTrigger = EORSpawnTriggerTypes::EST_Automatic_CountRemaining_CurrentTotal;
    this->ForceKillAutoKillTimerTriggerValue = 1.00f;
    this->CheckForAttractionPoints = true;
    this->BaseWaveItemDropTable = NULL;
}

