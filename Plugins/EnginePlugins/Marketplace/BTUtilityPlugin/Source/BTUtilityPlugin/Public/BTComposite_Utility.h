#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "EUtilitySelectionMethod.h"
#include "BTComposite_Utility.generated.h"

UCLASS(Blueprintable)
class BTUTILITYPLUGIN_API UBTComposite_Utility : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUtilitySelectionMethod SelectionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTryNextChildOnFailure;
    
    UBTComposite_Utility();
};

