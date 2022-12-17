#include "MercunaNavOctree.h"

class UObject;
class AActor;
class UMercunaSmoothPath;
class UMercunaPath;

void AMercunaNavOctree::SetNavigationRotation(const FRotator& Rotation) {
}

void AMercunaNavOctree::RebuildVolumes(const TArray<FBox>& Volumes, bool bStagedBuild, bool bRemoveUnseeded, bool bMergeVolumes) {
}

void AMercunaNavOctree::RebuildVolume(AActor* Volume, bool StagedBuild, bool RemoveUnseeded) {
}

void AMercunaNavOctree::RebuildChanges(bool StagedBuild, bool RemoveUnseeded) {
}

void AMercunaNavOctree::Raycast(FVector Start, FVector End, float NavigationRadius, FVector& HitPosition, bool& RayHit) {
}

void AMercunaNavOctree::IsReachableLatent(FVector Start, const TArray<FVector>& EndPos, float NavigationRadius, TArray<bool>& Result, TArray<FVector>& ClampedPos, UObject* WorldContextObject, FLatentActionInfo LatentInfo, float MaxPathLength, bool AccuratePathLength, float StartSearchRadius, float EndSearchRadius) {
}

bool AMercunaNavOctree::IsReachable(FVector Start, FVector End, float NavigationRadius, float MaxPathLength) {
    return false;
}

void AMercunaNavOctree::IsNavigableMulti(const TArray<FVector>& Positions, float NavigationRadius, TArray<bool>& Results) {
}

void AMercunaNavOctree::IsNavigable(FVector Position, float NavigationRadius, bool& Result) {
}

bool AMercunaNavOctree::IsBuilding() const {
    return false;
}

UMercunaSmoothPath* AMercunaNavOctree::FindSmoothPathToLocations(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, const TArray<FVector>& Destinations, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength) {
    return NULL;
}

UMercunaSmoothPath* AMercunaNavOctree::FindSmoothPathToLocation(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector End, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength) {
    return NULL;
}

UMercunaPath* AMercunaNavOctree::FindPathToLocations(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, const TArray<FVector>& Destinations, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty) {
    return NULL;
}

UMercunaPath* AMercunaNavOctree::FindPathToLocation(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector End, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty) {
    return NULL;
}

UMercunaPath* AMercunaNavOctree::FindPathToActor(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, AActor* GoalActor, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty) {
    return NULL;
}

void AMercunaNavOctree::ClampToNavigable(FVector Position, float NavigationRadius, float SearchRadius, FVector& ClampedPosition, bool& Result) {
}

void AMercunaNavOctree::Build() {
}

AMercunaNavOctree::AMercunaNavOctree() {
    this->MinPawnRadius = 1;
    this->MaxPawnRadius = 3;
    this->bRestrictToSurfaces = false;
    this->bAllowOctreeMerging = false;
    this->bRecordOctreeDeltas = false;
    this->DebugDrawMode = EMerOctreeDebugDrawMode::DISABLED;
}

