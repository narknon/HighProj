#pragma once
#include "CoreMinimal.h"
#include "ORHomeArea.generated.h"

class AVolume;

USTRUCT(BlueprintType)
struct OREGON_API FORHomeArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> Volumes;
    
    FORHomeArea();
};

