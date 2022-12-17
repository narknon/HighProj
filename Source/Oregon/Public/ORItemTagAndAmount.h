#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ORItemTagAndAmount.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FORItemTagAndAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FORItemTagAndAmount();
};

