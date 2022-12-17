#include "ORMissionsSubsystem.h"

class UObject;
class UWorld;
class UORMission;
class ULevel;

void UORMissionsSubsystem::UnbindToObjectiveStart(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag, const FMissionDelegate& Callback) {
}

void UORMissionsSubsystem::UnbindToObjectiveComplete(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag, const FMissionDelegate& Callback) {
}

void UORMissionsSubsystem::UnbindToMissionVarChanged(UObject* WorldContextObject, const FGameplayTag& MissionVar, const FMissionDelegate& Callback) {
}

void UORMissionsSubsystem::UnbindToMissionStateChange(UObject* WorldContextObject, const FMissionStateDelegate& Callback) {
}

void UORMissionsSubsystem::UnbindToMissionStart(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionDelegate& Callback) {
}

void UORMissionsSubsystem::UnbindToMissionProgress(UObject* WorldContextObject, FMissionObjectiveProgressDelegate Callback) {
}

void UORMissionsSubsystem::UnbindToMissionOrObjectiveStarted(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionStateDelegate& Callback) {
}

void UORMissionsSubsystem::UnbindToMissionOrObjectiveCompleted(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionStateDelegate& Callback) {
}

void UORMissionsSubsystem::UnbindToMissionComplete(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionDelegate& Callback) {
}

void UORMissionsSubsystem::UnbindToAnyObjectiveStarted(UObject* WorldContextObject, const FMissionObjectiveDelegate& Callback) {
}

void UORMissionsSubsystem::UnbindToAnyObjectiveCompleted(UObject* WorldContextObject, const FMissionObjectiveDelegate& Callback) {
}

void UORMissionsSubsystem::UnbindToAnyMissionStarted(UObject* WorldContextObject, const FMissionDelegate& Callback) {
}

void UORMissionsSubsystem::UnbindToAnyMissionCompleted(UObject* WorldContextObject, const FMissionDelegate& Callback) {
}

void UORMissionsSubsystem::ToggleMissionBool(UObject* WorldContextObject, const FGameplayTag& MissionBoolTag) {
}

bool UORMissionsSubsystem::StartObjective(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag) {
    return false;
}

bool UORMissionsSubsystem::StartMission(UObject* WorldContextObject, const FGameplayTag& MissionTag) {
    return false;
}

void UORMissionsSubsystem::SetOverrideMissionObjectiveText(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag, const FText& Text) {
}

void UORMissionsSubsystem::SetMissionInt(UObject* WorldContextObject, const FGameplayTag& MissionIntTag, int32 Value) {
}

void UORMissionsSubsystem::SetMissionBool(UObject* WorldContextObject, const FGameplayTag& MissionBoolTag, bool bValue) {
}

void UORMissionsSubsystem::SetDebugObjective(const FGameplayTag& ObjectiveTag) {
}

void UORMissionsSubsystem::SetDebugMission(const FGameplayTag& MissionTag) {
}

void UORMissionsSubsystem::OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld) {
}

void UORMissionsSubsystem::OnLevelAddedToWorld(ULevel* InLevel, UWorld* InWorld) {
}

bool UORMissionsSubsystem::IsObjectiveVisibleOnHUD(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag) {
    return false;
}

bool UORMissionsSubsystem::IsObjectiveInactive(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag) {
    return false;
}

bool UORMissionsSubsystem::IsObjectiveComplete(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag) {
    return false;
}

bool UORMissionsSubsystem::IsObjectiveActive(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag) {
    return false;
}

bool UORMissionsSubsystem::IsMissionInactive(UObject* WorldContextObject, const FGameplayTag& MissionTag) {
    return false;
}

bool UORMissionsSubsystem::IsMissionComplete(UObject* WorldContextObject, const FGameplayTag& MissionTag) {
    return false;
}

bool UORMissionsSubsystem::IsMissionActive(UObject* WorldContextObject, const FGameplayTag& MissionTag) {
    return false;
}

void UORMissionsSubsystem::IncrementMissionInt(UObject* WorldContextObject, const FGameplayTag& MissionIntTag) {
}

bool UORMissionsSubsystem::GetParentObjective(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag, FGameplayTag& OutParentObjective) {
    return false;
}

FText UORMissionsSubsystem::GetObjectiveText(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag) {
    return FText::GetEmpty();
}

EORMissionState UORMissionsSubsystem::GetObjectiveState(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag) {
    return EORMissionState::Inactive;
}

FGameplayTag UORMissionsSubsystem::GetObjectivePortalTag(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag) {
    return FGameplayTag{};
}

FText UORMissionsSubsystem::GetObjectiveName(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag) {
    return FText::GetEmpty();
}

FORMissionSubObjective UORMissionsSubsystem::GetObjectiveConfig(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag) {
    return FORMissionSubObjective{};
}

int32 UORMissionsSubsystem::GetObjectiveColorId(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag) {
    return 0;
}

