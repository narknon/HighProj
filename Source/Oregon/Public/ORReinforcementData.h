#pragma once
#include "CoreMinimal.h"
#include "ORReinforcementData.generated.h"

class AORAICharacter;

USTRUCT(BlueprintType)
struct FORReinforcementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORAICharacter*> Reinforcements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaveWasActive;
    
    OREGON_API FORReinforcementData();
};

