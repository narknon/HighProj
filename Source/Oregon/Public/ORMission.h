#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ORMissionObjective.h"
#include "ORMissionBoolData.h"
#include "ORMissionIntData.h"
#include "ORMissionHeader.h"
#include "GameplayTagContainer.h"
#include "EORHouseExteriorLocation.h"
#include "ORMission.generated.h"

class UWorld;
class UORMissionsSubsystem;
class AORPlayerCharacter;

UCLASS(Blueprintable)
class OREGON_API UORMission : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORMissionHeader Tools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MissionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MissionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORMissionObjective> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PrereqMissionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveOnModifyMissionVarsWithoutDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> MissionBoolValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> MissionIntValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORMissionBoolData> MissionBoolValuesWithDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORMissionIntData> MissionIntValuesWithDefault;
    
    UORMission();
    UFUNCTION(BlueprintCallable)
    bool StartMission(const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDVisibility(bool bShowHUD);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDebugMissionPrerequisites();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDebugMissionLoadState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveComplete(const FGameplayTag& ObjectiveId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveActive(const FGameplayTag& ObjectiveId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionComplete(const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionActive(const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORPlayerCharacter* GetPlayerPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UORMissionsSubsystem* GetMissionSubsystem();
    
    UFUNCTION(BlueprintCallable)
    bool DiscoverPortal(FGameplayTag PortalTag);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetWarpBaseLevel(const FGameplayTag& AnchorID, const TSoftObjectPtr<UWorld>& LevelRef);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetHouseLocation(EORHouseExteriorLocation Location);
    
    UFUNCTION(BlueprintCallable)
    void DebugCompleteMission(const FGameplayTag& TargetMissionId);
    
    UFUNCTION(BlueprintCallable)
    void DebugActivateObjective(const FGameplayTag& TargetObjectiveId);
    
    UFUNCTION(BlueprintCallable)
    void DebugActivateMission(const FGameplayTag& TargetMissionId);
    
    UFUNCTION(BlueprintCallable)
    bool CompleteMission(const FGameplayTag& MissionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlay();
    
};

