#pragma once
#include "CoreMinimal.h"
#include "CombatStat.h"
#include "CombatStatList.generated.h"

USTRUCT(BlueprintType)
struct FCombatStatList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCombatStat> CombatStatsList;
    
    OREGON_API FCombatStatList();
};

