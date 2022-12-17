#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ORMissionVarDynamicBlueprintBindingData.generated.h"

USTRUCT(BlueprintType)
struct FORMissionVarDynamicBlueprintBindingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionNameToBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    OREGON_API FORMissionVarDynamicBlueprintBindingData();
};

