#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ORGameplayTagTimeData.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FORGameplayTagTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    FORGameplayTagTimeData();
};

