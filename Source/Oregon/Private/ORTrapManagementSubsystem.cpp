#include "ORTrapManagementSubsystem.h"

class AActor;
class AORTrapController;

void UORTrapManagementSubsystem::UpdateTrapControllerTarget(FName ControllerName, AActor* TargetActor, float MinDinstanceToTarget, float MaxDistanceToTarget) {
}

void UORTrapManagementSubsystem::UpdateTrapControllerLevel(FName ControllerName, int32 Level) {
}

void UORTrapManagementSubsystem::StopControllerSequence(FName ControllerName) {
}

void UORTrapManagementSubsystem::StartSpecificSequenceOnController(FName ControllerName, FName SequenceName) {
}

void UORTrapManagementSubsystem::StartFollowTargetSequenceOnTimer(FName ControllerName, FName SequenceName, float TimeBetweenTrapActivation, float TrapDurations) {
}

void UORTrapManagementSubsystem::StartControllerSequence(FName ControllerName, bool bRestartSequence) {
}

AORTrapController* UORTrapManagementSubsystem::GetCurrentController(FName ControllerName) {
    return NULL;
}

UORTrapManagementSubsystem::UORTrapManagementSubsystem() {
}

