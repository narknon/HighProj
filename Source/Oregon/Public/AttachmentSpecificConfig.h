#pragma once
#include "CoreMinimal.h"
#include "AttachmentSpecificConfig.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FAttachmentSpecificConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreserveSymmetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FixedSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomizationWeight;
    
    FAttachmentSpecificConfig();
};

