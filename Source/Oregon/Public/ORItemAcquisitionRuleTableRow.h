#pragma once
#include "CoreMinimal.h"
#include "ORItemTagAndAmount.h"
#include "EInventoryTransactionType.h"
#include "Engine/DataTable.h"
#include "EORItemAcquisitionType.h"
#include "ORItemAcquisitionRuleTableRow.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FORItemAcquisitionRuleTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORItemAcquisitionType AcquisitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORItemTagAndAmount> AcquiredItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORItemTagAndAmount> GrantItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInventoryTransactionType> GrantTransactionType;
    
    FORItemAcquisitionRuleTableRow();
};

