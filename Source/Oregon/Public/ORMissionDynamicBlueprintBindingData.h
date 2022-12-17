#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EORMissionNodeActivationType.h"
#include "EORMissionState.h"
#include "ORMissionDynamicBlueprintBindingData.generated.h"

USTRUCT(BlueprintType)
struct FORMissionDynamicBlueprintBindingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionNameToBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORMissionState Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORMissionNodeActivationType ActivationType;
    
    OREGON_API FORMissionDynamicBlueprintBindingData();
};

