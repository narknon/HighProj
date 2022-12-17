#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "TargetInfoArray.h"
#include "DebugAimAssistTargetInfo.h"
#include "AimAssistTargetInfo.h"
#include "CapturedTraceTimeData.h"
#include "LezduitTargetData.h"
#include "TargetData.h"
#include "GameplayTagContainer.h"
#include "Engine/EngineTypes.h"
#include "ETargetFilterTypes.h"
#include "ORTargetablesManager.generated.h"

class UORTargetableComponent;
class UCurveFloat;

UCLASS(Blueprintable, MinimalAPI)
class AORTargetablesManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMaxDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> AimAssistTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CameraTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistAngleWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistDistanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistVisibilityWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AimAssistLOSCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAimAssistTargetInfo> CurrentTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTargetInfoArray> CurrentTickTargetingInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTargetInfoArray> LastTickTargetingInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTargetData> TargetablesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCapturedTraceTimeData TraceTimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReceivedLineOfSightResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> LineOfSightResults;
    
    UPROPERTY(EditAnywhere)
    uint32 VisibilityTraceCount;
    
    UPROPERTY(EditAnywhere)
    uint32 ReceivedVisibilityResponses;
    
    UPROPERTY(EditAnywhere)
    TMap<uint32, TWeakObjectPtr<AActor>> VisibilityTraceToActorMap;
    
    UPROPERTY(EditAnywhere)
    TMap<TWeakObjectPtr<AActor>, uint32> SuccessfulVisibilityTraceCountMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDebugAimAssistTargetInfo> DataList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLezduitTargetData> LezduitTargets;
    
    UPROPERTY(EditAnywhere)
    TMap<uint32, FHitResult> LezduitLOSResults;
    
public:
    AORTargetablesManager();
    UFUNCTION(BlueprintCallable)
    void ToggleLockCurrentTarget(bool bLock);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromTargetManager(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetTargetableActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAimAssistTargetInfo GetCurrentTargetOfType(ETargetFilterTypes TargetFilterType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EnableTargetablesWithTag(const FGameplayTag TargetableTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DisableTargetablesWithTag(const FGameplayTag TargetableTag) const;
    
    UFUNCTION(BlueprintCallable)
    void AddToTargetManager(AActor* InActor, UORTargetableComponent* Component);
    
};

