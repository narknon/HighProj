#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HealthDropDataTableRow.generated.h"

class AORPickupBase;

USTRUCT(BlueprintType)
struct FHealthDropDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AORPickupBase> NormalPickup;
    
    OREGON_API FHealthDropDataTableRow();
};

