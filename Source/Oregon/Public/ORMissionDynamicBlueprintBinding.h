#pragma once
#include "CoreMinimal.h"
#include "Engine/DynamicBlueprintBinding.h"
#include "ORMissionDynamicBlueprintBindingData.h"
#include "ORMissionDynamicBlueprintBinding.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORMissionDynamicBlueprintBinding : public UDynamicBlueprintBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORMissionDynamicBlueprintBindingData> Bindings;
    
    UORMissionDynamicBlueprintBinding();
};

