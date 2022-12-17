#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "ORAttractionPointSubsystemQuery.h"
#include "BTTask_ORFindAttractionPoint.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTTask_ORFindAttractionPoint : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClaimAttractionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceNoAttractionPointReuse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAttractionPointSubsystemQuery Query;
    
    UBTTask_ORFindAttractionPoint();
};

