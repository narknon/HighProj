#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "ORPerceptionProcessor.h"
#include "ORPerceptionProcessorState.h"
#include "Perception/AIPerceptionTypes.h"
#include "EORAIHostileAwareness.h"
#include "PerceptionResponseNoStimuliDelegateDelegate.h"
#include "PerceptionResponseTriggerDelegateDelegate.h"
#include "ORAIPerceptionComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORAIPerceptionComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerceptionResponseTriggerDelegate OnPlayerPerceptionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerceptionResponseTriggerDelegate OnNonPlayerPerceptionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerceptionResponseNoStimuliDelegate OnNoPlayerStimuli;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FORPerceptionProcessorState PerceptionStateTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EORAIHostileAwareness, FORPerceptionProcessor> PerceptionProcessors;
    
    UORAIPerceptionComponent();
    UFUNCTION(BlueprintCallable)
    bool SetPerceptionProcessorHostileAwareness(EORAIHostileAwareness NewHostileAwareness);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetPerceptionUpdatedHandler(AActor* UpdateActor, FAIStimulus Stimulus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastHostileStimuli() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTimeRemainingToSightDetectPlayer(float& TimeRemainingForDetection, EORAIHostileAwareness& ActiveProcessorHostileAwareness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSightStimulusForActor(AActor* Actor, FAIStimulus& SightStimulus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EORAIHostileAwareness GetActiveProcessorHostileAwareness() const;
    
};

