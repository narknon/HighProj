#include "OREncounterSubsystem.h"

class UWorld;
class AORAICharacter;
class AOREncounterManager;
class ULevel;

void UOREncounterSubsystem::UntrackSpawns(int32 NumSpawns) {
}

void UOREncounterSubsystem::UntrackSingleSpawn() {
}

void UOREncounterSubsystem::TrackSpawns(int32 NumSpawns) {
}

void UOREncounterSubsystem::TrackNewSingleSpawn() {
}

void UOREncounterSubsystem::OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld) {
}

void UOREncounterSubsystem::OnLevelAddedToWorld(ULevel* InLevel, UWorld* InWorld) {
}

bool UOREncounterSubsystem::IsEncounterActive() {
    return false;
}

bool UOREncounterSubsystem::IsBattleActive() {
    return false;
}

TArray<AORAICharacter*> UOREncounterSubsystem::GetNonEncounterEnemies() const {
    return TArray<AORAICharacter*>();
}

TArray<AOREncounterManager*> UOREncounterSubsystem::GetActiveEncounters() const {
    return TArray<AOREncounterManager*>();
}

int32 UOREncounterSubsystem::ClampNumSpawns(int32 RequestedNumSpawns) {
    return 0;
}

UOREncounterSubsystem::UOREncounterSubsystem() {
}

