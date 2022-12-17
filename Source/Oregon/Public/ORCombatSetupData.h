#pragma once
#include "CoreMinimal.h"
#include "ORCombatSetupData.generated.h"

USTRUCT(BlueprintType)
struct FORCombatSetupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatAnchorRadius;
    
    OREGON_API FORCombatSetupData();
};

