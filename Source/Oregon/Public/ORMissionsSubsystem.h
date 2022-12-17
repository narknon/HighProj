#pragma once
#include "CoreMinimal.h"
#include "ORWorldSubsystem.h"
#include "ORMissionCallbackBlock.h"
#include "ORMissionBoolDataBlock.h"
#include "ORMissionIntDataBlock.h"
#include "DeferredMissionCallback.h"
#include "ORMissionSubObjective.h"
#include "GameplayTagContainer.h"
#include "EORMissionState.h"
#include "MissionStateDelegateDelegate.h"
#include "MissionObjectiveProgressDelegateListDelegate.h"
#include "MissionObjectiveProgressDelegateDelegate.h"
#include "MissionObjectiveDelegateListDelegate.h"
#include "MissionObjectiveDelegateDelegate.h"
#include "MissionDelegateListDelegate.h"
#include "MissionDelegateDelegate.h"
#include "MissionStateDelegateListDelegate.h"
#include "ORMissionsSubsystem.generated.h"

class UObject;
class UWorld;
class UORMission;
class ULevel;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UORMissionsSubsystem : public UORWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UORMission*> MissionBPs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORMissionCallbackBlock> CallbackBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionStateDelegateList StateCallbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionStateDelegateList MissionOrObjectiveStartedCallbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionDelegateList MissionStartCallbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionDelegateList MissionCompleteCallbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionObjectiveDelegateList ObjectiveStartCallbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionObjectiveDelegateList ObjectiveCompleteCallbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionObjectiveProgressDelegateList ProgressCallbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeferredMissionCallback> DeferredMissionCallbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FORMissionIntDataBlock> IntValueTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FORMissionBoolDataBlock> BoolValueTags;
    
public:
    UORMissionsSubsystem();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindToObjectiveStart(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag, const FMissionDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindToObjectiveComplete(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag, const FMissionDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindToMissionVarChanged(UObject* WorldContextObject, const FGameplayTag& MissionVar, const FMissionDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindToMissionStateChange(UObject* WorldContextObject, const FMissionStateDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindToMissionStart(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindToMissionProgress(UObject* WorldContextObject, FMissionObjectiveProgressDelegate Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindToMissionOrObjectiveStarted(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionStateDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindToMissionOrObjectiveCompleted(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionStateDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindToMissionComplete(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindToAnyObjectiveStarted(UObject* WorldContextObject, const FMissionObjectiveDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindToAnyObjectiveCompleted(UObject* WorldContextObject, const FMissionObjectiveDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindToAnyMissionStarted(UObject* WorldContextObject, const FMissionDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindToAnyMissionCompleted(UObject* WorldContextObject, const FMissionDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ToggleMissionBool(UObject* WorldContextObject, const FGameplayTag& MissionBoolTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool StartObjective(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool StartMission(UObject* WorldContextObject, const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetOverrideMissionObjectiveText(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag, const FText& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMissionInt(UObject* WorldContextObject, const FGameplayTag& MissionIntTag, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMissionBool(UObject* WorldContextObject, const FGameplayTag& MissionBoolTag, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugObjective(const FGameplayTag& ObjectiveTag);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMission(const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelAddedToWorld(ULevel* InLevel, UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsObjectiveVisibleOnHUD(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsObjectiveInactive(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsObjectiveComplete(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsObjectiveActive(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMissionInactive(UObject* WorldContextObject, const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMissionComplete(UObject* WorldContextObject, const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMissionActive(UObject* WorldContextObject, const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void IncrementMissionInt(UObject* WorldContextObject, const FGameplayTag& MissionIntTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetParentObjective(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag, FGameplayTag& OutParentObjective);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetObjectiveText(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EORMissionState GetObjectiveState(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGameplayTag GetObjectivePortalTag(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetObjectiveName(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FORMissionSubObjective GetObjectiveConfig(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetObjectiveColorId(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMissionVarValue(UObject* WorldContextObject, const FGameplayTag& MissionVarTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetMissionText(UObject* WorldContextObject, const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EORMissionState GetMissionState(UObject* WorldContextObject, const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EORMissionState GetMissionOrObjectiveState(UObject* WorldContextObject, const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetMissionName(UObject* WorldContextObject, const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMissionInt(UObject* WorldContextObject, const FGameplayTag& MissionIntTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetMissionDebugString(UObject* WorldContextObject, const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UORMission* GetMissionConfig(UObject* WorldContextObject, const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetMissionBool(UObject* WorldContextObject, const FGameplayTag& MissionBoolTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FGameplayTag> GetAllSubObjectives(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FGameplayTag> GetAllPrimaryObjectives(UObject* WorldContextObject, const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FGameplayTag> GetAllObjectives(UObject* WorldContextObject, const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FGameplayTag> GetAllMissions(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FGameplayTag> GetAllActiveObjectiveTags(UObject* WorldContextObject, const FGameplayTag& MissionTag, bool bOnlyVisibleOnHud);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FGameplayTag> GetAllActiveMissionTags(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FGameplayTag> GetActiveObjectives(UObject* WorldContextObject, const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FGameplayTag> GetActiveMissions(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DeccrementMissionInt(UObject* WorldContextObject, const FGameplayTag& MissionIntTag, bool bClampAtZero);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CompleteObjective(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag, bool bCheckObjectivesForCompletion, bool bStartNextObjective);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CompleteMission(UObject* WorldContextObject, const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearOverrideMissionObjectiveText(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindToObjectiveStart(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag, const FMissionDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindToObjectiveComplete(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag, const FMissionDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindToMissionVarChanged(UObject* WorldContextObject, const FGameplayTag& MissionVar, const FMissionDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindToMissionStateChange(UObject* WorldContextObject, const FMissionStateDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindToMissionStart(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindToMissionProgress(UObject* WorldContextObject, FMissionObjectiveProgressDelegate Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindToMissionOrObjectiveStarted(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionStateDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindToMissionOrObjectiveCompleted(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionStateDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindToMissionComplete(UObject* WorldContextObject, const FGameplayTag& MissionTag, const FMissionDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindToAnyObjectiveStarted(UObject* WorldContextObject, const FMissionObjectiveDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindToAnyObjectiveCompleted(UObject* WorldContextObject, const FMissionObjectiveDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindToAnyMissionStarted(UObject* WorldContextObject, const FMissionDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindToAnyMissionCompleted(UObject* WorldContextObject, const FMissionDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool AllowObjectiveDebugLoad(UObject* WorldContextObject, const FGameplayTag& ObjectiveTag);
    
};

