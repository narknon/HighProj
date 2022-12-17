#pragma once
#include "CoreMinimal.h"
#include "ORFireableInventoryItemPreview.h"
#include "ORPreviewSC_CreatureMinionFire.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORPreviewSC_CreatureMinionFire : public UORFireableInventoryItemPreview {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchSpeedOverride;
    
    UORPreviewSC_CreatureMinionFire();
};

