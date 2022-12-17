#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ORLootTableRow.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FORLootTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalDropChanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceIncrements;
    
    FORLootTableRow();
};

