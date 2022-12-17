#pragma once
#include "CoreMinimal.h"
#include "ORMissionSubObjective.h"
#include "ORMissionObjective.generated.h"

USTRUCT(BlueprintType)
struct FORMissionObjective : public FORMissionSubObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORMissionSubObjective> SubObjectives;
    
    OREGON_API FORMissionObjective();
};

