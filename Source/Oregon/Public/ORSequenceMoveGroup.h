#pragma once
#include "CoreMinimal.h"
#include "ORSequenceMoveGroup.generated.h"

class AORSequenceMoveTarget;

USTRUCT(BlueprintType)
struct FORSequenceMoveGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORSequenceMoveTarget*> Targets;
    
    OREGON_API FORSequenceMoveGroup();
};

