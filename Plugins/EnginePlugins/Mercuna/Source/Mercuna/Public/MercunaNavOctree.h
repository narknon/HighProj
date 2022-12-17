#pragma once
#include "CoreMinimal.h"
#include "MercunaNavGraph.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "UObject/NoExportTypes.h"
#include "OnMercunaPathUpdatedDelegate.h"
#include "EMerOctreeDebugDrawMode.h"
#include "MercunaNavGraph.h"
#include "MercunaNavGraph.h"
#include "MercunaNavOctree.generated.h"

class UObject;
class AActor;
class UMercunaSmoothPath;
class UMercunaPath;

UCLASS(Blueprintable)
class MERCUNA_API AMercunaNavOctree : public AMercunaNavGraph {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMercunaLoadComplete);
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPawnRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPawnRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestrictToSurfaces;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowOctreeMerging;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecordOctreeDeltas;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMercunaNavGraph::FMercunaBuildComplete OnBuildLowResReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    AMercunaNavGraph::FMercunaBuildComplete OnBuildComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    AMercunaNavGraph::FMercunaRebuildComplete OnRebuildComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    AMercunaNavGraph::FMercunaRebuildComplete OnRebuildLowResReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    FMercunaLoadComplete OnLoadComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    FMercunaLoadComplete OnShortRangeLoadComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMerOctreeDebugDrawMode DebugDrawMode;
    
public:
    AMercunaNavOctree();
    UFUNCTION(BlueprintCallable)
    void SetNavigationRotation(const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void RebuildVolumes(const TArray<FBox>& Volumes, bool bStagedBuild, bool bRemoveUnseeded, bool bMergeVolumes);
    
    UFUNCTION(BlueprintCallable)
    void RebuildVolume(AActor* Volume, bool StagedBuild, bool RemoveUnseeded);
    
    UFUNCTION(BlueprintCallable)
    void RebuildChanges(bool StagedBuild, bool RemoveUnseeded);
    
    UFUNCTION(BlueprintCallable)
    void Raycast(FVector Start, FVector End, float NavigationRadius, FVector& HitPosition, bool& RayHit);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void IsReachableLatent(FVector Start, const TArray<FVector>& EndPos, float NavigationRadius, TArray<bool>& Result, TArray<FVector>& ClampedPos, UObject* WorldContextObject, FLatentActionInfo LatentInfo, float MaxPathLength, bool AccuratePathLength, float StartSearchRadius, float EndSearchRadius);
    
    UFUNCTION(BlueprintCallable)
    bool IsReachable(FVector Start, FVector End, float NavigationRadius, float MaxPathLength);
    
    UFUNCTION(BlueprintCallable)
    void IsNavigableMulti(const TArray<FVector>& Positions, float NavigationRadius, TArray<bool>& Results);
    
    UFUNCTION(BlueprintCallable)
    void IsNavigable(FVector Position, float NavigationRadius, bool& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuilding() const;
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathToLocations(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, const TArray<FVector>& Destinations, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength);
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathToLocation(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector End, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathToLocations(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, const TArray<FVector>& Destinations, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathToLocation(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector End, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathToActor(const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, AActor* GoalActor, float NavigationRadius, bool AllowPartial, float MaxPathLength, float HeightChangePenalty);
    
    UFUNCTION(BlueprintCallable)
    void ClampToNavigable(FVector Position, float NavigationRadius, float SearchRadius, FVector& ClampedPosition, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    void Build();
    
};

