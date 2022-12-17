#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "CachedMovementChangeTime.generated.h"

USTRUCT(BlueprintType)
struct FCachedMovementChangeTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> MovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CustomMovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfChange;
    
    OREGON_API FCachedMovementChangeTime();
};

