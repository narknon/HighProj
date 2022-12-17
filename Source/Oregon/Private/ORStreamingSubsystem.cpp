#include "ORStreamingSubsystem.h"

class UObject;
class AActor;
class APawn;
class UWorld;
class AORStreamingWarpBaseAnchor;
class ALevelScriptActor;

void UORStreamingSubsystem::WaitForWarpBaseToFinishLoading(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORWaitForRegionToFinishLoadingInput Input, AORStreamingWarpBaseAnchor* WarpAnchor, EORWaitForRegionToFinishLoadingOutput& Out) {
}

void UORStreamingSubsystem::WaitForRegionToFinishLoading(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORWaitForRegionToFinishLoadingInput Input, FName RegionAddress, FName& RegeionLoaded, EORWaitForRegionToFinishLoadingOutput& Out) {
}

void UORStreamingSubsystem::WaitForLevelToFinishLoading(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORWaitForRegionToFinishLoadingInput Input, const TSoftObjectPtr<UWorld>& WorldRef, EORWaitForLevelToFinishLoadingOutput& Out) {
}

void UORStreamingSubsystem::UnloadWarpBaseFromActor(AORStreamingWarpBaseAnchor* Anchor) {
}

void UORStreamingSubsystem::UnloadWarpBase(const FName& AnchorID) {
}

void UORStreamingSubsystem::SetWorldTImeOfDay(FName LightingWorldName, EORStreamingTimeOfDay ToD) {
}

void UORStreamingSubsystem::SetReloadToClosestCheckpointEnabled(const bool InEnabled) {
}

void UORStreamingSubsystem::SetDebugCheckpoint(const FName& Checkpoint) {
}

void UORStreamingSubsystem::SetCustomLevelState(const TSoftObjectPtr<UWorld>& WorldRef, bool bEnabled) {
}

UObject* UORStreamingSubsystem::ResolveWarpBaseSoftObjectReference(const AActor* WorldContextObject, const TSoftObjectPtr<UObject>& SoftObject) {
    return NULL;
}

void UORStreamingSubsystem::RequestHitch() {
}

void UORStreamingSubsystem::ReloadToLastCheckpoint(bool bDebugReload) {
}

void UORStreamingSubsystem::RegisterAmbientWarpBase(TSoftObjectPtr<AORStreamingWarpBaseAnchor> ambientBase) {
}

bool UORStreamingSubsystem::PortalTeleport(const FGameplayTag& TargetPortalTag, APawn* Player) {
    return false;
}

void UORStreamingSubsystem::OnWorldBeginPlay() {
}

bool UORStreamingSubsystem::LoadWarpBaseFromActor(AORStreamingWarpBaseAnchor* Anchor, const TSoftObjectPtr<UWorld>& WarpBaseLevelRef, const FRotator& ExtraRotation, bool bTransient, bool bPrestream) {
    return false;
}

bool UORStreamingSubsystem::LoadWarpBase(const FName& AnchorID, const TSoftObjectPtr<UWorld>& WarpBaseLevelRef, const FRotator& ExtraRotation, bool bTransient, bool bPrestream) {
    return false;
}

bool UORStreamingSubsystem::IsWarpBaseLoadingComplete(AORStreamingWarpBaseAnchor* Anchor) {
    return false;
}

bool UORStreamingSubsystem::IsWarpBaseLoadedAnywhere(const TSoftObjectPtr<UWorld>& WarpBaseLevelRef) const {
    return false;
}

bool UORStreamingSubsystem::IsStreamingSupportedInCurrentLevel() {
    return false;
}

bool UORStreamingSubsystem::IsRegionStreamingComplete(const FName& RegionAddress, bool bNeedsGameplay) {
    return false;
}

bool UORStreamingSubsystem::IsPresentInMaster(const TSoftObjectPtr<UWorld>& WorldRef) {
    return false;
}

bool UORStreamingSubsystem::IsPresentInLevel(FName LevelName) {
    return false;
}

bool UORStreamingSubsystem::IsLocationStreamedInForGameplay(const FVector& Location) {
    return false;
}

bool UORStreamingSubsystem::IsLevelStreamingComplete(const TSoftObjectPtr<UWorld>& WorldRef) {
    return false;
}

void UORStreamingSubsystem::HavenTeleport(AActor* HavenPortalActor, const TSoftObjectPtr<UWorld>& HavenGameplayLevel, const FVector& ReturnLocation) {
}

void UORStreamingSubsystem::HavenReturnTeleport() {
}

void UORStreamingSubsystem::HandleMissionStateChange() {
}

EORStreamingTimeOfDay UORStreamingSubsystem::GetTimeOfDayForCurrentLevel(AActor* WorldContextObject) {
    return EORStreamingTimeOfDay::Day;
}

TArray<FName> UORStreamingSubsystem::GetStreamingLevelNames() {
    return TArray<FName>();
}

bool UORStreamingSubsystem::GetReloadToClosestCheckpointEnabled() const {
    return false;
}

ALevelScriptActor* UORStreamingSubsystem::GetLevelScriptActor(const TSoftObjectPtr<UWorld>& WorldRef) {
    return NULL;
}

int32 UORStreamingSubsystem::GetLastAirlockId() {
    return 0;
}

TSoftObjectPtr<UWorld> UORStreamingSubsystem::GetCurrentlyLoadedWarpBase(const FName& AnchorID) {
    return NULL;
}

TArray<FGameplayTag> UORStreamingSubsystem::GetAllPortalTags() {
    return TArray<FGameplayTag>();
}

TArray<FName> UORStreamingSubsystem::GetAllCheckpoints() {
    return TArray<FName>();
}

AORStreamingWarpBaseAnchor* UORStreamingSubsystem::FindAnchorByTag(FGameplayTag AnchorTagName) {
    return NULL;
}

AORStreamingWarpBaseAnchor* UORStreamingSubsystem::FindAnchor(FName AnchorTagName) {
    return NULL;
}

void UORStreamingSubsystem::DismissAmbientWarpBases() {
}

void UORStreamingSubsystem::AirlockTransitionToRegion(const FName& RegionAddress) {
}

void UORStreamingSubsystem::AirlockTransition(const TSoftObjectPtr<UWorld>& WorldRef) {
}

UORStreamingSubsystem::UORStreamingSubsystem() {
    this->AmbientWarpBaseManager = NULL;
    this->CaptureFrameTexture = NULL;
}

