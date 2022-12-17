#pragma once
#include "CoreMinimal.h"
#include "ORGlobalEventPayload.h"
#include "GameplayTagContainer.h"
#include "ORGlobalEventPayloadWithGameplayTag.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGlobalEventPayloadWithGameplayTag : public UORGlobalEventPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
    UORGlobalEventPayloadWithGameplayTag();
};

