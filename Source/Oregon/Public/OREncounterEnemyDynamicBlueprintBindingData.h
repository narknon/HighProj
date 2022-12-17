#pragma once
#include "CoreMinimal.h"
#include "OREncounterEnemyDynamicBlueprintBindingData.generated.h"

USTRUCT(BlueprintType)
struct FOREncounterEnemyDynamicBlueprintBindingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionNameToBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnInfoID;
    
    OREGON_API FOREncounterEnemyDynamicBlueprintBindingData();
};

