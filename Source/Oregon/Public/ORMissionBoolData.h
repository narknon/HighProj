#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ORMissionBoolData.generated.h"

USTRUCT(BlueprintType)
struct FORMissionBoolData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BoolTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveOnModify;
    
    OREGON_API FORMissionBoolData();
};

