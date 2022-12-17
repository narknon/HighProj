#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ORGlobalEventPayload.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGlobalEventPayload : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UORGlobalEventPayload();
};

