#pragma once
#include "CoreMinimal.h"
#include "MissionDelegateListDelegate.h"
#include "ORMissionBoolDataBlock.generated.h"

USTRUCT(BlueprintType)
struct FORMissionBoolDataBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveOnModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionDelegateList ValueChangedCallbacks;
    
    OREGON_API FORMissionBoolDataBlock();
};

