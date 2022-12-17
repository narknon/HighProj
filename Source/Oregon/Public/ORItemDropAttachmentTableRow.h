#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ORItemDropAttachmentData.h"
#include "ORItemDropAttachmentTableRow.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FORItemDropAttachmentTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORItemDropAttachmentData ItemDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveSpawnAmount;
    
    FORItemDropAttachmentTableRow();
};