int32 UORMissionsSubsystem::GetMissionVarValue(UObject* WorldContextObject, const FGameplayTag& MissionVarTag) {
    return 0;
}

FText UORMissionsSubsystem::GetMissionText(UObject* WorldContextObject, const FGameplayTag& MissionTag) {
    return FText::GetEmpty();
}

EORMissionState UORMissionsSubsystem::GetMissionState(UObject* WorldContextObject, const FGameplayTag& MissionTag) {
    return EORMissionState::Inactive;
}

EORMissionState UORMissionsSubsystem::GetMissionOrObjectiveState(UObject* WorldContextObject, const FGameplayTag& MissionTag) {
    return EORMissionState::Inactive;
}

FText UORMissionsSubsystem::GetMissionName(UObject* WorldContextObject, const FGameplayTag& MissionTag) {
    return FText::GetEmpty();
}

int32 UORMissionsSubsystem::GetMissionInt(UObject* WorldContextObject, const FGameplayTag& MissionIntTag) {
    return 0;
}

FString UORMissionsSubsystem::GetMissionDebugString(UObject* WorldContextObject, const FGameplayTag& MissionTag) {
    return TEXT("");
}

UORMission* UORMissionsSubsystem::GetMissionConfig(UObject* WorldContextObject, const FGameplayTag& MissionTag) {
    return NULL;
}

bool UORMissionsSubsystem::GetMissionBool(UObject* WorldContextObject, const FGameplayTag& MissionBoolTag) {
    return false;
}

TArray<FGameplayTag> UORMissionsSubsystem::GetAllSubObjectives(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UORMissionsSubsystem::GetAllPrimaryObjectives(UObject* WorldContextObject, const FGameplayTag& MissionTag) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UORMissionsSubsystem::GetAllObjectives(UObject* WorldContextObject, const FGameplayTag& MissionTag) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UORMissionsSubsystem::GetAllMissions(UObject* WorldContextObject) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UORMissionsSubsystem::GetAllActiveObjectiveTags(UObject* WorldContextObject, const FGameplayTag& MissionTag, bool bOnlyVisibleOnHud) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UORMissionsSubsystem::GetAllActiveMissionTags(UObject* WorldContextObject) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UORMissionsSubsystem::GetActiveObjectives(UObject* WorldContextObject, const FGameplayTag& MissionTag) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UORMissionsSubsystem::GetActiveMissions(UObject* WorldContextObject) {
    return TArray<FGameplayTag>();
}

void UORMissionsSubsystem::DeccrementMissionInt(UObject* WorldContextObject, const FGameplayTag& MissionIntTag, bool bClampAtZero) {
}

bool UORMissionsSubsystem::CompleteObjective(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag, bool bCheckObjectivesForCompletion, bool bStartNextObjective) {
    return false;
}

bool UORMissionsSubsystem::CompleteMission(UObject* WorldContextObject, const FGameplayTag& MissionTag) {
    return false;
}

void UORMissionsSubsystem::ClearOverrideMissionObjectiveText(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag) {
}

void UORMissionsSubsystem::BindToObjectiveStart(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag, const FMissionDelegate& Callback) {
}

void UORMissionsSubsystem::BindToObjectiveComplete(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag, const FMissionDelegate& Callback) {
}

void UORMissionsSubsystem::BindToMissionVarChanged(UObject* WorldContextObject, const FGameplayTag& MissionVar, const FMissionDelegate& Callback) {
}

void UORMissionsSubsystem::BindToMissionStateChange(UObject* WorldContextObject, const FMissionStateDelegate& Callback) {
}

void UORMissionsSubsystem::BindToMissionStart(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionDelegate& Callback) {
}

void UORMissionsSubsystem::BindToMissionProgress(UObject* WorldContextObject, FMissionObjectiveProgressDelegate Callback) {
}

void UORMissionsSubsystem::BindToMissionOrObjectiveStarted(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionStateDelegate& Callback) {
}

void UORMissionsSubsystem::BindToMissionOrObjectiveCompleted(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionStateDelegate& Callback) {
}

void UORMissionsSubsystem::BindToMissionComplete(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionDelegate& Callback) {
}

void UORMissionsSubsystem::BindToAnyObjectiveStarted(UObject* WorldContextObject, const FMissionObjectiveDelegate& Callback) {
}

void UORMissionsSubsystem::BindToAnyObjectiveCompleted(UObject* WorldContextObject, const FMissionObjectiveDelegate& Callback) {
}

void UORMissionsSubsystem::BindToAnyMissionStarted(UObject* WorldContextObject, const FMissionDelegate& Callback) {
}

void UORMissionsSubsystem::BindToAnyMissionCompleted(UObject* WorldContextObject, const FMissionDelegate& Callback) {
}

bool UORMissionsSubsystem::AllowObjectiveDebugLoad(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag) {
    return false;
}

UORMissionsSubsystem::UORMissionsSubsystem() {
}

