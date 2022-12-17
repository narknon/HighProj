#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Engine/EngineTypes.h"
#include "BTTask_ORWaitForTweenComplete.generated.h"

class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class OREGON_API UBTTask_ORWaitForTweenComplete : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* MyOwnerComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeToWait;
    
public:
    UBTTask_ORWaitForTweenComplete();
private:
    UFUNCTION(BlueprintCallable)
    void OnTweenComplete(const FHitResult& ImpactResult);
    
};

