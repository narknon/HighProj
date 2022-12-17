#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORItemDropAttachmentData.generated.h"

class AORItemDropAttachment;

USTRUCT(BlueprintType)
struct OREGON_API FORItemDropAttachmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORItemDropAttachment> ItemDropAttachmentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketOverride;
    
    FORItemDropAttachmentData();
};

