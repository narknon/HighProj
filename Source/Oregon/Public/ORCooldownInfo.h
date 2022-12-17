#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ORCooldownInfo.generated.h"

USTRUCT(BlueprintType)
struct FORCooldownInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CooldownTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraCooldown;
    
    OREGON_API FORCooldownInfo();
};

