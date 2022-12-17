#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTask.h"
#include "MercunaMoveTaskCompletedSignatureDelegate.h"
#include "AITypes.h"
#include "EMercunaMoveResult.h"
#include "Mercuna3DTask_MoveTo.generated.h"

class AActor;
class UMercuna3DTask_MoveTo;
class AAIController;

UCLASS(Blueprintable)
class MERCUNA_API UMercuna3DTask_MoveTo : public UAITask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTask::FGenericGameplayTaskDelegate OnRequestFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaMoveTaskCompletedSignature OnMoveFinished;
    
public:
    UMercuna3DTask_MoveTo();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UMercuna3DTask_MoveTo* MoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic);
    
};

