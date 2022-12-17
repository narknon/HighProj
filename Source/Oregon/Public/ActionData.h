#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActionData.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct FActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayAbility>> Actions;
    
    OREGON_API FActionData();
};

