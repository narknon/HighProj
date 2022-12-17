#pragma once
#include "CoreMinimal.h"
#include "AttackTokenHandle.generated.h"

USTRUCT(BlueprintType)
struct FAttackTokenHandle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    uint32 AttackTokenId;
    
public:
    OREGON_API FAttackTokenHandle();
};

