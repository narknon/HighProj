#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORTrapManagementSubsystem.generated.h"

class AActor;
class AORTrapController;

UCLASS(Blueprintable)
class OREGON_API UORTrapManagementSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UORTrapManagementSubsystem();
    UFUNCTION(BlueprintCallable)
    void UpdateTrapControllerTarget(FName ControllerName, AActor* TargetActor, float MinDinstanceToTarget, float MaxDistanceToTarget);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTrapControllerLevel(FName ControllerName, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void StopControllerSequence(FName ControllerName);
    
    UFUNCTION(BlueprintCallable)
    void StartSpecificSequenceOnController(FName ControllerName, FName SequenceName);
    
    UFUNCTION(BlueprintCallable)
    void StartFollowTargetSequenceOnTimer(FName ControllerName, FName SequenceName, float TimeBetweenTrapActivation, float TrapDurations);
    
    UFUNCTION(BlueprintCallable)
    void StartControllerSequence(FName ControllerName, bool bRestartSequence);
    
    UFUNCTION(BlueprintCallable)
    AORTrapController* GetCurrentController(FName ControllerName);
    
};

