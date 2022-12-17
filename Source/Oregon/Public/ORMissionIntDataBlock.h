#pragma once
#include "CoreMinimal.h"
#include "MissionDelegateListDelegate.h"
#include "ORMissionIntDataBlock.generated.h"

USTRUCT(BlueprintType)
struct FORMissionIntDataBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveOnModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionDelegateList ValueChangedCallbacks;
    
    OREGON_API FORMissionIntDataBlock();
};

