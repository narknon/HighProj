#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "EORServiceScopeChangeAction.h"
#include "BTService_ORScopedBlackboardBool.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTService_ORScopedBlackboardBool : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORServiceScopeChangeAction EnterAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORServiceScopeChangeAction ExitAction;
    
    UBTService_ORScopedBlackboardBool();
};

