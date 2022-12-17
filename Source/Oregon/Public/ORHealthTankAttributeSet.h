#pragma once
#include "CoreMinimal.h"
#include "ORAttributeSet.h"
#include "SQGameplayAttributeData.h"
#include "ORHealthTankAttributeSet.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORHealthTankAttributeSet : public UORAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData Health;
    
    UORHealthTankAttributeSet();
};

