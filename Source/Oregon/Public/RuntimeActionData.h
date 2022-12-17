#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpec.h"
#include "RuntimeActionData.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;
    
    OREGON_API FRuntimeActionData();
};

