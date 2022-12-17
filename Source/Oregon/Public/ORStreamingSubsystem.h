#pragma once
#include "CoreMinimal.h"
#include "ORWorldSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "GameplayTagContainer.h"
#include "EORWaitForRegionToFinishLoadingOutput.h"
#include "EORWaitForRegionToFinishLoadingInput.h"
#include "EORWaitForLevelToFinishLoadingOutput.h"
#include "EORStreamingTimeOfDay.h"
#include "ORStreamingLevelPresenceChangedDelegateDelegate.h"
#include "ORStreamingSubsystem.generated.h"

class UObject;
class AActor;
class APawn;
class UWorld;
class UORAmbientWarpBaseManager;
class AORStreamingWarpBaseAnchor;
class UTextureRenderTarget2D;
class ULevelStreamingDynamic;
class ALevelScriptActor;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UORStreamingSubsystem : public UORWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORStreamingLevelPresenceChangedDelegate PresenceChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingDynamic*> GlobalLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UORAmbientWarpBaseManager* AmbientWarpBaseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* CaptureFrameTexture;
    
public:
    UORStreamingSubsystem();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitForWarpBaseToFinishLoading(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORWaitForRegionToFinishLoadingInput Input, AORStreamingWarpBaseAnchor* WarpAnchor, EORWaitForRegionToFinishLoadingOutput& Out);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitForRegionToFinishLoading(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORWaitForRegionToFinishLoadingInput Input, FName RegionAddress, FName& RegeionLoaded, EORWaitForRegionToFinishLoadingOutput& Out);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitForLevelToFinishLoading(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORWaitForRegionToFinishLoadingInput Input, const TSoftObjectPtr<UWorld>& WorldRef, EORWaitForLevelToFinishLoadingOutput& Out);
    
    UFUNCTION(BlueprintCallable)
    void UnloadWarpBaseFromActor(AORStreamingWarpBaseAnchor* Anchor);
    
    UFUNCTION(BlueprintCallable)
    void UnloadWarpBase(const FName& AnchorID);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldTImeOfDay(FName LightingWorldName, EORStreamingTimeOfDay ToD);
    
    UFUNCTION(BlueprintCallable)
    void SetReloadToClosestCheckpointEnabled(const bool InEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugCheckpoint(const FName& Checkpoint);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomLevelState(const TSoftObjectPtr<UWorld>& WorldRef, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UObject* ResolveWarpBaseSoftObjectReference(const AActor* WorldContextObject, const TSoftObjectPtr<UObject>& SoftObject);
    
    UFUNCTION(BlueprintCallable)
    void RequestHitch();
    
    UFUNCTION(BlueprintCallable)
    void ReloadToLastCheckpoint(bool bDebugReload);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAmbientWarpBase(TSoftObjectPtr<AORStreamingWarpBaseAnchor> ambientBase);
    
    UFUNCTION(BlueprintCallable)
    bool PortalTeleport(const FGameplayTag& TargetPortalTag, APawn* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldBeginPlay();
    
    UFUNCTION(BlueprintCallable)
    bool LoadWarpBaseFromActor(AORStreamingWarpBaseAnchor* Anchor, const TSoftObjectPtr<UWorld>& WarpBaseLevelRef, const FRotator& ExtraRotation, bool bTransient, bool bPrestream);
    
    UFUNCTION(BlueprintCallable)
    bool LoadWarpBase(const FName& AnchorID, const TSoftObjectPtr<UWorld>& WarpBaseLevelRef, const FRotator& ExtraRotation, bool bTransient, bool bPrestream);
    
    UFUNCTION(BlueprintCallable)
    bool IsWarpBaseLoadingComplete(AORStreamingWarpBaseAnchor* Anchor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWarpBaseLoadedAnywhere(const TSoftObjectPtr<UWorld>& WarpBaseLevelRef) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStreamingSupportedInCurrentLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegionStreamingComplete(const FName& RegionAddress, bool bNeedsGameplay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPresentInMaster(const TSoftObjectPtr<UWorld>& WorldRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPresentInLevel(FName LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationStreamedInForGameplay(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelStreamingComplete(const TSoftObjectPtr<UWorld>& WorldRef);
    
    UFUNCTION(BlueprintCallable)
    void HavenTeleport(AActor* HavenPortalActor, const TSoftObjectPtr<UWorld>& HavenGameplayLevel, const FVector& ReturnLocation);
    
    UFUNCTION(BlueprintCallable)
    void HavenReturnTeleport();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMissionStateChange();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EORStreamingTimeOfDay GetTimeOfDayForCurrentLevel(AActor* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetStreamingLevelNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReloadToClosestCheckpointEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelScriptActor* GetLevelScriptActor(const TSoftObjectPtr<UWorld>& WorldRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastAirlockId();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UWorld> GetCurrentlyLoadedWarpBase(const FName& AnchorID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetAllPortalTags();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAllCheckpoints();
    
private:
    UFUNCTION(BlueprintCallable)
    AORStreamingWarpBaseAnchor* FindAnchorByTag(FGameplayTag AnchorTagName);
    
    UFUNCTION(BlueprintCallable)
    AORStreamingWarpBaseAnchor* FindAnchor(FName AnchorTagName);
    
public:
    UFUNCTION(BlueprintCallable)
    void DismissAmbientWarpBases();
    
    UFUNCTION(BlueprintCallable)
    void AirlockTransitionToRegion(const FName& RegionAddress);
    
    UFUNCTION(BlueprintCallable)
    void AirlockTransition(const TSoftObjectPtr<UWorld>& WorldRef);
    
};

