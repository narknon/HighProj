#pragma once
#include "CoreMinimal.h"
#include "Engine/DynamicBlueprintBinding.h"
#include "ORMissionVarDynamicBlueprintBindingData.h"
#include "ORMissionVarDynamicBlueprintBinding.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORMissionVarDynamicBlueprintBinding : public UDynamicBlueprintBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORMissionVarDynamicBlueprintBindingData> Bindings;
    
    UORMissionVarDynamicBlueprintBinding();
};

