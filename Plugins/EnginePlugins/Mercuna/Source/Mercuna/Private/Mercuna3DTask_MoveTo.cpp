#include "Mercuna3DTask_MoveTo.h"

class AActor;
class UMercuna3DTask_MoveTo;
class AAIController;

void UMercuna3DTask_MoveTo::OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}

UMercuna3DTask_MoveTo* UMercuna3DTask_MoveTo::MoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic) {
    return NULL;
}

UMercuna3DTask_MoveTo::UMercuna3DTask_MoveTo() {
}

