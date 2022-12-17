#include "ORAICreatureMinionController.h"

class UObject;
class AActor;
class AORCharacter;
class AORCreatureWeaponItem;
class AORCreaturePheromoneMarker;

void AORAICreatureMinionController::SetCreatureWeaponItem(AORCreatureWeaponItem* NewCreatureWeaponItem) {
}

void AORAICreatureMinionController::OnDefendLocationMarkerDestroyed(AActor* DestroyedActor) {
}

void AORAICreatureMinionController::OnCreaturePheromonesApplied(AORCreaturePheromoneMarker* PheromoneMarker) {
}

void AORAICreatureMinionController::OnAttackCharacterTargetDied(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags) {
}

bool AORAICreatureMinionController::IsValidAttackTarget(AORCharacter* AttackCharacterTarget) {
    return false;
}

bool AORAICreatureMinionController::GetIsRecalling() const {
    return false;
}

AORCreatureWeaponItem* AORAICreatureMinionController::GetCreatureWeaponItem() const {
    return NULL;
}

void AORAICreatureMinionController::EndTask() {
}

void AORAICreatureMinionController::CompleteTask() {
}

void AORAICreatureMinionController::BeginRetrieveActorTask(AActor* RetrieveTarget) {
}

void AORAICreatureMinionController::BeginRecallMinionTask(const bool ForcedRecall) {
}

void AORAICreatureMinionController::BeginDefendLocationTask(AORCreaturePheromoneMarker* DefendLocationMarker) {
}

void AORAICreatureMinionController::BeginAttackCharacterTask(AORCharacter* AttackCharacterTarget) {
}

AORAICreatureMinionController::AORAICreatureMinionController() {
    this->CreatureWeaponItem = NULL;
    this->CurrentPheromoneTask = NULL;
    this->CurrentCreatureMinionTask = EORCreatureMinionTask::ECMT_None;
}

