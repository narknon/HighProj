#pragma once
#include "CoreMinimal.h"
#include "UtilityInput.h"
#include "GameplayTagContainer.h"
#include "UAIInputTimeSinceOwnerAbility.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UUAIInputTimeSinceOwnerAbility : public UUtilityInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AbilityTag;
    
    UUAIInputTimeSinceOwnerAbility();
};

