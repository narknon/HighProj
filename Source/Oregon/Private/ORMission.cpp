#include "ORMission.h"

class UWorld;
class UORMissionsSubsystem;
class AORPlayerCharacter;

bool UORMission::StartMission(const FGameplayTag& MissionTag) {
    return false;
}

void UORMission::SetHUDVisibility(bool bShowHUD) {
}



bool UORMission::IsObjectiveComplete(const FGameplayTag& ObjectiveId) {
    return false;
}

bool UORMission::IsObjectiveActive(const FGameplayTag& ObjectiveId) {
    return false;
}

bool UORMission::IsMissionComplete(const FGameplayTag& MissionTag) {
    return false;
}

bool UORMission::IsMissionActive(const FGameplayTag& MissionTag) {
    return false;
}

AORPlayerCharacter* UORMission::GetPlayerPawn() {
    return NULL;
}

UORMissionsSubsystem* UORMission::GetMissionSubsystem() {
    return NULL;
}

bool UORMission::DiscoverPortal(FGameplayTag PortalTag) {
    return false;
}

void UORMission::DebugSetWarpBaseLevel(const FGameplayTag& AnchorID, const TSoftObjectPtr<UWorld>& LevelRef) {
}

void UORMission::DebugSetHouseLocation(EORHouseExteriorLocation Location) {
}

void UORMission::DebugCompleteMission(const FGameplayTag& TargetMissionId) {
}

void UORMission::DebugActivateObjective(const FGameplayTag& TargetObjectiveId) {
}

void UORMission::DebugActivateMission(const FGameplayTag& TargetMissionId) {
}

bool UORMission::CompleteMission(const FGameplayTag& MissionTag) {
    return false;
}


UORMission::UORMission() {
    this->bSaveOnModifyMissionVarsWithoutDefaults = true;
}

