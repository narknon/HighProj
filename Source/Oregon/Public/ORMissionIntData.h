#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ORMissionIntData.generated.h"

USTRUCT(BlueprintType)
struct FORMissionIntData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IntTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveOnModify;
    
    OREGON_API FORMissionIntData();
};

