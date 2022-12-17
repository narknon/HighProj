#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "ORAttractionPointSubsystemQuery.h"
#include "BTService_ORFindAttractionPoint.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTService_ORFindAttractionPoint : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAttractionPointSubsystemQuery Query;
    
    UBTService_ORFindAttractionPoint();
};

