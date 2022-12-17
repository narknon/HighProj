#pragma once
#include "CoreMinimal.h"
#include "Engine/DynamicBlueprintBinding.h"
#include "OREncounterEnemyDynamicBlueprintBindingData.h"
#include "OREncounterEnemyDynamicBlueprintBinding.generated.h"

UCLASS(Blueprintable)
class OREGON_API UOREncounterEnemyDynamicBlueprintBinding : public UDynamicBlueprintBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOREncounterEnemyDynamicBlueprintBindingData> Bindings;
    
    UOREncounterEnemyDynamicBlueprintBinding();
};

