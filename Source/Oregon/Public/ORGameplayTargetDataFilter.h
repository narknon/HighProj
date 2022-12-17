#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "ORGameplayTargetDataFilter.generated.h"

class UInterface;
class IInterface;

USTRUCT(BlueprintType)
struct OREGON_API FORGameplayTargetDataFilter : public FGameplayTargetDataFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInterface> RequiredInterfaceClass;
    
    FORGameplayTargetDataFilter();
};

