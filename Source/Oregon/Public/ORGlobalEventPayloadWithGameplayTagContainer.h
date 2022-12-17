#pragma once
#include "CoreMinimal.h"
#include "ORGlobalEventPayload.h"
#include "GameplayTagContainer.h"
#include "ORGlobalEventPayloadWithGameplayTagContainer.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGlobalEventPayloadWithGameplayTagContainer : public UORGlobalEventPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTagContainer;
    
    UORGlobalEventPayloadWithGameplayTagContainer();
};

