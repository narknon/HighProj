#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ORVendorTableRow.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FORVendorTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ItemHasBeenPurchased;
    
    FORVendorTableRow();
};

